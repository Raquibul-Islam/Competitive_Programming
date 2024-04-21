#include <iostream>
#include <vector>

using namespace std;

const int N = 100000;

vector<int> sieve_sum_of_coprimes() {
    vector<int> sum_of_coprimes(N + 1, 0); // Initialize vector with size N+1 and all elements as 0
    for (int i = 1; i <= N; ++i) {
        sum_of_coprimes[i] = i; // Initialize each number's sum with itself
    }
    for (int i = 2; i <= N; ++i) {
        if (sum_of_coprimes[i] == i) {  // i is prime
            for (int j = i; j <= N; j += i) {
                sum_of_coprimes[j] -= sum_of_coprimes[j] / i;
            }
        }
    }
    return sum_of_coprimes;
}

int main() {
    vector<int> sum_of_coprimes = sieve_sum_of_coprimes();
    
    // Output the sum of co-primes for each number from 1 to 100000
    long long total_sum = 0;
    for (int i = 1; i <= N; ++i) {
        total_sum += sum_of_coprimes[i];
    }
    cout << "Total Sum of Co-primes: " << total_sum << endl;
    
    return 0;
}
