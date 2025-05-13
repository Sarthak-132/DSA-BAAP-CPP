#include <bits/stdc++.h>
using namespace std;


void beekTrack(int i , int n){

    if(i >= n) return ;

    i++;

    beekTrack(i , n);

    cout << i << " ";

}
 
int main() {
    
    int n, i = 1;

    cin >> n;
    
    beekTrack(i , n);
    
    cout << i << " ";

    
    return 0;
}