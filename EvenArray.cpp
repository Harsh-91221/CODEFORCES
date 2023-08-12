// Input
// 4
// 4
// 3 2 7 6
// 3
// 3 2 6
// 1
// 7
// 7
// 4 9 2 1 18 3 0

// Output
// 2
// 1
// -1
// 0

/*Explanation-> An array is called good if the parity of each index matches the parity of the element at that index.
More formally, an array is good if for all i (0≤i≤n−1) the equality imod2=a[i]mod2 holds,
where xmod2 is the remainder of dividing x by 2.*/

#include <iostream>
using namespace std;
int main()
{
    int t, n, a;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a % 2 != i % 2)
            {
                if (a % 2)
                {
                    odd++;
                }
                else
                {
                    even++;
                }
            }
        }
        if (odd == even)
        {
            cout << odd << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}