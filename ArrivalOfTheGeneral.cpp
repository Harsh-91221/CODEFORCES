// Input
// 4
// 33 44 11 22

// Output
// 2

/*Explanation-> Please note that the way other solders are positioned does not matter,
including the case when there are several soldiers whose height is maximum or minimum.
Only the heights of the first and the last soldier are important.

For example, the general considers the sequence of heights (4, 3, 4, 2, 1, 1) correct
and the sequence (4, 3, 1, 2, 2) wrong.*/

#include <iostream>
using namespace std;
int main()
{
    int n, mini = 0, maxi = 0;
    int minval = INT_MAX, maxval = INT_MIN;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if (a > maxval)
        {
            maxi = i;
            maxval = a;
        }
        if (a <= minval)
        {
            mini = i;
            minval = a;
        }
    }
    if (maxi > mini)
    {
        cout << (maxi - 1) + (n - mini) - 1;
    }
    else
    {
        cout << (maxi - 1) + (n - mini);
    }
    return 0;
}
