#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int a, b, gcd = 1;
    
    cin >> a >> b; // Input two numbers to find GCD and LCM

    // here 
    for (int i = 1; i <= b; i++)
    {
        if(a % i == 0 && b % i == 0) // Check if i is a common divisor of both a and b
        {
            gcd = i; // Output the common divisor
        }
    }
    cout << "GCD of " << a << " and " << b << " is: " << gcd << endl; // Output GCD
    
    
    return 0;
}