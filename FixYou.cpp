// Input
// 4
// 3 3
// RRD
// DDR
// RRC
// 1 4
// DDDC
// 6 9
// RDDDDDRRR
// RRDDRRDDD
// RRDRDRRDR
// DDDDRDDRR
// DRRDRDDDR
// DDRDRRDDC
// 1 1
// C

// Output
// 1
// 3
// 9
// 0

/*Explanation-> Consider a conveyor belt represented using a grid consisting of n rows and m columns.
The cell in the i-th row from the top and the j-th column from the left is labelled (i,j).

Every cell, except (n,m), has a direction R (Right) or D (Down) assigned to it. If the cell (i,j) is assigned direction R,
any luggage kept on that will move to the cell (i,j+1). Similarly, if the cell (i,j) is assigned direction D,
any luggage kept on that will move to the cell (i+1,j).
If at any moment, the luggage moves out of the grid, it is considered to be lost.

There is a counter at the cell (n,m) from where all luggage is picked.
A conveyor belt is called functional if and only if any luggage reaches the counter regardless of which cell it is placed in initially.
More formally, for every cell (i,j), any luggage placed in this cell should eventually end up in the cell (n,m).

This may not hold initially; you are, however, allowed to change the directions of some cells to make the conveyor belt functional.
Please determine the minimum amount of cells you have to change.*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, res = 0;
        cin >> n >> m;
        vector<string> c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        // LAST COL
        for (int i = 0; i < n; i++)
        {
            if (c[i][m - 1] == 'R')
            {
                res++;
            }
        }
        // LAST ROW
        for (int i = 0; i < m; i++)
        {
            if (c[n - 1][i] == 'D')
            {
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}