// Input
// 5
// 1
// 4041
// 4042
// 8081
// 8079

// Output
// NO
// YES
// YES
// YES
// NO

/*Explanation-> n=4041, then the number n can be represented as the sum 2020+2021;
n=4042, then the number n can be represented as the sum 2021+2021;
n=8081, then the number n can be represented as the sum 2020+2020+2020+2021;
n=8079, then the number n cannot be represented as the sum of the numbers 2020 and 2021

.Help Polycarp to find out whether the number n can be represented as
the sum of a certain number of numbers 2020 and a certain number of numbers 2021.*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        int r = n % 2020;
        int s = n / 2020;
        if (s >= r)
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