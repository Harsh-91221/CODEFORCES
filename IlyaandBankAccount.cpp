// Input
// -100003

// Output
// -10000

/*Explanation-> if the state of Ilya's bank account is -123,
then Ilya can delete the last digit and get his account balance equal to -12,
also he can remove its digit before last and get the account balance equal to -13.
Of course, Ilya is permitted not to use the opportunity to delete a digit from the balance.

Ilya is not very good at math, and that's why he asks you to help him maximize his bank account.
Find the maximum state of the bank account that can be obtained using the bank's gift.*/

#include <iostream>
using namespace std;
int main()
{
    long long int n, k = 0;
    cin >> n;
    if (n >= 0)
    {
        cout << n;
    }
    else
    {
        long long int last = n % 10;
        long long int lastdeleted = n / 10;
        long long int seconddeleted = (lastdeleted - (lastdeleted) % 10) + last;
        k = max(seconddeleted, lastdeleted);
        cout << k;
    }
    return 0;
}