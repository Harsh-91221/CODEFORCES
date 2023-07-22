// Input
// 10
// 5
// Timur
// 5
// miurT
// 5
// Trumi
// 5
// mriTu
// 5
// timur
// 4
// Timr
// 6
// Timuur
// 10
// codeforces
// 10
// TimurTimur
// 5
// TIMUR

// Output
// YES
// YES
// YES
// YES
// NO
// NO
// NO
// NO
// NO
// NO

/*Explanation-> Timur likes his name. As a spelling of his name, he allows any permutation of the letters of the name.
For example, the following strings are valid spellings of his name: Timur, miurT, Trumi, mriTu.
Note that the correct spelling must have uppercased T and lowercased other letters.

Today he wrote string s of length n consisting only of uppercase or lowercase Latin letters.
He asks you to check if s is the correct spelling of his name.*/

#include <iostream>
#include <algorithm>
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
        string r = "Timur";
        sort(r.begin(), r.end());
        sort(s.begin(), s.end());
        if (s == r)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
