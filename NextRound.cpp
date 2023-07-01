// Input
// 8 5
// 10 9 8 7 7 7 5 5

// Output
// 6

/*Explanation->"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round,
as long as the contestant earns a positive score..." — an excerpt from contest rules.
A total of n participants took part in the contest (n ≥ k), and you already know their scores.
Calculate how many participants will advance to the next round.*/

#include <iostream>
using namespace std;
int main()
{
    int n, k;
    int count = 0;
    int num[100];
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> num[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (num[i] >= num[k] && num[i] > 0)
        {
            count++;
        }
    }
    cout << count;
}