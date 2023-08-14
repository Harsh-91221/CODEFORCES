// Input
// 3 6 5 4

// Output
// 3 2 1

/*Explanation-> Polycarp has guessed three positive integers a, b and c.
He keeps these numbers in secret, but he writes down four numbers on a board in arbitrary order —
their pairwise sums (three numbers) and sum of all three numbers (one number).
So, there are four numbers on a board in random order: a+b, a+c, b+c and a+b+c.

You have to guess three numbers a, b and c using given numbers. Print three guessed integers in any order.*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 4);
    int a = arr[3] - arr[0];
    int b = arr[3] - arr[1];
    int c = arr[3] - arr[2];
    cout << a << " " << b << " " << c;
    return 0;
}