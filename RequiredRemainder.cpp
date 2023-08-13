// Input
// 7
// 7 5 12345
// 5 0 4
// 10 5 15
// 17 8 54321
// 499999993 9 1000000000
// 10 5 187
// 2 0 999999999

// Output
// 12339
// 0
// 15
// 54306
// 999999995
// 185
// 999999998

/*Explanation-> Your task is to find the maximum integer k such that 0≤k≤n that kmodx=y, where mod is modulo operation.
Many programming languages use percent operator % to implement it.
In other words, with given x,y and n you need to find the maximum possible integer from 0 to n that has the remainder y modulo x.*/

#include <iostream>
using namespace std;
int main()
{
    long long int t, x, y, n;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> n;
        int num = (n - y) / x;
        cout << (num * x) + y << endl;
    }
    return 0;
}