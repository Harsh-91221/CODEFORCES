// Input
// 6
// 7
// 1
// 2
// 3
// 2000000000
// 763243547

// Output
// 3
// 0
// 0
// 1
// 999999999
// 381621773

/*Explanation-> There are two sisters Alice and Betty. You have n candies.
You want to distribute these n candies between two sisters in such a way that:

.Alice will get a (a>0) candies;
.Betty will get b (b>0) candies;
.each sister will get some integer number of candies;
.Alice will get a greater amount of candies than Betty (i.e. a>b);
.all the candies will be given to one of two sisters (i.e. a+b=n).

Your task is to calculate the number of ways to distribute exactly n candies between sisters in a way described above.
Candies are indistinguishable.*/

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
        if (n == 1 || n == 2)
        {
            cout << 0 << endl;
        }
        else if (n % 2 == 0)
        {
            cout << n / 2 - 1 << endl;
        }
        else
        {
            cout << n / 2 << endl;
        }
    }
    return 0;
}