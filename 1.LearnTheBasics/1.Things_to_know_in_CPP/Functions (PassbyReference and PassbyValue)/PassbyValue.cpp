#include <bits/stdc++.h>
using namespace std;
 

void increment(int num){
    num += 10; // Increment the value of 'num' by 1
    cout << "Inside function: " << num << endl; // Output the incremented value inside the function
    num += 10; // Increment the value of 'num' by 1
    cout << "Inside function: " << num << endl; // Output the incremented value inside the function
}

int main() {
    
    int a = 10;
    
    cout << "Before function call: " << a << endl; // Output the value of 'a' before the function call

    increment(a); // Call the increment function with 'a' as an argument

    cout << "After function call: " << a << endl; // Output the value of 'a' after the function call
    
    return 0;
}

// Before function call: 10
// Inside function: 20
// Inside function: 30
// After function call: 10  // This is called Pass by Value, the value of 'a' remains unchanged in the main function.
// The function 'increment' modifies a copy of 'a', not the original variable.