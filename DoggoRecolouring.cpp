// Input
// 6
// aabddc

// Output
// YES

/*Explanation-> Slava can perform: he can choose a color x such that there are currently at least two puppies of color x
and recolor all puppies of the color x into some arbitrary color y.
Luckily, this operation can be applied multiple times (including zero).

For example, if the number of puppies is 7 and their colors are represented as the string "abababc",
then in one operation Slava can get the results "zbzbzbc", "bbbbbbc", "aaaaaac", "acacacc" and others.

However, if the current color sequence is "abababc", then he can't choose x ='c' right now,
because currently only one puppy has the color 'c'.

Help Slava and the committee determine whether it is possible to standardize all the puppies,
i.e. after Slava's operations all the puppies should have the same color.*/

#include <iostream>
#include <map>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    string s = "";
    cin >> s;
    map<char, long long> freq;
    if (n == 1)
    {
        cout << "YES";
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        freq[s[i]]++;
        if (freq[s[i]] > 1)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}