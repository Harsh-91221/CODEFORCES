// Input
// 7
// 3
// 1 2 3
// 5
// 2 1 2 1 2
// 4
// 3 1 5 4
// 2
// 7 7
// 5
// 4 1 3 2 5
// 5
// 2 3 1 4 5
// 3
// 1000000000 1 2

// Output
// 0
// 2
// 5
// 0
// 4
// 3
// 1000000000

/*Explanation-> Alphen has an array of positive integers a of length n.

Alphen can perform the following operation:
For all i from 1 to n, replace ai with max(0,ai−1).
Alphen will perform the above operation until a is sorted, that is a satisfies a1≤a2≤…≤an.
How many operations will Alphen perform? Under the constraints of the problem,
it can be proven that Alphen will perform a finite number of operations.*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, maxi = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                maxi = max(maxi, a[i]);
            }
        }
        cout << maxi << endl;
    }
}