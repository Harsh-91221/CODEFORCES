// Input
// 441231

// Output
// NO

/*Explanation->  A magic number is a number formed by concatenation of numbers 1, 14 and 144.
We can use each of these numbers any number of times.
Therefore 14144, 141414 and 1411 are magic numbers but 1444, 514 and 414 are not.*/

#include <iostream>
using namespace std;
bool solve(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '1' && s[i] != '4')
        {
            return false;
        }
        if (s[0] == '4')
        {
            return false;
        }
        if (s.find("444") != s.npos)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s = "";
    cin >> s;
    if (solve(s))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}