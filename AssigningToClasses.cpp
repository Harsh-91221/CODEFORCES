// Input
// 3
// 1
// 1 1
// 3
// 6 5 4 1 2 3
// 5
// 13 4 20 13 2 5 8 3 17 16

// Output
// 0
// 1
// 5

/*Explanation-> you would like to assign each student to one of the 2 classes such that each class has odd number of students
(not divisible by 2). The number of students in the classes may be equal or different, by your choice.
Every student has to be assigned to exactly one class.
Among such partitions, you want to choose one in which the absolute difference between skill levels of the classes is minimized.

What is the minimum possible absolute difference you can achieve?*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, res = 0;
        cin >> n;
        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        res = abs(a[n] - a[n - 1]);
        cout << res << endl;
    }
    return 0;
}