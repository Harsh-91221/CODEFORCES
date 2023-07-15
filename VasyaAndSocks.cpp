// Input
// 9 3

// Output
// 13

/*Explanation-> Vasya has n pairs of socks.
In the morning of each day Vasya has to put on a pair of socks before he goes to school.
When he comes home in the evening, Vasya takes off the used socks and throws them away.
Every m-th day (at days with numbers m, 2m, 3m, ...) mom buys a pair of socks to Vasya.
She does it late in the evening, so that Vasya cannot put on a new pair of socks before the next day.
How many consecutive days pass until Vasya runs out of socks?*/

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        if (i * m <= n)
        {
            n++;
        }
    }
    cout << n;
}