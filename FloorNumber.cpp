// Input
// 4
// 7 3
// 1 5
// 22 5
// 987 13

// Output
// 3
// 1
// 5
// 77

/*Explanation-> Vasya goes to visit his classmate Petya. Vasya knows that Petya's apartment number is n.

There is only one entrance in Petya's house and the distribution of apartments is the following:
 the first floor contains 2 apartments, every other floor contains x apartments each. Apartments are numbered starting from one,
 from the first floor. I.e. apartments on the first floor have numbers 1 and 2,
 apartments on the second floor have numbers from 3 to (x+2),
 apartments on the third floor have numbers from (x+3) to (2⋅x+2), and so on.

Your task is to find the number of floor on which Petya lives. Assume that the house is always high enough to fit at least n apartments.*/
#include <iostream>
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    int a = 2, count = 1;
    if (n <= 2)
    {
        cout << count << endl;
        return;
    }
    else
    {
        while (a < n)
        {
            a += x;
            count++;
        }
    }
    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}