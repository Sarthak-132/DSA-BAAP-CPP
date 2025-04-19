#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    string s = "Striver";
    
    int len = s.size();
    
    cout << len << endl;            // 7       

    cout << s[len - 1] << endl;     // r

    s[len - 1] = 'z';          
    
    cout << s << endl;              // Strivez

    return 0;
}