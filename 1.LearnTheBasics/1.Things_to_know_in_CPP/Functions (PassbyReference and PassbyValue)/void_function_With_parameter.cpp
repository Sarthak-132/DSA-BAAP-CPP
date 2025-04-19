#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
void naming(string name){
    cout << "Hello " << name << endl; // Output the name entered by the user
}

int main() {
    
    string name;
    
    cin >> name;

    naming(name);                   // Function call




    string name2;
    
    cin >> name2;

    naming(name2);                   // Function call
    
    return 0;
}