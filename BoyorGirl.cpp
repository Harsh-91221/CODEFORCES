// input
// wjmzbmr

// output
// CHAT WITH HER!

/*Explanation-> if the number of distinct characters in one's user name is odd, then he is a male, otherwise she is a female.
You are given the string that denotes the user name, please help our hero to determine the gender of this user by his method.*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string str = "";
    int count = 0;
    cin >> str;
    sort(str.begin(), str.end());
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != str[i + 1])
        {
            count++;
        }
    }
    if (count & 1)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
}