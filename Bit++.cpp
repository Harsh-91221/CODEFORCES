// Input
// 2
// X++
// --X

// Output
// 0

/*Explanation-> A statement in language Bit++ is a sequence, consisting of exactly one operation and one variable x.
The statement is written without spaces, that is, it can only contain characters "+", "-", "X".
Executing a statement means applying the operation it contains.*/

#include <iostream>
using namespace std;
int main()
{
    int n, x = 0;
    cin >> n;
    char s[4];
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s[1] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout << x;
}