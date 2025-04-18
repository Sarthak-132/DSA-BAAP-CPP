#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int array[5];
    cin >> array[0] >> array[1] >> array[2] >> array[3] >> array[4];
    cout << "The elements of the array are: " << endl;

    array[3] = 10; // Assigning value to the 4th element of the array
    array[4] += 10; // Assigning value to the 5th element of the array


    cout << array[0] << " " << array[1] << " " << array[2] << " " << array[3] << " " << array[4] << endl;
    
    return 0;
}