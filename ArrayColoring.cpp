// Input
// 7
// 8
// 1 2 4 3 2 3 5 4
// 2
// 4 7
// 3
// 3 9 8
// 2
// 1 7
// 5
// 5 4 3 2 1
// 4
// 4 3 4 5
// 2
// 50 48

// Output
// YES
// NO
// YES
// YES
// NO
// YES
// YES

/*Explanation-> You are given an array consisting of n integers.
Your task is to determine whether it is possible to color all its elements
in two colors in such a way that the sums of the elements of both colors
have the same parity and each color has at least one element colored.

For example, if the array is [1,2,4,3,2,3,5,4], we can color it as follows: [1,2,4,3,2,3,5,4],
where the sum of the blue elements is 6 and the sum of the red elements is 18.*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0, n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2 == 0)
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