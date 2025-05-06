#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

// Function to calculate GCD and LCM of two numbers

int gcd(int a, int b) {
    while(a > 0 && b > 0) {
        if(a > b) {
            a = a % b; // Reduce a by the remainder of a divided by b
        } else {
            b = b % a; // Reduce b by the remainder of b divided by a
        }
    }
    if(a==0){
        cout << "GCD is: " << b << endl; // Output GCD
        // cout << "LCM of " << a << " and " << b << " is: " << (a*b)/b << endl; // Output LCM
    } else {
        cout << "GCD is: " << a << endl; // Output GCD
        // cout << "LCM of " << a << " and " << b << " is: " << (a*b)/a << endl; // Output LCM
    }
}

int main() {
    
    int a, b;
    
    cin >> a >> b; // Input two numbers to find GCD and LCM

    gcd(a , b);
    
    return 0;
}