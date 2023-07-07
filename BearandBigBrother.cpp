// Input
// 4 7

// Output
// 2

/*Explanation-> Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob.
Right now, Limak and Bob weigh a and b respectively.
It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.
Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.
After how many full years will Limak become strictly larger (strictly heavier) than Bob?*/

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    if (a > b)
    {
        count = 0;
    }
    else
    {
        while (a <= b)
        {
            a = a * 3;
            b = b * 2;
            count++;
        }
    }
    cout << count;
}