// Input
// 2
// 10
// 3

// Output
// 60

/*Explanation->  Here are some ways of placing signs and brackets:

1+2*3=7
1*(2+3)=5
1*2*3=6
(1+2)*3=9
given a, b and c print the maximum value that you can get.*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int exp1 = a + b * c;
    int exp2 = a * (b + c);
    int exp3 = a * b * c;
    int exp4 = (a + b) * c;
    int exp5 = a + b + c;
    int ans = max(exp1, max(exp2, max(exp3, max(exp4, exp5))));
    cout << ans;
}