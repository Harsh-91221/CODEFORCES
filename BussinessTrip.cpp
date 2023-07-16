// Input
// 11
// 1 1 4 1 1 5 1 1 4 1 1 1

// Output
// 3

/*Explanation-> Today Petya opened the cupboard and found a scary note there.
His parents had left him with duties: he should water their favourite flower all year,
each day, in the morning, in the afternoon and in the evening.

"Wait a second!" — thought Petya. He know for a fact that if he fulfills the parents' task in the i-th (1 ≤ i ≤ 12) month of the year,
then the flower will grow by ai centimeters, and if he doesn't water the flower in the i-th month,
then the flower won't grow this month. Petya also knows that try as he might,
his parents won't believe that he has been watering the flower if it grows strictly less than by k centimeters.

Help Petya choose the minimum number of months when he will water the flower,
given that the flower should grow no less than by k centimeters.*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int k, sum = 0;
    cin >> k;
    int a[100];
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 12, greater<int>());
    if (k == 0)
    {
        cout << "0";
        return 0;
    }
    for (int i = 0; i < 12; i++)
    {
        sum += a[i];
        if (sum >= k)
        {
            cout << i + 1;
            return 0;
        }
    }
    cout << "-1";
}