// Input
// 4
// b
// aabbbabaa
// abbb
// abbaab

// Output
// b
// aabbbabaa
// bbbb
// bbbaab

/*Explanation-> You are given a string s of length n consisting of characters a and/or b.
Let AB(s) be the number of occurrences of string ab in s as a substring.
Analogically, BA(s) is the number of occurrences of ba in s as a substring.

In one step, you can choose any index i and replace si with character a or b.
What is the minimum number of steps you need to make to achieve AB(s)=BA(s)?*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s = "";
        cin >> s;
        int ab = 0, ba = 0;
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b')
            {
                ab++;
            }
            else if (s[i] == 'b' && s[i + 1] == 'a')
            {
                ba++;
            }
        }
        if (ab == ba)
        {
            cout << s << endl;
        }
        else if (ab > ba)
        {
            s[0] = 'b';
            cout << s << endl;
        }
        else
        {
            s[0] = 'a';
            cout << s << endl;
        }
    }
    return 0;
}