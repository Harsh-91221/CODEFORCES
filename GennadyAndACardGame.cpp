// Input
// AS
// 2H 4C TH JH AD

// Output
// YES

/*Explanation-> To play Mau-Mau, you need a pack of 52 cards.
Each card has a suit (Diamonds — D, Clubs — C, Spades — S, or Hearts — H), and a rank (2, 3, 4, 5, 6, 7, 8, 9, T, J, Q, K, or A).

At the start of the game, there is one card on the table and you have five cards in your hand.
You can play a card from your hand if and only if it has the same rank or the same suit as the card on the table.

In order to check if you'd be a good playing partner, Gennady has prepared a task for you.
Given the card on the table and five cards in your hand, check if you can play at least one card.*/

#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool ans = false;
    for (int i = 0; i < 5; i++)
    {
        string st;
        cin >> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[0] == st[0] || s[1] == st[1])
            {
                ans = true;
            }
        }
    }
    if (ans)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}