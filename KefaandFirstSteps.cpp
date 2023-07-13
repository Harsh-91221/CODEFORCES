// Input
// 6
// 2 2 1 3 4 1

// Output
// 3

/*Explanation-> Kefa loves progress, that's why he wants to know the length of the maximum non-decreasing subsegment in sequence ai.
Let us remind you that the subsegment of the sequence is its continuous fragment.
A subsegment of numbers is called non-decreasing if all numbers in it follow in the non-decreasing order.*/

#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << "1";
        return 0;
    }
    int count = 1, maxval = INT_MIN;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] <= a[i + 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (count > maxval)
        {
            maxval = count;
        }
    }
    cout << maxval;
    return 0;
}