// Input
// 3
// 4
// 3 6 5 3
// 2
// 1 7
// 5
// 1 4 2 4 1

// Output
// 4
// 0
// 9

/*Explanation-> Let's call a pair of indices i, j good if 1≤i<j≤n and gcd(ai,2aj)>1
(where gcd(x,y) is the greatest common divisor of x and y).

Find the maximum number of good index pairs if you can reorder the array a in an arbitrary way.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> even, odd, x;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % 2 == 0)
            {
                even.push_back(a);
            }
            else
            {
                odd.push_back(a);
            }
        }
        for (auto i : even)
        {
            x.push_back(i);
        }
        for (auto i : odd)
        {
            x.push_back(i);
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (__gcd(x[i], 2 * x[j]) > 1)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}