// Input
// 3
// 010011
// 0
// 1111000

// Output
// 2
// 0
// 0

/*Explanation-> You are given a string s. Each character is either 0 or 1.
You want all 1's in the string to form a contiguous subsegment.
For example, if the string is 0, 1, 00111 or 01111100, then all 1's form a contiguous subsegment,
and if the string is 0101, 100001 or 11111111111101, then this condition is not met.

You may erase some (possibly none) 0's from the string. What is the minimum number of 0's that you have to erase?*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0, x = 0, y = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                x = i;
                break;
            }
        }
        for (int i = s.length(); i >= 0; i--)
        {
            if (s[i] == '1')
            {
                y = i;
                break;
            }
        }
        for (int i = x; i < y; i++)
        {
            if (s[i] == '0')
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}