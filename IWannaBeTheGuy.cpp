// Input
// 4
// 3 1 2 3
// 2 2 4

// Output
// I become the guy.

/*Explanation-> There is a game called "I Wanna Be the Guy", consisting of n levels.
Little X and his friend Little Y are addicted to the game. Each of them wants to pass the whole game.
Little X can pass only p levels of the game. And Little Y can pass only q levels of the game.
You are given the indices of levels Little X can pass and the indices of levels Little Y can pass.
Will Little X and Little Y pass the whole game, if they cooperate each other?*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1] = {0};
    int p, q;
    int level;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> level;
        a[level] = 1;
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> level;
        a[level] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
}