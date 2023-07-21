// Input
// 5
// 8 1 2
// 4 4 5
// 9 9 9
// 0 0 0
// 8 5 3

// Output
// YES
// NO
// YES
// NO
// YES

/*Explanation-> Suneet has three digits a, b, and c.
Since math isn't his strongest point,
he asks you to determine if you can choose any two digits to make a sum greater or equal to 10.
Output "YES" if there is such a pair, and "NO" otherwise.*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b >= 10 || a + c >= 10 || b + c >= 10)
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