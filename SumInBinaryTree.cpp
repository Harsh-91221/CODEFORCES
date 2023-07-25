// Input
// 6
// 3
// 10
// 37
// 1
// 10000000000000000
// 15

// Output
// 4
// 18
// 71
// 1
// 19999999999999980
// 26

/*Explanation-> Initially, the tree has only one vertex with the number 1 — the root of the tree.
Then, Vanya adds two children to it, assigning them consecutive numbers — 2 and 3, respectively.
After that, he will add children to the vertices in increasing order of their numbers,
starting from 2, assigning their children the minimum unused indices.
As a result, Vanya will have an infinite tree with the root in the vertex 1,
where each vertex will have exactly two children, and the vertex numbers will be arranged sequentially by layers.*/

#include <iostream>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int ans = 0;
        while (n != 1)
        {
            ans = ans + n;
            n = n / 2;
        }
        cout << ans + 1 << endl;
    }
}