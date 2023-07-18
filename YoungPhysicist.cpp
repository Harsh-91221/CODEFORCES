// Input
// 3
// 3 -1 7
// -5 2 -4
// 2 -1 -3

// Output
// YES

/*Explanation-> we need only to check if the sum of all vectors is equal to 0.*/
#include <iostream>
using namespace std;
int main()
{
    int n, sum1 = 0, sum2 = 0, sum3 = 0;
    cin >> n;
    while (n--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        sum1 += x;
        sum2 += y;
        sum3 += z;
    }
    if (sum1 == 0 && sum2 == 0 && sum3 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}