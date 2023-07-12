// Input
// 6 6 4

// Output
// 4

/*Explanation-> Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters.
On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones.
Each flagstone is of the size a × a.

What is the least number of flagstones needed to pave the Square?
It's allowed to cover the surface larger than the Theatre Square,
but the Square has to be covered. It's not allowed to break the flagstones.
The sides of flagstones should be parallel to the sides of the Square.*/

#include <iostream>
using namespace std;
int main()
{
    long long int n, m, a, len = 0, bred = 0;
    cin >> n >> m >> a;
    len = n / a;
    if (n % a != 0)
    {
        len++;
    }
    bred = m / a;
    if (m % a != 0)
    {
        bred++;
    }
    cout << len * bred;
    return 0;
}