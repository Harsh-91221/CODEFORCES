// Input
// aaaa
// aaaA

// Output
// 0

/*Explanation->If the first string is less than the second one, print "-1".
If the second string is less than the first one, print "1".
If the strings are equal, print "0".
Note that the letters' case is not taken into consideration when the strings are compared.*/
#include <iostream>
using namespace std;
int main()
{
    string str1 = "";
    string str2 = "";
    cin >> str1;
    cin >> str2;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] < 92)
        {
            str1[i] = str1[i] + 32;
        }
        if (str2[i] < 92)
        {
            str2[i] = str2[i] + 32;
        }
    }
    if (str1 < str2)
    {
        cout << "-1";
    }
    if (str1 > str2)
    {
        cout << "1";
    }
    if (str1 == str2)
    {
        cout << "0";
    }
}