// Input
// 100
// 15 20 20 15 10 30 45

// Output
// 6

/*Explanation-> Petr decided to start reading it starting from the next day, that is, from Monday.
Petr's got a very tight schedule and for each day of the week he knows how many pages he will be able to read on that day.
Some days are so busy that Petr will have no time to read whatsoever.
However, we know that he will be able to read at least one page a week.

Assuming that Petr will not skip days and will read as much as he can every day,
determine on which day of the week he will read the last page of the book.*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> read(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> read[i];
    }
    int i = 0;
    while (n > 0)
    {
        n -= read[i];
        if (n <= 0)
        {
            break;
        }
        i++;
        i = i % 7;
    }
    cout << i + 1;
    return 0;
}