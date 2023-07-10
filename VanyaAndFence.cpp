// Input
// 3 7
// 4 5 14

// Output
// 4

/*Explanation-> Consider the width of the person walking as usual to be equal to 1, while the width of the bent person is equal to 2.
Friends want to talk to each other while walking, so they would like to walk in a single row.
What is the minimum width of the road, such that friends can walk in a row and remain unattended by the guard?*/

#include <iostream>
using namespace std;
int main()
{
    long long int n, h, count = 0;
    cin >> n >> h;
    int a[2000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= h)
        {
            count++;
        }
        else
        {
            count = count + 2;
        }
    }
    cout << count;
}