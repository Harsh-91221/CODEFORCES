// Input
// 1010100
// 0100101

// Output
// 1110001

/*Explanation-> In his contest he gave the contestants many different pairs of numbers.
Each number is made from digits 0 or 1.
The contestants should write a new number corresponding to the given pair of numbers.
The rule is simple: The i-th digit of the answer is 1 if and only if the i-th digit of the two given numbers differ.
In the other case the i-th digit of the answer is 0.*/

#include <iostream>
using namespace std;
int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
        {
            a[i] = '1';
        }
        else
        {
            a[i] = '0';
        }
    }
    cout << a;
}