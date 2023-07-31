// Input
// 4
// Icosahedron
// Cube
// Tetrahedron
// Dodecahedron

// Output
// 42

/*Explanation-> Anton's favourite geometric figures are regular polyhedrons. Note that there are five kinds of regular polyhedrons:

Tetrahedron. Tetrahedron has 4 triangular faces.
Cube. Cube has 6 square faces.
Octahedron. Octahedron has 8 triangular faces.
Dodecahedron. Dodecahedron has 12 pentagonal faces.
Icosahedron. Icosahedron has 20 triangular faces.
Anton has a collection of n polyhedrons.

One day he decided to know, how many faces his polyhedrons have in total. Help Anton and find this number!*/

#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int sum = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "Tetrahedron")
        {
            sum += 4;
        }
        if (s == "Cube")
        {
            sum += 6;
        }
        if (s == "Octahedron")
        {
            sum += 8;
        }
        if (s == "Dodecahedron")
        {
            sum += 12;
        }
        if (s == "Icosahedron")
        {
            sum += 20;
        }
    }
    cout << sum;
    return 0;
}