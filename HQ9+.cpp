// Input
// Hi!

// Output
// YES

/*Explanation-> HQ9+ is a joke programming language which has only four one-character instructions:

"H" prints "Hello, World!",
"Q" prints the source code of the program itself,
"9" prints the lyrics of "99 Bottles of Beer" song,
"+" increments the value stored in the internal accumulator.*/

#include <iostream>
using namespace std;
int main()
{
    string s = "";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}