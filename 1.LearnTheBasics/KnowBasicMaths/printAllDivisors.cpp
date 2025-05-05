#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

void printDivisors(int n) {
    // Loop from 1 to n
    for (int i = 1; i <= n; i++) {
        // If i is a divisor of n
        if (n % i == 0) {
            cout << i << " "; // Print the divisor
            // Check if the divisor is not the same as n/i to avoid duplicates
        }
    }
    cout << endl; // Print a newline at the end
}


int main() {
    
    int n;

    cin >> n;

    printDivisors(n);

    return 0;
}