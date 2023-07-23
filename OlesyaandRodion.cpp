// Input
// 3 2

// Output
// 200

/*Olesya loves numbers consisting of n digits, and Rodion only likes numbers that are divisible by t.
Find some number that satisfies both of them.*/

#include <iostream>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    if (n < 2 && t == 10)
    {
        cout << "-1";
        return 0;
    }
    if (t == 10)
    {
        t = t / 10;
    }
    cout << t;
    for (int i = 0; i < n - 1; i++)
    {
        cout << "0";
    }
}