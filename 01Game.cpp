// Input
// 3
// 01
// 1111
// 0011

// Output
// DA
// NET
// NET

/*Explanation-> Alice and Bob make alternating moves: Alice makes the first move, Bob makes the second move,
Alice makes the third one, and so on. During each move,
the current player must choose two different adjacent characters of string s and delete them.
For example, if s=1011001 then the following moves are possible:*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int countzero = 0, countone = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                countzero++;
            }
            else
            {
                countone++;
            }
        }
        int k = min(countzero, countone);
        if (k % 2 == 0)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }
}