// Input
// 8
// 11101111

// Output
// 6

/*Explanation-> Once he thought about a string of length n consisting of zeroes and ones.
Consider the following operation: we choose any two adjacent positions in the string,
and if one them contains 0, and the other contains 1,
then we are allowed to remove these two digits from the string,
obtaining a string of length n - 2 as a result.

Now Andreid thinks about what is the minimum length of the string that can remain after
applying the described operation several times (possibly, zero)? Help him to calculate this number.*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int onecount = 0, zerocount = 0;
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        if (ch == '0')
        {
            zerocount++;
        }
        else
        {
            onecount++;
        }
    }
    cout << abs(zerocount - onecount);
}