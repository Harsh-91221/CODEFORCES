// Input
// 8
// 3 2
// 4 2
// 1 1
// 3 1
// 4 7
// 1 3
// 7 4
// 100 100

// Output
// 16
// 16
// 4
// 9
// 64
// 9
// 64
// 40000

/*Explanation-> Find the minimum area of a square land on which you can place two identical rectangular a×b houses.
The sides of the houses should be parallel to the sides of the desired square land.*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a > b)
        {
            swap(a, b);
        }
        int ans = max(2 * a, b) * max(2 * a, b);
        cout << ans << endl;
    }
    return 0;
}