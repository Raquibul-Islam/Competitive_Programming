#include <iostream>
#include <numeric> // for std::gcd

int main() {
    int a = 12, b = 18;

    int gcd =gcd(a, b); // Calculate GCD using std::gcd()
    int lcm = (a * b) / gcd;  // Calculate LCM using the formula

    std::cout << "LCM of " << a << " and " << b << " is: " << lcm << std::endl;

    return 0;
}