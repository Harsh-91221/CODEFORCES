// Input
// 5

// Output
// NO

/*Explanation->Print YES, if the boys can divide the watermelon into two parts,
each of them weighing even number of kilos; and NO in the opposite case.*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n > 2 && n % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}