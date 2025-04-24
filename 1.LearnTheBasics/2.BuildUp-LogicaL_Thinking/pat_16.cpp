// A
// B B
// C C C

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
void pattern14(int n){

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++) {
            char cha = 'A' + i - 1;       
            cout << cha << " ";
        }
        cout << endl;
    }

}

int main() {
    
    int n ;
    
    cin >> n;
    
    pattern14(n);
    
    return 0;
}