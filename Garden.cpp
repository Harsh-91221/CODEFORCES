// Input
// 3 6
// 2 3 5

// Output
// 2

/*Explanation-> Luba thinks about watering her garden.
The garden can be represented as a segment of length k.
Luba has got n buckets, the i-th bucket allows her to water some continuous subsegment of garden of length exactly ai each hour.
Luba can't water any parts of the garden that were already watered, also she can't water the ground outside the garden.

Luba has to choose one of the buckets in order to water the garden as fast as possible
(as mentioned above, each hour she will water some continuous subsegment of length ai if she chooses the i-th bucket).
Help her to determine the minimum number of hours she has to spend watering the garden.
It is guaranteed that Luba can always choose a bucket so it is possible water the garden.*/

#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (k % a == 0)
        {
            res = max(res, a);
        }
    }
    cout << k / res;
}