#include <iostream>
#include <vector>

using namespace std;

vector<int> calculate_sum_of_coprimes(int n) {
    vector<int> sum_of_coprimes(n + 1, 0); // Initialize vector with size n+1 and all elements as 0
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; j += i) {
            sum_of_coprimes[j] += i;
        }
    }
    return sum_of_coprimes;
}

int main() {
    int n = 10000;
    vector<int> sum_of_coprimes = calculate_sum_of_coprimes(n);
    
    // Output the sum of co-primes for each number from 1 to 10000
    for (int i = 1; i <= n; ++i) {
        cout << "Number: " << i << ", Sum of Co-primes: " << sum_of_coprimes[i] << endl;
    }
    
    return 0;
}
