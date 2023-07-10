// Input
// 5 1
// BGGBG

// Output
// GBGGB

/*Explanation->  Let's say that the positions in the queue are sequentially numbered by integers from 1 to n,
at that the person in the position number 1 is served first.
Then, if at time x a boy stands on the i-th position and a girl stands on the (i + 1)-th position,
then at time x + 1 the i-th position will have a girl and the (i + 1)-th position will have a boy.
The time is given in seconds.*/

#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string s = "";
    cin >> s;
    while (t--)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                s[i] = 'G';
                s[i + 1] = 'B';
                i++;
            }
        }
    }
    cout << s;
}