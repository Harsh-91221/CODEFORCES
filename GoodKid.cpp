#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        a[0] = a[0] + 1;
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            ans = ans * a[i];
        }
        cout << ans << endl;
    }
    return 0;
}