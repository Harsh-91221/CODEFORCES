// input
// 1000000001

// output
// YES

/*Explanation-> If there are at least 7 players of some team standing one after another,
then the situation is considered dangerous*/

#include <iostream>
using namespace std;
int main()
{
    string str = "";
    int countzero = 0, countone = 0, ans = 0;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '0')
        {
            countzero++;
            countone = 0;
        }
        if (str[i] == '1')
        {
            countone++;
            countzero = 0;
        }
        if (countone == 7 || countzero == 7)
        {
            ans = 1;
        }
    }

    if (ans == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}