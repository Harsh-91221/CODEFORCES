// Input
// 91730629

// Output
// 91230320

/*Explanation-> Luke Skywalker gave Chewbacca an integer number x.
Chewbacca isn't good at numbers but he loves inverting digits in them.
Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits.
The decimal representation of the final number shouldn't start with a zero.*/

#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // CONVERTING IT INTO INTEGER FORM
    int f = s[0] - '0';
    // NO NEED TO CHANGE AS IT IS ALREADY MAXIMUM
    if (f == 9)
    {
        s[0] = '9';
    }
    else
    {
        // LESS THAN 5 WILL GIVE MORE DIFFERENCE WHICH WE DON'T WANT
        if (f > 4)
        {
            // AGAIN CONVERTING FROM INT TO STRING
            s[0] = ((9 - f) + '0');
        }
    }
    for (int i = 1; i < s.length(); i++)
    {
        int a = s[i] - '0';
        // CONTINUE IF a IS SMALLER THAN 5 AS EXPLAINED ABOVE
        if (a < 5 || a == 0)
        {
            continue;
        }
        else
        {
            // AGAIN CONVERSION TO STRING
            s[i] = ((9 - a) + '0');
        }
    }
    cout << s;
    return 0;
}