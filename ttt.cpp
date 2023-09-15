#include <iostream>
#include <vector>

void sieve(int n) {
    std::vector<bool> isPrime(n + 1, true); 
    
    for (int p = 2; p * p <= n; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }
    
    // Print prime numbers
    std::cout << "Prime numbers from 1 to " << n << " are: ";
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    
    sieve(n);
    
    return 0;
}
