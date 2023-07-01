// Input
// 0 0 0 0 0
// 0 0 0 0 1
// 0 0 0 0 0
// 0 0 0 0 0
// 0 0 0 0 0

// Output
// 3

/*Explanation->Print a single integer — the minimum number of moves needed
to make the matrix beautiful by moving 1 to the middle a[3][3] .*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a[6][6];
    int r = 0, c = 0;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                r = abs(3 - i);
                c = abs(3 - j);
            }
        }
    }
    cout << (r + c);
}