// 1
// 2 3
// 4 5 6
// 7 8 9 10



#include <bits/stdc++.h>
using namespace std;
void pattern13(int n){
    int num = 1;
    for(int i = 1 ; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << num;
            num++;
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
