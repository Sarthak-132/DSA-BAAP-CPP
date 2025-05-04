#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int reverseNumber(int n){
    int revNum = 0;

    while(n > 0){
        int lastdigit = n % 10;
        revNum = revNum * 10 + lastdigit;
        n = n / 10;
    }
    return revNum;
}

int main() {
    
    int n;
    
    cin >> n;

    int revNum = reverseNumber(n);

    cout << revNum << endl;
    
    return 0;
}