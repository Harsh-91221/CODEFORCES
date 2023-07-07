// Input
// HoUse

// Output
// house

/*Explanation-> the word HoUse must be replaced with house, and the word ViP — with VIP.
If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones.
For example, maTRIx should be replaced by matrix. Your task is to use the given method on one given word.*/

#include <iostream>
using namespace std;
int main()
{
    string s = "";
    cin >> s;
    int lower = 0, upper = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            lower++;
        }
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upper++;
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (lower < upper)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] -= 32;
            }
        }
        else
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
    }
    cout << s << endl;
}