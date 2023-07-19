// Input
// 477

// Output
// YES

/*Exxplanation-> Petya loves lucky numbers.
Everybody knows that lucky numbers are positive integers whose decimal representation contains only the lucky digits 4 and 7.
For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya calls a number almost lucky if it could be evenly divided by some lucky number.
Help him find out if the given number n is almost lucky.*/

#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 44 == 0 || n % 77 == 0 || n % 447 == 0 || n % 477 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}