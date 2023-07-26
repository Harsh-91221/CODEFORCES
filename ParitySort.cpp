// Input
// 6
// 5
// 7 10 1 3 2
// 4
// 11 9 3 5
// 5
// 11 3 15 3 2
// 6
// 10 7 8 1 2 3
// 1
// 10
// 5
// 6 6 4 1 6

// Output
// YES
// YES
// NO
// NO
// YES
// NO

/*Explanation-> You have an array of integers a of length n. You can apply the following operation to the given array:
Swap two elements ai and aj such that i≠j, ai and aj are either both even or both odd.
Determine whether it is possible to sort the array in non-decreasing order by performing the operation any number of times
(possibly zero).
For example, let a = [7,10,1,3,2]. Then we can perform 3 operations to sort the array:
Swap a3=1 and a1=7, since 1 and 7 are odd. We get a = [1,10,7,3,2];
Swap a2=10 and a5=2, since 10 and 2 are even. We get a = [1,2,7,3,10];
Swap a4=3 and a3=7, since 3 and 7 are odd. We get a = [1,2,3,7,10].*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> canBeSorted(const vector<int> &a)
{
    int n = a.size();
    vector<int> evenElements, oddElements;
    // Separate even and odd elements into two vectors
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            evenElements.push_back(a[i]);
        }
        else
        {
            oddElements.push_back(a[i]);
        }
    }
    // Sort both even and odd vectors
    sort(evenElements.begin(), evenElements.end());
    sort(oddElements.begin(), oddElements.end());
    // Create a new vector to hold the sorted elements
    vector<int> sortedArray(n);
    int evenIndex = 0, oddIndex = 0;
    // Fill the sorted vector with sorted even and odd elements
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            sortedArray[i] = evenElements[evenIndex];
            evenIndex++;
        }
        else
        {
            sortedArray[i] = oddElements[oddIndex];
            oddIndex++;
        }
    }
    return sortedArray;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> sortedArray = canBeSorted(a);
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (sortedArray[i] < sortedArray[i - 1])
            {
                flag = false;
                break;
            }
        }
        if (flag)
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
