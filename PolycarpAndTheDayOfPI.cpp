// Input
// 9
// 000
// 3
// 4141592653
// 141592653589793238462643383279
// 31420
// 31415
// 314159265358
// 27182
// 314159265358979323846264338327

// Output
// 0
// 1
// 0
// 0
// 3
// 5
// 12
// 0
// 30

/*Explanation-> Polycarp wrote out all the digits that he managed to remember.
For example, if Polycarp remembered π as 3.1415, he wrote out 31415.
Polycarp was in a hurry and could have made a mistake,
so you decided to check how many first digits of the number π Polycarp actually remembers correctly.*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int count = 0;
    while (t--)
    {
        string t = "314159265358979323846264338327";
        string s = "";
        cin >> s;
        int i = 0;
        for (; i < s.length(); i++)
        {
            if (s[i] != t[i])
            {
                break;
            }
        }
        cout << i << endl;
    }
    return 0;
}