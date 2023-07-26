// Input
// 7
// 5 3 3 11
// 5 4 14 18 2
// 2 9 5 6
// 11 9
// 10 50 3 11
// 43 44 74 98 62 60 99 4 11 73
// 4 8 8 49
// 68 58 82 73
// 7 1 4 66
// 18 66 39 83 48 99 79
// 9 1 1 13
// 26 23 84 6 60 87 40 41 25
// 6 13 3 28
// 30 70 85 13 1 55

// Output
// 2
// 1
// 4
// 1
// 0
// 0
// 3

/*Explanation-> Vlad's height is H centimeters. \
Two people with heights a and b can have a conversation on the escalator if they are standing on different steps
and the height difference between them is equal to the height difference between the steps.
For example, if two people have heights 170 and 180 centimeters, and m=10,k=5,
then they can stand on steps numbered 7 and 5, where the height difference between the steps is equal to
the height difference between the two people: k⋅2=5⋅2=10=180−170. There are other possible ways.

Given an array h of size n, where hi represents the height of the i-th person.
Vlad is interested in how many people he can have a conversation with on the escalator individually.*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, m, k, H;
        cin >> n >> m >> k >> H;
        int h[n];
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        int ans = 0;
        for (auto i : h)
        {
            long int diff = abs(i - H);
            if (diff % k == 0 && diff / k < m && diff > 0)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}