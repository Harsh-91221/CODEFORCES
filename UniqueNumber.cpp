// Input
// 4
// 1
// 5
// 15
// 50

// Output
// 1
// 5
// 69
// -1

/*Explanation-> You are given a positive number x.
Find the smallest positive integer number that has the sum of digits equal to x and all digits are distinct (unique).*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ans;
        if (n < 10)
        {
            cout << n << endl;
        }
        else if (n > 45)
        {
            cout << "-1" << endl;
        }
        else
        {
            int i = 9, sum = 0;
            while (sum < n && i > 0)
            {
                ans.push_back(min(n - sum, i));
                sum = sum + i;
                i--;
            }
            for (int i = ans.size() - 1; i >= 0; i--)
            {
                cout << ans[i];
            }
            cout << endl;
        }
    }
    return 0;
}