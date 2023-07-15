// Input
// 5 3
// -6 0 35 -2 4

// Output
// 8

/*Explanation->  There were n TV sets at that sale. TV set with index i costs ai bellars.
Some TV sets have a negative price — their owners are ready to pay Bob if he buys their useless apparatus.
Bob can «buy» any TV sets he wants. Though he's very strong, Bob can carry at most m TV sets,
and he has no desire to go to the sale for the second time. Please, help Bob find out the maximum sum of money that he can earn.*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[2000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int money = 0;
    for (int i = 0; i < m && a[i] < 0; i++)
    {
        money = money - a[i];
    }

    cout << money;
    return 0;
}
