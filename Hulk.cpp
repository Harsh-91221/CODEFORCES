// Input
// 2

// Output
// I hate that I love it

/*Explanation-> if n = 1, then his feeling is "I hate it" or if n = 2 it's "I hate that I love it",
and if n = 3 it's "I hate that I love that I hate it" and so on.*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool isTrue = false;
    while (n)
    {
        if (!isTrue)
        {
            cout << "I hate ";
            isTrue = true;
        }
        else
        {
            cout << "I love ";
            isTrue = false;
        }
        if (n > 1)
        {
            cout << "that ";
        }
        else
        {
            cout << "it ";
        }
        n--;
    }
}