// Input
// 5
// 5009
// 7
// 9876
// 10000
// 10

// Output
// 2
// 9 5000
// 1
// 7
// 4
// 6 70 800 9000
// 1
// 10000
// 1
// 10

/*Explanation-> A positive (strictly greater than zero) integer is called round if it is of the form d00...0.
In other words, a positive integer is round if all its digits except the leftmost (most significant) are equal to zero.
In particular, all numbers from 1 to 9 (inclusive) are round.
For example, the following numbers are round: 4000, 1, 9, 800, 90. The following numbers are not round: 110, 707, 222, 1001.

You are given a positive integer n (1≤n≤104).
Represent the number n as a sum of round numbers using the minimum number of summands (addends).
In other words, you need to represent the given number n as a sum of the least number of terms, each of which is a round number.*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[6]; // AS MAXIMUM VALUE CAN BE 10^6
        int total = 0, m = 1;
        for (int i = 1; i < 6; i++)
        {
            a[i] = n % 10;
            n = n / 10;
            if (a[i] != 0)
            {
                total++;
            }
        }
        cout << total << endl;
        for (int i = 1; i < 6; i++)
        {
            if (a[i] != 0)
            {
                cout << a[i] * m << " ";
            }
            m = m * 10;
        }
        cout << endl;
    }
    return 0;
}