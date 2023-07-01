// Input
// 3
// 1 1 0
// 1 1 1
// 1 0 0

// Output
// 2

/*Explanation->One day three best friends Petya, Vasya and Tonya decided to form a team and take part in programming contests.
Participants are usually offered several problems during programming contests.
Long before the start the friends decided that they will implement a problem if at least two of them are sure about the solution.
Otherwise, the friends won't write the problem's solution.*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == 2 || a + c == 2 || b + c == 2 || a + b + c == 3)
        {
            count++;
        }
    }
    cout << count;
}