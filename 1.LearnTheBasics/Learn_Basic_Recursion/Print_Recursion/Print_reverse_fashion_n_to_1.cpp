#include<bits/stdc++.h>
using namespace std;


void print(int i , int n){
   
    // Base Condition.
    if(i > n)  return;
    cout<<n<<endl;

    // Count decremented
    n--;
    print(i , n);
   
   // Base Condition.
   

}

int main(){
    int n;
    cin >> n;

    print(1 , n);
  return 0;
}