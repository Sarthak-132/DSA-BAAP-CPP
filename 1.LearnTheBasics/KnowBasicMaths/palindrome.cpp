#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int palindrone(int n){
    int revNum = 0;
    int copy = n;

    while(n > 0){
        int lastDigit = n % 10 ;
        revNum = revNum * 10 + lastDigit;
        n = n / 10;
    }
    if(revNum == copy){
        return copy;
    }else{
        return 0;
    }
}
 
int main() {
    
    int n;

    cin >> n;

    int plndrn = palindrone(n);

    cout << plndrn << endl;

    return 0;
}