// Input
// 3 17 4

// Output
// 13

/*Explanation-> A soldier wants to buy w bananas in the shop.
He has to pay k dollars for the first banana, 2k dollars for the second one and so on
(in other words, he has to pay i·k dollars for the i-th banana).
He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?*/

#include <iostream>
using namespace std;
int main()
{
    int k, dollars, n, cost = 0;
    cin >> k >> dollars >> n;
    for (int i = 1; i <= n; i++)
    {
        cost += i * k;
    }
    if (cost <= dollars)
    {
        cout << 0;
    }
    else
    {
        cout << cost - dollars << endl;
    }
}