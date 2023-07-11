// 6
// 10
// 10
// 10
// 01
// 10
// 10

// Output
// 3

/*Explanation->  n lines follow. The i-th line (1 ≤ i ≤ n) contains either characters "01",
if Mike put the i-th magnet in the "plus-minus" position, or characters "10",
if Mike put the magnet in the "minus-plus" position.*/

#include <iostream>
using namespace std;
int main()
{
    long long int n;
    int count = 0;
    int a[100000];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[i + 1])
        {
            count++;
        }
    }
    cout << count;
}