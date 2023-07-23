// Input
// 5
// A
// ABA
// ABA
// A
// A

// Output
// A

/*Explanation-> Then follow n lines — for each goal the names of the teams that scored it.
The names are non-empty lines consisting of uppercase Latin letters whose lengths do not exceed 10 symbols.
It is guaranteed that the match did not end in a tie and the description contains no more than two different teams.*/

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    unordered_map<string, int> mp;
    for (auto it : s)
    {
        mp[it]++;
    }
    string ans = "";
    int maxi = INT_MIN;
    for (auto it : mp)
    {
        if (maxi < it.second)
        {
            maxi = it.second;
            ans = it.first;
        }
    }
    cout << ans;
}