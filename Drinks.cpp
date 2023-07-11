// Input
// 3
// 50 50 100

// Output
// 66.6667

/*Explanation-> One day Vasya decided to make himself an orange cocktail.
He took equal proportions of each of the n drinks and mixed them.
Then he wondered, how much orange juice the cocktail has.
Find the volume fraction of orange juice in the final drink.*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    int p[1000];
    float sum = 0.0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        sum = sum + p[i];
    }
    cout << sum / n;
}