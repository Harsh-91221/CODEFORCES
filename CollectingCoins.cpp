// Input
// 5
// 5 3 2 8
// 100 101 102 105
// 3 2 1 100000000
// 10 20 15 14
// 101 101 101 3

// Output
// YES
// YES
// NO
// NO
// YES

/*Explanation-> He wants to distribute all these n coins between his sisters in such a way
that the number of coins Alice has is equal to the number of coins Barbara has and is equal to the number of coins Cerene has.
In other words, if Polycarp gives A coins to Alice, B coins to Barbara and C coins to Cerene (A+B+C=n), then a+A=b+B=c+C.*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int sum = a + b + c + n;
        int p = sum / 3;
        if (sum % 3 == 0 && (p >= a && p >= b && p >= c))
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