// Input
// 3
// 3
// 1 2 3
// 4
// 0 1 1 0
// 10
// 8 3 6 11 5 2 1 7 10 4

// Output
// 0
// 4
// 21

/*Explanation-> Highway 201 is the most busy street in Rockport.
Traffic cars cause a lot of hindrances to races, especially when there are a lot of them.
The track which passes through this highway can be divided into n sub-tracks.
You are given an array a where ai represents the number of traffic cars in the i-th sub-track.
You define the inconvenience of the track as ∑i=1n∑j=i+1n|ai−aj|, where |x| is the absolute value of x.

You can perform the following operation any (possibly zero) number of times:
choose a traffic car and move it from its current sub-track to any other sub-track.

Find the minimum inconvenience you can achieve.*/

#include <iostream>
using namespace std;
int main()
{
    long long int t, x, ans, n, s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            s += x;
        }
        ans = (s % n) * (n - s % n);
        cout << ans << endl;
    }
    return 0;
}