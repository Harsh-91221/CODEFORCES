// Input
// 1

// Output
// Ehab

/*Explanation-> Mahmoud and Ehab play a game called the even-odd game.
Ehab chooses his favorite integer n and then they take turns, starting from Mahmoud.
In each player's turn, he has to choose an integer a and subtract it from n such that:
1 ≤ a ≤ n.
If it's Mahmoud's turn, a has to be even, but if it's Ehab's turn, a has to be odd.*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Mahmoud";
    }
    else
    {
        cout << "Ehab";
    }
    return 0;
}