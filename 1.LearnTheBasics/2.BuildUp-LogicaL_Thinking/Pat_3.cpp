// 1
// 1 2 
// 1 2 3 
// 1 2 3 4


#include <bits/stdc++.h>
using namespace std;

void pattern1(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 1; i <= N; i++)
    {
        // This is the inner loop which here, loops for the columns
        // as we have to print a rectangular pattern.
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
       
        // As soon as N stars are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}

int main()
{   
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    int N ;

    cin >> N;

    pattern1(N);

    return 0;
}