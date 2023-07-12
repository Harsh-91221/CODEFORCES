// Input
// 5
// 10 4
// 13 9
// 100 13
// 123 456
// 92 46

// Output
// 2
// 5
// 4
// 333
// 0

/*Explanation-> You are given two positive integers aand b.
In one move you can increase aby 1(replace awith a+1).
Your task is to find the minimum number of moves you need to do in order to make a divisible by b.
It is possible, that you have to make 0 moves, as a is already divisible by b.
You have to answer t independent test cases.*/

#include <iostream>
using namespace std;
int main()
{
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << b - (a % b) << endl;
        }
    }
}