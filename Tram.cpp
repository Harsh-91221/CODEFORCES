// Input
// 4
// 0 3
// 2 5
// 4 2
// 4 0

// Output
// 6

/*Explanation-> Your task is to calculate the tram's minimum capacity such that the
number of people inside the tram at any time never exceeds this capacity.
Note that at each stop all exiting passengers exit before any entering passenger enters the tram.*/

#include <iostream>
using namespace std;
int main()
{
    int n, a, b, p = 0, maxi = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        p = b - a + p;
        if (maxi < p)
        {
            maxi = p;
        }
    }
    cout << maxi;
}