// Input
// 3
// 8
// abacabac
// 5
// qzxcq
// 20
// ccooddeeffoorrcceess

// Output
// ac
// q
// codeforce

/*Explanation-> There is a string a (unknown to you), consisting of lowercase Latin letters,
encrypted according to the following rule into string s: after each character of string a,
an arbitrary (possibly zero) number of any lowercase Latin letters, different from the character itself, is added;
after each such addition, the character that we supplemented is added.
You are given string s, and you need to output the initial string a In other words, you need to decrypt string s.
Note that each string encrypted in this way is decrypted uniquely.*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<char> v;
        char c = s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] == c)
            {
                v.push_back(c);
                c = s[i + 1];
                i++;
            }
        }
        for (auto i : v)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}