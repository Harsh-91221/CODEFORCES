// Input
// ahhellllloou

// Output
// YES

/*Explanation-> if Vasya types the word "ahhellllloou", it will be considered that he said hello,
and if he types "hlelo", it will be considered that Vasya got misunderstood and he didn't manage to say hello.
Determine whether Vasya managed to say hello by the given word s.*/

#include <iostream>
using namespace std;
int main()
{
    string s = "";
    cin >> s;
    string k = "hello";
    int count = 0, j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == k[j])
        {
            j++;
            count++;
        }
        if (count == 5)
        {
            break;
        }
    }
    if (count == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}