// Input
// 2
// 2
// 1

// Output
// 2
// 1

/*Explanation-> You have integer n.
Calculate how many ways are there to fully cover belt-like area of 4n−2 triangles with diamond shapes.
Diamond shape consists of two triangles. You can move, rotate or flip the shape, but you cannot scale it.
2 coverings are different if some 2 triangles are covered by the same diamond shape
in one of them and by different diamond shapes in the other one.*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        cout << n << endl;
    }
}