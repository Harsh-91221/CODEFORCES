// Input
// 5
// 2
// 2 3
// 4
// 2 2 8 8
// 3
// 3 3 3
// 4
// 5 5 5 5
// 4
// 1 1 1 1

// Output
// YES
// NO
// YES
// NO
// NO

/*Explanation-> In one move, you can choose two indices 1≤i,j≤n such that i≠j and set ai:=aj.
You can perform such moves any number of times (possibly, zero).
You can choose different indices in different operations.
The operation := is the operation of assignment (i.e. you choose i and j and replace ai with aj).

Your task is to say if it is possible to obtain an array with an odd (not divisible by 2) sum of elements.*/

#include <iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int sum = 0;
        bool even = false, odd = false;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum += a;
            if (a % 2 == 0)
            {
                even = true;
            }
            else
            {
                odd = true;
            }
        }
        if (sum % 2 != 0 || (odd && even))
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