// Input
// 512 4

// Output
// 50

/*Explanation-> if the last digit of the number is non-zero, she decreases the number by one;
if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).
You are given an integer number n.
Tanya will subtract one from it k times.
Your task is to print the result after all k subtractions.*/

#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        if (n % 10 == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
    }
    cout << n;
}