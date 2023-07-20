// Input
// 2 2
// 1 99
// 100 0

// Output
// YES

/*Explanation-> Initially, Kirito's strength equals s.
If Kirito starts duelling with the i-th (1 ≤ i ≤ n) dragon and Kirito's strength is not greater than the dragon's strength xi,
then Kirito loses the duel and dies. But if Kirito's strength is greater than the dragon's strength,
then he defeats the dragon and gets a bonus strength increase by yi.

Kirito can fight the dragons in any order.
Determine whether he can move on to the next level of the game,
that is, defeat all dragons without a single loss.*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int s, n;
    cin >> s >> n;
    pair<int, int> a[10000];
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (s <= a[i].first)
        {
            flag = false;
            break;
        }
        else
        {
            s = s + a[i].second;
        }
    }
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}