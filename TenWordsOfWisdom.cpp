// Input
// 3
// 5
// 7 2
// 12 5
// 9 3
// 9 4
// 10 1
// 3
// 1 2
// 3 4
// 5 6
// 1
// 1 43

// Output
// 4
// 3
// 1

/*In the game show "Ten Words of Wisdom", there are n participants numbered from 1 to n,
each of whom submits one response.
The i-th response is ai words long and has quality bi.
No two responses have the same quality, and at least one response has length at most 10.

The winner of the show is the response which has the highest quality out of all responses that are not longer than 10 words.
Which response is the winner?*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a[50];
    int b[50];
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i] >> b[i];
        }
        int maxQuality = 0;
        int winnerIndex = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] <= 10 && b[i] > maxQuality)
            {
                maxQuality = b[i];
                winnerIndex = i;
            }
        }
        cout << winnerIndex << endl;
    }
    return 0;
}