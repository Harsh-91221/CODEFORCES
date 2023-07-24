// Input
// 4
// 2
// )(
// 4
// ()()
// 8
// ())()()(
// 10
// )))((((())

// Output
// 1
// 0
// 1
// 3

/*Explanation-> In one move, you can choose exactly one bracket and
move it to the beginning of the string or to the end of the string
(i.e. you choose some index i, remove the i-th character of s and insert it before or after all remaining characters of s).

Your task is to find the minimum number of moves required to obtain regular bracket sequence from s.
It can be proved that the answer always exists under the given constraints.*/

#include <iostream>
using namespace std;
int main()
{
    int t, count = 0;
    cin >> t;
    string s = "";
    while (t--)
    {
        count = 0;
        int n;
        cin >> n;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                count++;
            }
            else if (s[i] == ')' && count > 0)
            {
                count--;
            }
        }
        cout << count << endl;
    }
}