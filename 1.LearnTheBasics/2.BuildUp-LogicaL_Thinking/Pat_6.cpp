// 1 2 3 4 
// 1 2 3
// 1 2
// 1


#include <bits/stdc++.h>
using namespace std;
 
void Pattern(int N){

    for (int i = 1 ; i <= N ; i++){
        for (int j = 1; j<=(N-i+1) ; j++){
            cout << j << " ";
        }
        cout << endl;
    }

}

int main() {
    
    int N;

    cin >> N;

    Pattern(N);
    
    return 0;
}