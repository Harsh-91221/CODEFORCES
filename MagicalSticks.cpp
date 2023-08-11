// Input
// 4
// 1
// 2
// 3
// 4

// Output
// 1
// 1
// 2
// 2

/*Explanation-> He can connect some sticks. If he connects two sticks that have lengths a and b, he gets one stick with length a+b.
Two sticks, that were used in the operation disappear from his set and the new connected stick
appears in his set and can be used for the next connections.

He wants to create the maximum number of sticks that have the same length.
It is not necessary to make all sticks have the same length, some sticks can have the other length.
How many sticks with the equal length he can create?*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long n;
    while (t--)
    {
        int ans;
        cin >> n;
        if (n % 2 == 0)
        {
            ans = n / 2;
        }
        else
        {
            ans = (n / 2) + 1;
        }
        cout << ans << endl;
    }
    return 0;
}