#include <iostream>
#include <cstdint>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, f = 0, arr[100];
    int64_t n, o;
    cout << "enter the number\n";
    cin >> n;
    o = n;
    cout << "Original number is = " << n << endl;

    while (n > 0)
    {
        r = n % 10;
    
        n = n / 10;
        f = f + 1;
    }

    cout << f << endl;
    
    for (int i = f - 1; i <= 0; i--)
    {
        r = o%10;
        arr[i] = r;
        o = o/10;
    }
    

    // swap(arr[0], arr[f - 1]);

    for (int i = 0; i <= f - 1; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}