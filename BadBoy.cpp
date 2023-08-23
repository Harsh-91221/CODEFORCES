// 7
// 2 3 1 1
// 4 4 1 2
// 3 5 2 2
// 5 1 2 1
// 3 1 3 1
// 1 1 1 1
// 1000000000 1000000000 1000000000 50

// Output
// 1 1 2 3
// 1 1 4 4
// 1 1 3 5
// 1 1 5 1
// 1 1 3 1
// 1 1 1 1
// 1 1 1000000000 1000000000

/*Explanation-> Anton's room can be represented as a grid with n rows and m columns.
Let (i,j) denote the cell in row i and column j. Anton is currently standing at position (i,j) in his room.
To annoy Anton, Riley decided to throw exactly two yo-yos in cells of the room (they can be in the same cell).

Because Anton doesn't like yo-yos thrown on the floor, he has to pick up both of them and return back to the initial position.
The distance travelled by Anton is the shortest path that goes through the positions of both yo-yos and
returns back to (i,j) by travelling only to adjacent by side cells.
That is, if he is in cell (x,y) then he can travel to the cells
(x+1,y), (x−1,y), (x,y+1) and (x,y−1) in one step (if a cell with those coordinates exists).

Riley is wondering where he should throw these two yo-yos so that the distance travelled by Anton is maximized.
But because he is very busy, he asked you to tell him.*/
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i, j;
        cin >> n >> m >> i >> j;
        cout << 1 << " " << 1 << " " << n << " " << m << endl;
    }
    return 0;
}