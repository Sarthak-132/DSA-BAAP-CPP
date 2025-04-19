#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

int sum(int num1, int num2){
    int num3 = num1 + num2; // Sum of two numbers
    return num3; // Return the sum
}
int main() {
    
    int num1, num2;
    cin >> num1 >> num2; // Input two numbers
    
    int result = sum(num1, num2); // Call the sum function and store the result
    
    cout << "Sum: " << result << endl; // Output the result
    
    return 0;
}