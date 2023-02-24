// WAP to illustrate the use of scope resolution operator. Display the various values of the same variables declared at different scope levels.

// Scope resolution operator in C++ · 1) To access a global variable when there is a local variable with same name:
#include <iostream>
using namespace std;

class vr
{
public:
    int v = 999;
    int print();
};

int vr::print()
{
    int v = 555;
    cout << v << endl;
}

int v = 888;

int main()
{
    int v = 777;
    vr v2;

    cout << v2.v << endl;
    v2.print();
    cout << ::v << endl;
    cout << v << endl;

    return 0;
}
