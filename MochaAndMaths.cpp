// Input
// 4
// 2
// 1 2
// 3
// 1 1 3
// 4
// 3 11 3 7
// 5
// 11 7 15 3 7

// Output
// 0
// 1
// 3
// 3

/*Explanation-> This day, Mocha got a sequence a of length n.
In each operation, she can select an arbitrary interval [l,r] and for all values i (0≤i≤r−l),
replace al+i with al+i&ar−i at the same time, where & denotes the bitwise AND operation.
This operation can be performed any number of times.

For example, if n=5, the array is [a1,a2,a3,a4,a5], and Mocha selects the interval [2,5],
then the new array is [a1,a2&a5,a3&a4,a4&a3,a5&a2].

Now Mocha wants to minimize the maximum value in the sequence. As her best friend, can you help her to get the answer?*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (i == 0)
            {
                ans = x;
                continue;
            }
            ans = ans & x;
        }
        cout << ans << endl;
    }
    return 0;
}