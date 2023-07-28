// Input
// 3 4 5 10 8 100 3 1

// Output
// 2

/*Explanation-> This winter is so cold in Nvodsk! A group of n friends decided to buy k bottles of a soft drink called 
"Take-It-Light" to warm up a bit. Each bottle has l milliliters of the drink. 
Also they bought c limes and cut each of them into d slices. After that they found p grams of salt.

To make a toast, each friend needs nl milliliters of the drink, a slice of lime and np grams of salt. 
The friends want to make as many toasts as they can, provided they all drink the same amount. 
How many toasts can each friend make?*/

#include <iostream>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_drinks = k * l;
    total_drinks = total_drinks / nl; //1000 / 10 = 100
    int total_limes = c * d;     //80
    int total_salt = p / np;     //100 / 2 = 50
    int ans = min(total_drinks, min(total_limes, total_salt)); //50 / n
    cout << ans / n;
    return 0;
}