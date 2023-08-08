// Input
// 5
// 3 2 3
// 100 100 100
// 50 49 49
// 10 30 20
// 1 1000000000 1000000000

// Output
// YES
// 2 2 3
// YES
// 100 100 100
// NO
// NO
// YES
// 1 1 1000000000

/*Explanation-> You are given three positive (i.e. strictly greater than zero) integers x, y and z.

Your task is to find positive integers a, b and c such that x=max(a,b), y=max(a,c) and z=max(b,c),
or determine that it is impossible to find such a, b and c.

You have to answer t independent test cases. Print required a, b and c in any (arbitrary) order.*/

#include <iostream>
using namespace std;
int main()
{
    long int t;
    cin >> t;
    long long int x, y, z;
    while (t--)
    {
        cin >> x >> y >> z;
        if (x > y)
            swap(x, y);
        if (x > z)
            swap(x, z);
        if (y > z)
            swap(y, z);
        if (y != z)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl << x << " " << x << " " << z << endl;
        }
    }
    return 0;
}