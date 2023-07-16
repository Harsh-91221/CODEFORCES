// Input
// 4
// 7 5 3
// 6 1 1
// 6 6 1
// 5 2 2

// Output
// abcabca
// aaaaaa
// aaaaaa
// ababa

/*Explanation-> You are given three positive integers n, a and b.
You have to construct a string s of length n consisting of lowercase Latin letters
such that each substring of length a has exactly b distinct letters. It is guaranteed that the answer exists.*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int i = 0;
        string s = "";
        while (i < n)
        {
            int count = 0;
            for (char j = 'a'; j <= 'z'; j++)
            {
                if (count < b && i < n)
                {
                    s = s + j;
                    count++;
                    i++;
                }
            }
        }
        cout << s << endl;
    }
}