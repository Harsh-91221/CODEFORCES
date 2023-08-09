// Input
// 5
// 1 1
// 1 3
// 2 2
// 3 3
// 5 3

// Output
// 1
// 2
// 2
// 5
// 8

/*Explanation-> The park is a rectangular table with n rows and m columns, where the cells of the table are squares,
and the boundaries between the cells are streets. External borders are also streets.
Every street has length 1. For example, park with n=m=2 has 12 streets.

You were assigned to develop a plan for lighting the park. You can put lanterns in the middle of the streets.
The lamp lights two squares near it (or only one square if it stands on the border of the park).*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        cout << ((n * m) + 1) / 2 << endl;
    }
}