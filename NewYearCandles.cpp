// Input
// 6 3

// Output
// 8

/*Explanation-> Vasily has a candles.When Vasily lights up a new candle, it first burns for an hour and then it goes out.
Vasily is smart, so he can make b went out candles into a new candle.
As a result, this new candle can be used like any other new candle.

Now Vasily wonders: for how many hours can his candles light up the room if he acts optimally well?
Help him find this number.*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, sum = 0;
    cin >> a >> b;
    sum = a;
    while (a >= b)
    {
        sum += (a / b);
        a = (a / b) + (a % b);
    }
    cout << sum;
}