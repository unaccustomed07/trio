#include <iostream>
using namespace std;

int a, b, c, d;
int x, y, z, f;


class in
{
public:
    inline void max();
    inline void min();
};

void in::max()
{
    cout<<"enter the 1st, 2nd, 3rd number"<<endl;
    cin>>a>>b>>c;
    d = (a>b && a>c)? a :(b>c)? b: c;
    cout<<d<<endl;
}

void in::min()
{
    cout<<"enter the 1st, 2nd, 3rd number"<<endl;
    cin>>x>>y>>z;
    f = (x<y && x<z)?x:(y<z)? y:z;
    cout<<f<<endl;
}



int main()
{
    in fun;

    fun.min();
    fun.max();
   
    return 0;
}
