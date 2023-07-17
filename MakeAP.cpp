// Input
// 11
// 10 5 30
// 30 5 10
// 1 2 3
// 1 6 3
// 2 6 3
// 1 1 1
// 1 1 2
// 1 1 3
// 1 100000000 1
// 2 1 1
// 1 2 2

// Output
// YES
// YES
// YES
// YES
// NO
// YES
// NO
// YES
// YES
// NO
// YES

/*In the first and second test cases, you can choose the number m=4 and multiply the second number (b=5) by 4.

In the first test case the resulting sequence will be [10,20,30]. This is an AP with a difference d=10.

In the second test case the resulting sequence will be [30,20,10]. This is an AP with a difference d=−10.*/

/*Explanation-> Polycarp has 3 positive integers a, b and c. He can perform the following operation exactly once.

Choose a positive integer m and multiply exactly one of the integers a, b or c by m.*/

#include <iostream>
using namespace std;
int main()
{
    int t, m;
    cin >> t;
    while (t--)
    {
        long int a, b, c;
        cin >> a >> b >> c;
        m = -1;
        if ((2 * b - c) > 0 && (2 * b - c) % a == 0)
        {
            m = (2 * b - c) / a;
        }
        else if ((a + c) > 0 && (a + c) % (2 * b) == 0)
        {
            m = (a + c) / (2 * b);
        }
        else if ((2 * b - a) > 0 && (2 * b - a) % c == 0)
        {
            m = (2 * b - a) / c;
        }
        if (m == -1)
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