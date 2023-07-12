// Input
// Codeforces

// Output
// .c.d.f.r.c.s

/*Explanation-> Petya started to attend programming lessons.
On the first lesson his task was to write a simple program.
The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

deletes all the vowels,
inserts a character "." before each consonant,
replaces all uppercase consonants with corresponding lowercase ones.*/

#include <iostream>
using namespace std;
int main()
{
    string s, k;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y' && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i] != 'Y')
        {
            k = k + '.';
            k = k + (char)tolower(s[i]);
        }
    }
    cout << k;
}