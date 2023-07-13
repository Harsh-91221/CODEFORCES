// Input
// 10 3

// Output
// 5

/*Explanation->  He writes down the following sequence of numbers:
firstly all odd integers from 1 to n (in ascending order),
then all even integers from 1 to n (also in ascending order).
Help our hero to find out which number will stand at the position number k.*/

#include <iostream>
using namespace std;
int main()
{
    long long int n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << (k * 2) - 1;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2;
    }
}