#include <iostream>
#include <cstdint>
using namespace std;

class employee
{
    string name;
    string designation;
    int64_t salary;
    int age;

public:
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

    // cout << "enteer the no. of employee" << endl;
    // cin >> n;

    e1[1].mf(99, "Aditya", "CR", 9801537);
    e1[2].mf(199, "Bardan", "VCR",56768767);
    e1[1].print();
    e1[2].print();

    // for (int i = 0; i < n; i++)
    // {
    //     cout << "enter your name" << endl;
    //     cin >> e1[i].name;
    //     cout << "enter your salary" << endl;
    //     cin >> e1[i].salary;
    //     cout << "enter your age" << endl;
    //     cin >> e1[i].age;
    //     cout << "enter your designation" << endl;
    //     cin >> e1[i].designation;
    //     e1[i].mf(age, name, designation, salary);
    //     // e1[i].print();
    // }

    // for (int i = 0; i < n; i++)
    // {
    //    // // cout << "enter your name";
    //     cout << e1[i].name << endl;
    //     // // cout << "enter your salary";
    //     cout << e1[i].salary << endl;
    //     // // cout << "enter your age";
    //     cout << e1[i].age << endl;
    //     // // cout << "enter your designation";
    //     cout << e1[i].designation << endl;
    //     // e1[i].print();
    // }

    return 0;
}