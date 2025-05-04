#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num; 
    cin >> num; // Input the number to check
    int original = num; 
    int sum = 0;
    int digits = to_string(num).length();

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong number." << endl;
    else
        cout << original << " is not an Armstrong number." << endl;

    return 0;
}
