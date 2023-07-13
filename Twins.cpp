// Input
// 2
// 3 3

// Output
// 2

/*Explanation->  pick for yourself some subset of coins so that the sum of values of your coins is strictly larger
than the sum of values of the remaining coins that your twin will have.
However, you correctly thought that if you take too many coins, the twin will suspect the deception.
So, you've decided to stick to the following strategy to avoid suspicions: you take the minimum number of coins,
whose sum of values is strictly more than the sum of values of the remaining coins.
On this basis, determine what minimum number of coins you need to take to divide them in the described manner.*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, a[100], sum = 0, sum1 = 0, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    int half = sum / 2;
    sort(a, a + n);
    for (int i = n - 1; i >= 0; i--)
    {
        sum1 = sum1 + a[i];
        count++;
        if (half < sum1)
        {
            break;
        }
    }
    cout << count;
    return 0;
}