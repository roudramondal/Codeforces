#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Create an array to mark primes
    bool is_prime[1001]; // Since n <= 1000
    for (int i = 0; i <= n; i++) {
        is_prime[i] = true; // Initially assume all numbers are prime
    }

    // Mark 0 and 1 as not prime
    is_prime[0] = false;
    is_prime[1] = false;

    // Implementing Sieve of Eratosthenes
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false; // Mark all multiples of i as not prime
            }
        }
    }

    // Print all prime numbers
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
