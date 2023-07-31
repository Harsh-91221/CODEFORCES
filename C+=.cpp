// Input
// 2
// 1 2 3
// 5 4 100

// Output
// 2
// 7

/*Explanation-> Leo has developed a new programming language C+=.
In C+=, integer variables can only be changed with a "+=" operation that adds the right-hand side value to the left-hand side variable.
For example, performing "a += b" when a = 2, b = 3 changes the value of a to 5 (the value of b does not change).

In a prototype program Leo has two integer variables a and b, initialized with some positive values.
He can perform any number of operations "a += b" or "b += a".
Leo wants to test handling large integers, so he wants to make the value of either a or b strictly greater than a given value n.
What is the smallest number of operations he has to perform?*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, n, count = 0;
        cin >> a >> b >> n;
        while (max(a, b) <= n)
        {
            if (a <= b)
            {
                a += b;
            }
            else
            {
                b += a;
            }
            count++;
        }
        cout << count << endl;
    }
    return 0;
}