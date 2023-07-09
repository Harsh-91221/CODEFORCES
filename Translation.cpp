// Input
// code
// edoc

// Output
// YES

/*Explanation->  a berlandish word differs from a birlandish word with the same meaning a little:
it is spelled (and pronounced) reversely.
For example, a Berlandish word code corresponds to a Birlandish word edoc*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s1 = "";
    string s2 = "";
    cin >> s1;
    cin >> s2;
    reverse(s2.begin(), s2.end());
    if (s1 == s2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}