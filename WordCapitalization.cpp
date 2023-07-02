// input
// konjac

// output
// Konjac

/*Explanation->Capitalization is writing a word with its first letter as a capital letter.
Your task is to capitalize the given word.*/

#include <iostream>
using namespace std;
int main()
{
    char ch[1000];
    cin >> ch;
    if (ch[0] >= 'a' && ch[0] <= 'z')
    {
        ch[0] -= 32;
    }
    cout << ch << endl;
}