#include <iostream>
using namespace std;

int main()
{

    int a, b, c, d, f, arr[1000];
    a = 0;
    b = 1;

    c = a + b;

    cout << "Enter the term till where you want to print \t";
    cin >> d;

    cout << "0 \n 1\n 1\n";

    for (int i = 1; i < d; i++)
    {

        a = b;
        b = c;     // pervious term
        c = a + b; // next term
        cout << c << endl;

        f = c - b;
        if (f > 1)
        {

            for (int j = 0, i = b + 1; i < c && j < f; i++, j++)
            {

                arr[j + f] = i;
            }
        }
    }
    cout << "missing numbers \n";
    for (int i = 2; i < b; i++)
    {
        cout << arr[i] << "   ";
    }
}