// Input
// 7
// 1
// 2
// 3
// 12
// 12345
// 15116544
// 387420489

// Output
// 0
// -1
// 2
// -1
// -1
// 12
// 36

/*Explanation-> You are given an integer n. In one move,
you can either multiply n by two or divide n by 6 (if it is divisible by 6 without the remainder).
Your task is to find the minimum number of moves needed to obtain 1 from n or determine if it's impossible to do that.
You have to answer t independent test cases.*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        int count = 0;
        cin >> n;
        while (n > 1)
        {
            if (n % 6 == 0)
            {
                n = n / 6;
            }
            else
            {
                n = n * 2;
            }
            count++;
        }
        if (n == 1)
        {
            cout << count << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}