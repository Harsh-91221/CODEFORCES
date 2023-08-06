// Input
// 4
// 1 3 5 7
// 1 5 5 7
// 100000 200000 300000 400000
// 1 1 977539810 977539810

// Output
// 3 5 5
// 5 5 5
// 200000 300000 300000
// 1 977539810 977539810

/*Explanation-> You are given four positive integers a, b, c, d, such that a≤b≤c≤d.
Your task is to find three integers x, y, z, satisfying the following conditions:
a≤x≤b.b≤y≤c.c≤z≤d.
There exists a triangle with a positive non-zero area and the lengths of its three sides are x, y, and z.
Ichihime desires to get the cookie, but the problem seems too hard for her. Can you help her?*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << b << " " << c << " " << c << endl;
    }
    return 0;
}