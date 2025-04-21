// * * * * * * *
//   * * * * *
//     * * *
//       *

#include <bits/stdc++.h>
using namespace std;

void pattern8(int N){

    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < (N-i-1); j++){
            cout << " ";
        }
        for(int j = 0 ; j < (2*i+1); j++){
            cout << "*";
        }
        for(int j = 0 ; j < (N-i-1); j++){
            cout << " ";
        }
        cout << endl;
    }
}
 
int main() {
    
    int N ;

    cin >> N;

    pattern8(N);
    
    return 0;
}