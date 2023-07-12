// Input
// 1 7 3 3

// Output
// 1

/*Explanation->  the store sells horseshoes of all colors under the sun and Valera has enough money to buy any four of them.
However, in order to save the money, he would like to spend as little money as possible,
so you need to help Valera and determine what is the minimum number of horseshoes
he needs to buy to wear four horseshoes of different colors to a party.*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[4];
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 4);
    for (int i = 0; i < 3; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
        }
    }
    cout << count;
}