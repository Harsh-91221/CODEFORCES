// Input
// 4
// 8 5
// 1 2
// 4 4
// 3 9

// Output
// 3 1
// 1 0
// 0 0
// 6 3

/*Explanation-> It is time for your first ever race in the game against Ronnie. To make the race interesting,
you have bet a dollars and Ronnie has bet b dollars. But the fans seem to be disappointed.
The excitement of the fans is given by gcd(a,b), where gcd(x,y) denotes the greatest common divisor (GCD) of integers x and y.
To make the race more exciting, you can perform two types of operations:

Increase both a and b by 1.Decrease both a and b by 1.
This operation can only be performed if both a and b are greater than 0.
In one move, you can perform any one of these operations.
You can perform arbitrary (possibly zero) number of moves.
Determine the maximum excitement the fans can get and the minimum number of moves required to achieve it.*/

#include <iostream>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        if (a < b)
        {
            int t = a;
            a = b;
            b = t;
        }
        if (a == b)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            int x = abs(a - b);
            int y = a % x;
            y = min(y, x - y);
            cout << x << " " << y << endl;
        }
    }
    return 0;
}
