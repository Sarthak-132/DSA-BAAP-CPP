#include <bits/stdc++.h>
using namespace std;


void beekTrack(int i , int n){

    if(i <= 1) return ;

    i--;

    beekTrack(i , n);

    cout << i << " ";

}
 
int main() {
    
    int n;

    cin >> n;
    
    beekTrack(n , n);
    
    cout << n << " ";

    
    return 0;
}