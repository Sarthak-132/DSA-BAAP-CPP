#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

int maxy (int num1, int num2){
    if(num1 > num2){
        return num1; // Return the maximum of two numbers
    }else{
        return num2; // Return the maximum of two numbers
    }
}
int main() {
    
    int num1, num2;
    cin >> num1 >> num2; // Input two numbers
    
    int result = maxy(num1, num2); // Call the maxy function and store the result    
    
    cout << "Maximum: " << result << endl; // Output the result
    
    return 0;
}

// Note : in case we do not have else statement and if condition is false then the function will return garbage value.
// because it finds return statement and not get any return statement so give garbage value. 