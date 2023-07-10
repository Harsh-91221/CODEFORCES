// Input
// 1987

// Output
// 2013

/*Explanation-> given a year number,
find the minimum year number which is strictly larger than the given one and has only distinct digits.*/

#include <iostream>
using namespace std;
int main()
{
    long long int y;
    cin >> y;
    while (1)
    {
        y++;
        int a = y / 1000;
        int b = y / 100 % 10;
        int c = y / 10 % 10;
        int d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout << y;
            return 0;
        }
    }
}