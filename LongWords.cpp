// Input
// 4
// word
// localization
// internationalization
// pneumonoultramicroscopicsilicovolcanoconiosis

// Output
// word
// l10n
// i18n
// p43s

/*Explanation->Let's consider a word too long, if its length is strictly more than 10 characters.
All too long words should be replaced with a special abbreviation.
Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> strings;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        strings.push_back(str);
    }
    for (int i = 0; i < strings.size(); i++)
    {
        if (strings[i].length() <= 10)
        {
            cout << strings[i] << endl;
        }
        else
        {
            cout << strings[i][0] << strings[i].length() - 2 << strings[i][strings[i].length() - 1] << endl;
        }
    }
    return 0;
}