#include <iostream>
#include <cstdint>
using namespace std;

class employee
{
public:
    string name;
    string designation;
    int64_t salary;
    int age;

    void mf(int a, string n, string d, int64_t s)
    {

        name = n;
        age = a;
        salary = s;
        designation = d;
    }

    void print()
    {
        cout << name << endl;
        cout << designation << endl;
        cout << age << endl;
        cout << salary << endl;
    }
};

int main()
{
    string name;
    string designation;
    int64_t salary;
    int age;
    int n;
    employee e1[10];

    cout << "enteer the no. of employee" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "enter your name" << endl;
        cin >> name;
        cout << "enter your salary" << endl;
        cin >> salary;
        cout << "enter your age" << endl;
        cin >> age;
        cout << "enter your designation" << endl;
        cin >> designation;
        e1[i].mf(age, name, designation, salary);
    }

    for (int i = 0; i < n; i++)
    {
        e1[i].print();
       
    }

    return 0;
}