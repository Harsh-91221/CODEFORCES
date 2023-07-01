// Input
// 2 4

// Output
// 4

/*Explanation->You are given a rectangular board of M × N squares.
Also you are given an unlimited number of standard domino pieces of 2 × 1 squares.
You are allowed to rotate the pieces. You are asked to place as many dominoes as possible on the board*/

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << (a * b) / 2;
}