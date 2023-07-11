// Input
// 4
// 2 3 4 1

// Output
// 4 1 2 3

/*Explanation-> It is guaranteed that each friend received exactly one gift.
It is possible that some friends do not share Petya's ideas of giving gifts to somebody else.
Those friends gave the gifts to themselves.*/

#include <iostream>
using namespace std;
int main()
{
    int n, k;
    int a[1000];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> k;
        a[k] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
}