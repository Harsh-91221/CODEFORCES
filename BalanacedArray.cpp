// Input
// 5
// 2
// 4
// 6
// 8
// 10

// Output
// NO
// YES
// 2 4 1 5
// NO
// YES
// 2 4 6 8 1 3 5 11
// NO

/*Explanation-> You want to construct the array a of length n such that:

The first n2 elements of a are even (divisible by 2);the second n2 elements of a are odd (not divisible by 2);
all elements of a are distinct and positive;the sum of the first half equals to the sum of the second half (∑i=1n2ai=∑i=n2+1nai).*/
#include <iostream>
using namespace std;
int main()
{
    long long int t, n, sum1, sum2;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sum1 = 0, sum2 = 0;
        if (n % 4 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 2; i <= n; i += 2)
            {
                cout << i << " ";
                sum1 += i;
            }
            for (int i = 1; i < n - 2; i += 2)
            {
                cout << i << " ";
                sum2 += i;
            }
            cout << sum1 - sum2 << endl;
        }
    }
    return 0;
}