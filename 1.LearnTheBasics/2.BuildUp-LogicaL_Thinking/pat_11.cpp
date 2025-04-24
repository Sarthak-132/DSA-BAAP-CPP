// 1
// 01
// 101
// 0101
// 10101
#include <bits/stdc++.h>
using namespace std;
 

void Patttttern11(int N){
    int start = 1;
    for(int i = 1; i <= N; i++){
       if(i%2 == 0){
            start = 0;
        }
        else{
            start = 1;
        }
        for(int j = 1; j<= i; j++){
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

int main() {
    
    int N;

    cin >> N;

    Patttttern11(N);
    
    return 0;
}