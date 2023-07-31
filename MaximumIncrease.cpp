// Input
// 5
// 1 7 2 11 15

// Output
// 3

/*Explanation-> You are given array consisting of n integers.
Your task is to find the maximum length of an increasing subarray of the given array.

A subarray is the sequence of consecutive elements of the array.
Subarray is called increasing if each element of this subarray strictly greater than previous.*/

#include <iostream>
using namespace std;
int main()
{
    long n, count = 1, maxi = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] < a[i])
        {
            count++;
        }
        else
        {
            if (count > maxi)
            {
                maxi = count;
            }
            count = 1;
        }
    }
    if (count > maxi)
    {
        maxi = count;
    }
    cout << maxi;
    return 0;
}