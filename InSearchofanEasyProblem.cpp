// Input
// 3
// 0 0 1

// Output
// HARD

/*Explanation-> If at least one of these n people has answered that the problem is hard,
the coordinator decides to change the problem. For the given responses, check if the problem is easy enough.
If i-th integer is 0, then i-th person thinks that the problem is easy; if it is 1,
then i-th person thinks that the problem is hard.*/

#include <iostream>
using namespace std;
int main()
{
    int n, countHard = 0;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            countHard = 1;
            break;
        }
    }
    if (countHard != 1)
    {
        cout << "EASY";
    }
    else
    {
        cout << "HARD";
    }
}