// Input
// 10 2

// Output
// 6

/*Explanation-> Dreamoon wants to climb up a stair of n steps.
He can climb 1 or 2 steps at each move.
Dreamoon wants the number of moves to be a multiple of an integer m.

What is the minimal number of moves making him climb to the top of the stairs that satisfies his condition?*/

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int res = 0;
    if (m > n)
    {
        res = -1;
    }
    else if (n % 2 == 1)
    {
        res = n / 2 + 1;
    }
    else
        res = n / 2;
    while (res % m > 0)
        res++;
    cout << res;
    return 0;
}