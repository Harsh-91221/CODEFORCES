// Input
// 5
// 1 100
// 2 2
// 5 5
// 2 1000000000
// 1000000000 1000000000

// Output
// 0
// 2
// 10
// 1000000000
// 2000000000

/*Explanation-> you have to maximize the sum of absolute differences between adjacent (consecutive) elements.
For example, if the array a=[1,3,2,5,5,0] then the value above for this array is |1−3|+|3−2|+|2−5|+|5−5|+|5−0|=2+1+3+0+5=11*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long int n, m;
    while (t--)
    {
        cin >> n >> m;
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else if (n == 2)
        {
            cout << m << endl;
        }
        else
        {
            cout << m * 2 << endl;
        }
    }
    return 0;
}