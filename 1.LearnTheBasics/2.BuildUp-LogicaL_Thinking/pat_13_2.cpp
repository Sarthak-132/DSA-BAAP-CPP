// 1
// 2 3
// 3 4 5
// 4 5 6 7



#include <bits/stdc++.h>
using namespace std;
void pattern13(int n){
    
    for(int i = 1 ; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i + j - 1;
            cout << " ";
        }
        cout << endl;
    }
}
 
int main() {
    
    int n;
    cin >> n;
    pattern13(n);
    
    return 0;
}
