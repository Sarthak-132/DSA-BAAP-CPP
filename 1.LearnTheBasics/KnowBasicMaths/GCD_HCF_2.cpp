#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int a, b;

    cin >> a >> b; // Input two numbers to find GCD and LCM

    for (int i = min(a, b); i >= 1; i--)
    {
        if(a % i == 0 && b % i == 0) // Check if i is a common divisor of both a and b
        {
            cout << "GCD of " << a << " and " << b << " is: " << i << endl; // Output GCD
            break; // Exit the loop after finding the GCD
        }
    }
    
    
    return 0; 
}