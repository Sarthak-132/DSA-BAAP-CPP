#include<bits/stdc++.h>
using namespace std;


void print(int i , int n){
   
    // Base Condition.
    if(i > n)  return;
    cout<<"Raj"<<endl;

    // Count Incremented
    i++;
    print(i , n);
   
   // Base Condition.
   

}

int main(){
    int n;
    cin >> n;

    print(1 , n);
  return 0;
}