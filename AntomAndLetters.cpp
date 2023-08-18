// Input
// {a, b, c}

// Output
// 3

/*Explanation-> Recently, Anton has found a set. The set consists of small English letters.
Anton carefully wrote out all the letters from the set in one line, separated by a comma.
He also added an opening curved bracket at the beginning of the line and a closing curved bracket at the end of the line.

Unfortunately, from time to time Anton would forget writing some letter and write it again.
He asks you to count the total number of distinct letters in his set.*/

#include <iostream>
#include <set>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    set<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            st.insert(s[i]);
        }
    }
    cout << st.size();
    return 0;
}