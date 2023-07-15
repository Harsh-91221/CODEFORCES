// Input
// 6
// 2
// 3
// 4
// 5
// 998244353
// 1099511627776

// Output
// NO
// YES
// NO
// YES
// YES
// NO

/*Explanation-> You are given an integer n. Check if n has an odd divisor,
greater than one (does there exist such a number x (x>1) that n is divisible by x and x is odd).*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        bool k = n & (n - 1);
        if (k == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
