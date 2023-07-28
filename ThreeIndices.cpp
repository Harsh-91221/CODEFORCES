// Input
// 3
// 4
// 2 1 4 3
// 6
// 4 6 1 2 5 3
// 5
// 5 3 1 2 4

// Output
// YES
// 2 3 4
// YES
// 1 2 3
// NO

/*Explanation-> You are given a permutation p1,p2,…,pn.
Recall that sequence of n integers is called a permutation if it contains all integers from 1 to n exactly once.

Find three indices i, j and k such that:1≤i<j<k≤n;pi<pj and pj>pk.Or say that there are no such indices.*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int p[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
        }
        bool found = false;
        for (int i = 2; i < n; i++)
        {
            if (p[i] > p[i - 1] && p[i] > p[i + 1])
            {
                found = true;
                cout << "YES" << endl;
                cout << i - 1 << " " << i << " " << i + 1 << endl;
                break;
            }
        }
        if (!found)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}