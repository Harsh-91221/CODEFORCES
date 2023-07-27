// Input
// 4 6

// Output
// 2

/*Explanation-> Vasya has found a strange device. On the front panel of a device there are:
a red button, a blue button and a display showing some positive integer.
After clicking the red button, device multiplies the displayed number by two.
After clicking the blue button, device subtracts one from the number on the display.
If at some point the number stops being positive, the device breaks down.
The display can show arbitrarily large numbers. Initially, the display shows number n.

Bob wants to get number m on the display.
What minimum number of clicks he has to make in order to achieve this result?*/

#include <iostream>
using namespace std;
int main()
{
    long long int n, m;
    cin >> n >> m;
    if (n >= m)
    {
        cout << n - m;
        return 0;
    }
    int a = 0;
    while (n < m)
    {
        if (m % 2 == 1)
        {
            m++;
        }
        else
        {
            m /= 2;
        }
        a++;
    }
    cout << a + n - m << endl;
    return 0;
}
