// Input
// 6
// baabbb

// Output
// bab

/*Explanation->  if s="bab" the process is: "b" → "baa" → "baabbb". So the encrypted s="bab" is "baabbb".
Given string t — the result of encryption of some string s. Your task is to decrypt it, i. e. find the string s.*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s = "";
    cin >> s;
    int len = 1;
    int i = 0;
    string res = "";
    while (i < n)
    {
        res.push_back(s[i]);
        i += (len++); // 1+2+3+4 JUMP
    }
    cout << res;
    return 0;
}