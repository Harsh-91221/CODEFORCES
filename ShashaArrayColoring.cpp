// input
// 6
// 5
// 1 5 6 3 4
// 1
// 5
// 4
// 1 6 3 9
// 6
// 1 13 9 3 7 2
// 4
// 2 2 2 2
// 5
// 4 5 2 2 3

// output
// 7
// 0
// 11
// 23
// 0
// 5

/*Explanation-> For example, suppose you have an array a=[1,5,6,3,4],
and you painted its elements into two colors as follows: elements on positions 1, 2 and 5 have color 1;
elements on positions 3 and 4 have color 2.
Then:
the cost of the color 1 is max([1,5,4])−min([1,5,4])=5−1=4;
the cost of the color 2 is max([6,3])−min([6,3])=6−3=3;
the total cost of the coloring is 7.
For the given array a,you have to calculate the maximum possible cost of the coloring.*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x : arr)
    {
        cin >> x;
    }
    sort(arr.begin(), arr.end());
    int ans = 0;
    for (int i = 0; i < n / 2; i++)
    {
        ans += (arr[n - 1 - i] - arr[i]);
    }
    cout << ans << endl;
}
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}