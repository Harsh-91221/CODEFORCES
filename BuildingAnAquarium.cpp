#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool solve(long long a[], long long n, long long m, long long k)
{
    long long count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < m)
        {
            count += (m - a[i]);
        }
    }
    return count <= k;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long s = 0, e = INT_MAX;
        long long result = INT_MAX;
        while (s <= e)
        {
            long long mid = (e - s) / 2 + s;
            if (solve(a, n, mid, k))
            {
                result = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        cout << result << endl;
    }
    return 0;
}