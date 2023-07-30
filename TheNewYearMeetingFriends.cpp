// Input
// 7 1 4

// Output
// 6

/*Explanation-> There are three friend living on the straight line Ox in Lineland.
The first friend lives at the point x1, the second friend lives at the point x2,
and the third friend lives at the point x3.
They plan to celebrate the New Year together, so they need to meet at one point.
What is the minimum total distance they have to travel in order to meet at some point and celebrate the New Year?*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[3];
    int n = 3;
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = max(0, a[2] - a[0]);
    cout << ans << endl;
    return 0;
}