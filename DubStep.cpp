// Input
// WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB

// Output
//  WE ARE  THE CHAMPIONS MY FRIEND

/*Explanation-> a song with words "I AM X" can transform into a dubstep remix as
"WUBWUBIWUBAMWUBWUBX" and cannot transform into "WUBWUBIAMWUBX".

Recently, Petya has heard Vasya's new dubstep track, but since he isn't into modern music,
he decided to find out what was the initial song that Vasya remixed. Help Petya restore the original song.*/

#include <iostream>
using namespace std;
int main()
{
    string s = "";
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            cout << " ";
        }
        else
        {
            cout << s[i];
        }
    }
    return 0;
}