// Input
// 6
// ADAAAA

// Output
// Anton

/*Explanation-> Once they have played n games in a row.
For each game it's known who was the winner — Anton or Danik. None of the games ended with a tie.*/

#include <iostream>
using namespace std;
int main()
{
    int n, countA = 0, countD = 0;
    string s = "";
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            countA++;
        }
        else
        {
            countD++;
        }
    }
    if (countA > countD)
    {
        cout << "Anton";
    }
    else if (countD > countA)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
}