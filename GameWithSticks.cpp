// Input
// 2 2

// Output
// Malvika

/*Explanation-> The rules of the game are very simple. The players move in turns. Akshat won gold,
so he makes the first move. During his/her move,
a player must choose any remaining intersection point and remove from the grid all sticks which pass through this point.
A player will lose the game if he/she cannot make a move (i.e. there are no intersection points remaining on the grid at his/her move).

Assume that both players play optimally. Who will win the game?*/
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int k = min(n, m);
    if (k % 2 == 0)
    {
        cout << "Malvika";
    }
    else
    {
        cout << "Akshat";
    }
    return 0;
}