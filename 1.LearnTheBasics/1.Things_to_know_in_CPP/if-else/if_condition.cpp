#include <iostream>
using namespace std;

int main() {
    int marks = 80;

    if (marks < 25) {
        cout << "Grade: F" << endl;
    } 
    if (marks >= 25 && marks <= 44) {
        cout << "Grade: E" << endl;
    } 
    if (marks >= 45 && marks <= 49) {
        cout << "Grade: D" << endl;
    } 
    if (marks >= 50 && marks <= 59) {
        cout << "Grade: C" << endl;
    } 
    if (marks >= 60 && marks <= 69) {
        cout << "Grade: B" << endl;
    } 
    if (marks >= 70 && marks <= 100) {
        cout << "Grade: A" << endl;
    } 

    return 0;
}