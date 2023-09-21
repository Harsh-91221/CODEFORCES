#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        string str = "";
        cin >> str;
        int count = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'B')
            {
                count++;
                i += k - 1;
            }
        }
        cout << count << endl;
    }
    return 0;
}