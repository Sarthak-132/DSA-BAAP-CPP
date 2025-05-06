
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;
    cin >> n; // Input the number to check if it's prime

    bool isPrime = true; // Assume the number is prime initially
    if (n <= 1) { // Check for numbers less than or equal to 1
        isPrime = false; // 0 and 1 are not prime numbers
    } else {
        for (int i = 2; i <= sqrt(n); i++) { // Check divisibility from 2 to sqrt(n)
            if (n % i == 0) { // If n is divisible by i, it's not prime
                isPrime = false;
                break; // No need to check further, exit the loop
            }
        }
    }
    
    if (isPrime) {
        cout << n << " is a prime number." << endl; // Output if prime
    } else {
        cout << n << " is not a prime number." << endl; // Output if not prime
    }
    
    return 0;
}