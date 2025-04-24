// *
// **
// ***
// **
// *
#include <bits/stdc++.h>
using namespace std;
 

void Patttttern10(int N){
    for(int i = 1 ; i <= 2*N - 1; i++){
        int star = i;
        if(i>N){
            star = 2*N - i;
        }
        for(int j = 1; j <= star; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    
    int N;

    cin >> N;

    Patttttern10(N);
    
    return 0;
}