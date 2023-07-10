// Input
// 3
// 1 1
// 2 2
// 3 3

// Output
// 0

/*Explanation-> George and Alex want to live in the same room.
The dormitory has n rooms in total.
At the moment the i-th room has pi people living in it and the room can accommodate qi people in total (pi ≤ qi).
Your task is to count how many rooms has free place for both George and Alex.*/

#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    int p, q;
    while (n--)
    {
        cin >> p >> q;
        if (p + 1 < q)
        {
            count++;
        }
    }
    cout << count;
}