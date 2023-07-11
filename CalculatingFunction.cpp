// Input
// 4

// Output
// 2

/*Explanation-> For a positive integer n let's define a function f:
f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn
Your task is to calculate f(n) for a given integer n.*/

#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2;
    }
    else
    {
        cout << -(n + 1) / 2;
    }
}