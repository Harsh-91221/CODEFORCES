// Input
// 7
// 3
// 6
// 7
// 21
// 28
// 999999999
// 999999984

// Output
// 1
// 2
// 1
// 7
// 4
// 333333333
// 333333328

/*Explanation-> Vova will be satisfied if you tell him any positive integer x
so there is an integer k>1 that x+2x+4x+⋯+2k−1x=n.

It is guaranteed that at least one solution exists. Note that k>1.*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int n;
        cin >> n;
        for (int k = 2; k < 10e9; k++)
        {
            int p = pow(2, k) - 1;
            if (n % p == 0)
            {
                cout << n / p << endl;
                break;
            }
        }
    }
    return 0;
}