// Input
// 4
// 3 2 1 2

// Output
// 1 2 2 3

/*Explanation-> There are n columns of toy cubes in the box arranged in a line.
The i-th column contains ai cubes. At first, the gravity in the box is pulling the cubes downwards.
When Chris switches the gravity, it begins to pull all the cubes to the right side of the box.
The figure shows the initial and final configurations of the cubes in the box:
the cubes that have changed their position are highlighted with orange.*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}