#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int age;
    cin >> age;

    if(age >= 18) {
        cout << "valid for job." << endl;
    }
    else if(age <= 58) {
        cout << " valid for job." << endl;
        if(age >= 55 && age <= 60) {
            cout << "retirement age is soon." << endl;
        }
    }
    else{
        cout<<"Retirement Time." << endl;
    }
    
    return 0;
}