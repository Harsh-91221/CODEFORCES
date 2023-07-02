// input
// 3+2+1

// output
// 1+2+3

/*Explanation->calculate a sum only if the summands follow in non-decreasing order.
For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.*/

#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i += 2)
    {
        for (int j = 0; j < s.size() - 1; j += 2)
        {
            if (s[j] > s[j + 2])
            {
                swap(s[j], s[j + 2]);
            }
        }
    }
    cout << s << endl;
}