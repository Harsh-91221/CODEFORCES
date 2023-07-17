// Input
// 7
// 100 3 4
// 189 3 4
// 64 2 3
// 63 2 3
// 30 27 7
// 10 9 1
// 69117 21 2

// Output
// YES
// NO
// NO
// YES
// YES
// YES
// YES

/*Explanation-> The dragon has a hit point of x initially. When its hit point goes to 0 or under 0,
it will be defeated. In order to defeat the dragon, Kana can cast the two following types of spells.

Void Absorption
Assume that the dragon's current hit point is h, after casting this spell its hit point will become ⌊h/2⌋+10
Here ⌊h/2⌋ denotes h divided by two, rounded down.

Lightning Strike
This spell will decrease the dragon's hit point by 10. Assume that the dragon's current hit point is h,
after casting this spell its hit point will be lowered to h−10.

Due to some reasons Kana can only cast no more than n
Void Absorptions and m
Lightning Strikes. She can cast the spells in any order and doesn't have to cast all the spells.
Kana isn't good at math, so you are going to help her to find out whether it is possible to defeat the dragon.*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n, m;
        cin >> x >> n >> m;
        bool flag = false;
        while (x > 20 && n > 0)
        {
            x = x / 2 + 10;
            n--;
        }
        while (x > 0 && m > 0)
        {
            x = x - 10;
            m--;
            if (x <= 0)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}