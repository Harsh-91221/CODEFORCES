// Input
// 5

// Output
// 2

/*Explanation-> Initially, the box is empty. Each morning, you can put any number of bacteria into the box.
And each night, every bacterium in the box will split into two bacteria.
You hope to see exactly x bacteria in the box at some moment.

What is the minimum number of bacteria you need to put into the box across those days?*/

#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        if (n % 2 == 1)
        {
            count++;
        }
        n = n / 2;
    }
    cout << count;
}