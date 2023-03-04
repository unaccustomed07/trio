#include <iostream>
using namespace std;

class complex
{
    int real = 0;
    float imaginary = 0;

public:
    static int static_member;
    void re()
    {
        cout<<"enter the real number";
        cin >> real;
        
    }

    void im()
    {
        cout<<"enter the imaginary number";
        cin >> imaginary;

    }

    void addr(complex r1, complex i1)
    {
        int ad = r1.real + i1.real;
        float img = r1.imaginary + i1.imaginary;
        cout<<"Complex numer is :: "<<ad<<"+"<<"i"<<img<<endl;

    }

    complex()
    {
        static_member++;
    }

    // void  display(complex d1,complex d2)
    // {
    //     cout<<d1.addr.ad<<"+"<<"i"<<d2.addr.img;

    // }
};

int complex::static_member=0;
main()
{
    complex c1, c2,c3;
    c1.re();
    c1.im();
    c2.re();
    c2.im();
    c3.addr(c1,c2);
    cout<<"No. of object created : "<<complex::static_member;
    // c3.display(c1, c2);

    return 0;
}