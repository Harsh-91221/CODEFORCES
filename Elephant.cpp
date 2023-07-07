// input
// 12

// output
// 3

/*Explanation-> In one step the elephant can move 1, 2, 3, 4 or 5 positions forward.
Determine, what is the minimum number of steps he need to make in order to get to his friend's house.*/

#include <iostream>
using namespace std;
int main()
{
    int x, s;
    cin >> x;
    s = x / 5;
    if (x % 5 == 0)
    {
        cout << s << endl;
    }
    else
    {
        cout << s + 1 << endl;
    }
}