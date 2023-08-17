// Input
// 4
// 4
// 11 13 11 11
// 5
// 1 4 4 4 4
// 10
// 3 3 3 3 10 3 3 3 3 3
// 3
// 20 20 10

// Output
// 2
// 1
// 5
// 3

/*Explanation-> You are given an array a consisting of n (n≥3) positive integers.
It is known that in this array, all the numbers except one are the same
(for example, in the array [4,11,4,4] all numbers except one are equal to 4).

Print the index of the element that does not equal others. The numbers in the array are numbered from one.*/

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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (a[0] != a[1] && a[0] != a[2])
        {
            cout << 1 << endl;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {
                if (a[i] != a[0])
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}