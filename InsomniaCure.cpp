// Input
// 1
// 2
// 3
// 4
// 12

// Output
// 12

/*Explanation-> Every k-th dragon got punched in the face with a frying pan.
Every l-th dragon got his tail shut into the balcony door.
Every m-th dragon got his paws trampled with sharp heels.
Finally, she threatened every n-th dragon to call her mom, and he withdrew in panic.

How many imaginary dragons suffered moral or physical damage tonight, if the princess counted a total of d dragons?*/

#include <iostream>
using namespace std;
int main()
{
    long long int k, l, m, n, d, count = 0;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    for (int i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            count++;
        }
    }
    cout << count;
}