// Input
// cAPS

// Output
// Caps

/*Explanation-> Let's consider that a word has been typed with the Caps lock key accidentally switched on, if:

. either it only contains uppercase letters;
. or all letters except for the first one are uppercase.

In this case we should automatically change the case of all letters.
For example, the case of the letters that form words "hELLO", "HTTP", "z" should be changed.

Write a program that applies the rule mentioned above.
If the rule cannot be applied, the program should leave the word unchanged.*/

#include <iostream>
using namespace std;
int main()
{
    string s = "";
    cin >> s;
    bool check = false;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            count++;
        }
    }
    if (count == s.length())
    {
        check = true;
    }
    if (s[0] >= 'a' && s[0] <= 'z')
    {
        count++;
    }
    if (check == true)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = s[i] + 32;
        }
    }
    else if (count == s.length())
    {
        s[0] = s[0] - 32;
        for (int i = 1; i < s.length(); i++)
        {
            s[i] = s[i] + 32;
        }
    }
    cout << s;
    return 0;
}