// Input
// 4 6
// 10 12 10 7 5 22

// Output
// 5

/*Explaination->  Let A be the number of pieces in the largest puzzle that the teacher buys and B
be the number of pieces in the smallest such puzzle.
She wants to choose such n puzzles that A - B is minimum possible.
Help the teacher and find the least possible value of A - B.*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, m;
    int a[1000];
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    int leastval = a[n - 1] - a[0];
    for (int i = 1; i <= m - n; i++)
    {
        if (a[i + n - 1] - a[i] < leastval)
        {
            leastval = a[i + n - 1] - a[i];
        }
    }
    cout << leastval;
}