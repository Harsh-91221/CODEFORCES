// Input
// 5
// 1 1 1
// 9 3 3
// 1 2 3
// 6 6 9
// 2 2 8

// Output
// First
// First
// Second
// First
// Second

/*Explanation-> There are a+b+c buttons in the laboratory.
It turned out that a buttons can only be pressed by Anna, b buttons can only be pressed by Katie,
and c buttons can be pressed by either of them. Anna and Katie decided to play a game,
taking turns pressing these buttons. Anna makes the first turn.
Each button can be pressed at most once, so at some point, one of the girls will not be able to make her turn.

The girl who cannot press a button loses. Determine who will win if both girls play optimally.*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b)
        {
            cout << "First" << endl;
        }
        else if (a < b)
        {
            cout << "Second" << endl;
        }
        else if (c % 2 != 0)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
    }
    return 0;
}