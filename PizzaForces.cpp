// Input
// 6
// 12
// 15
// 300
// 1
// 9999999999999999
// 3

// Output
// 30
// 40
// 750
// 15
// 25000000000000000
// 15

/*Explanation-> PizzaForces is Petya's favorite pizzeria. PizzaForces makes and sells pizzas of three sizes:
small pizzas consist of 6 slices, medium ones consist of 8 slices, and large pizzas consist of 10 slices each.
Baking them takes 15, 20 and 25 minutes, respectively.

Petya's birthday is today, and n of his friends will come, so he decided to make an order from his favorite pizzeria.
Petya wants to order so much pizza that each of his friends gets at least one slice of pizza.
The cooking time of the order is the total baking time of all the pizzas in the order.

Your task is to determine the minimum number of minutes that is needed to make pizzas containing at least n slices in total.
For example:

if 12 friends come to Petya's birthday, he has to order pizzas containing at least 12 slices in total.
He can order two small pizzas, containing exactly 12 slices, and the time to bake them is 30 minutes;*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long x = n / 6;
        long long y = n % 6;
        if (n <= 6)
        {
            cout << 15 << endl;
        }
        else if (y == 0)
        {
            cout << x * 15 << endl;
        }
        else if (y <= 2)
        {
            cout << (x * 15) + 5 << endl;
        }
        else if (y <= 4)
        {
            cout << (x * 15) + 10 << endl;
        }
        else
        {
            cout << (x * 15) + 15 << endl;
        }
    }
    return 0;
}