// Input
// 4
// 1 1337
// 13 69
// 2 4
// 88 89

// Output
// 1 2
// 13 26
// 2 4
// -1 -1

/*Explanation-> Let LCM(x,y) be the minimum positive integer that is divisible by both x and y.
For example, LCM(13,37)=481, LCM(9,6)=18.

You are given two integers l and r. Find two integers x and y such that l≤x<y≤r and l≤LCM(x,y)≤r.*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int l, r;
        cin >> l >> r;
        if (2 * l <= r)
        {
            cout << l << " " << 2 * l << " " << endl;
        }
        else
        {
            cout << -1 << " " << -1 << endl;
        }
    }
    return 0;
}