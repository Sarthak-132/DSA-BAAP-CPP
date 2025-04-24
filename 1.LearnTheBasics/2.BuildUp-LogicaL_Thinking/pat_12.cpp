// 1         1
// 1 2     2 1
// 1 2 3 3 2 1

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void pattern12(int n){

    int space = 2*(n - 1);
    
    for(int i = 1 ; i <= n; i++){

        // numbers
        for(int j = 1; j <= i; j++){
            cout << j;
        }


        // space 
        for(int j = 1; j <= space; j++){
            cout <<" ";
        }

        // Numbers 
        for(int j = i; j>=1; j--){
            cout << j;
        }
        cout << endl;
        space -= 2;
    }

}
 
int main() {
    
    int n;

    cin >> n;

    pattern12(n);
    
    return 0;
}