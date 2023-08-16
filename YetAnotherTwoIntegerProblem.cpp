// Input
// 6
// 5 5
// 13 42
// 18 4
// 1337 420
// 123456789 1000000000
// 100500 9000

// Output
// 0
// 3
// 2
// 92
// 87654322
// 9150

/*Explanation-> In one move, you can choose some integer k from 1 to 10 and add it to a or subtract it from a.
In other words, you choose an integer k∈[1;10] and perform a:=a+k or a:=a−k.
You may use different values of k in different moves.

Your task is to find the minimum number of moves required to obtain b from a.*/

#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        long long int diff = abs(a - b);
        long long int steps = diff / 10;
        if (diff % 10 != 0)
        {
            steps++;
        }
        cout << steps << endl;
    }
    return 0;
}