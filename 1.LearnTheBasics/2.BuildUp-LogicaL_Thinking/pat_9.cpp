//     *    
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *

// #include <bits/stdc++.h>
// using namespace std;

// void pattern7(int N){

//     for(int i = 0 ; i < N ; i++){
//         for(int j = 0 ; j < (N-i-1); j++){
//             cout << " ";
//         }
//         for(int j = 0 ; j < (2*i+1); j++){
//             cout << "*";
//         }
//         for(int j = 0 ; j < (N-i-1); j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// void pattern8(int N){

//     for(int i = 0 ; i < N ; i++){
//         for(int j = 0 ; j < i; j++){
//             cout << " ";
//         }
//         for(int j = 0 ; j < 2*N-(2*i + 1); j++){
//             cout << "*";
//         }
//         for(int j = 0 ; j < i; j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
    
//     int N;

//     cin >> N;

//     pattern7(N);
//     pattern8(N);
    
//     return 0;
// }




#include <iostream>
using namespace std;

class Solution {
public:
    void printDiamond(int N) {
        // Upper part
        for (int i = 1; i <= N; i++) {
            for (int space = 1; space <= N - i; space++) cout << " ";
            for (int star = 1; star <= 2 * i - 1; star++) cout << "*";
            cout << endl;
        }
        // Lower part
        for (int i = N; i >= 1; i--) {
            for (int space = 1; space <= N - i; space++) cout << " ";
            for (int star = 1; star <= 2 * i - 1; star++) cout << "*";
            cout << endl;
        }
    }
};

int main() {
    Solution obj;
    int N;
    cin >> N;
    obj.printDiamond(N);
    return 0;
}
