// Input
// 4
// 22
// 9999
// 1
// 777

// Output
// 13
// 90
// 1
// 66

/*Explanation-> Call an apartment boring, if its number consists of the same digit.
Examples of boring apartments are 11,2,777,9999 and so on.

Our character is a troublemaker, and he calls the intercoms of all boring apartments,
till someone answers the call, in the following order:

First he calls all apartments consisting of digit 1, in increasing order (1,11,111,1111).
Next he calls all apartments consisting of digit 2, in increasing order (2,22,222,2222) And so on.
For example, if the resident of boring apartment 22 answered,
then our character called apartments with numbers 1,11,111,1111,2,22
and the total number of digits he pressed is 1+2+3+4+1+2=13.*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        long long x = n[0] - '0' - 1;
        long long ans = (1 + 2 + 3 + 4) * x;
        for (int i = 1; i <= n.size(); i++)
        {
            ans = ans + i;
        }
        cout << ans << endl;
    }
    return 0;
}