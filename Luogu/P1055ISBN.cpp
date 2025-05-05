#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,m;
    string a;
    cin >> x >> y >> z >> a;
    y += 2 * (-y);
    z += 2 * (-z);
    m = x * 1 + y / 100 * 2 + (y % 100 / 10) * 3 + (y%10) * 4 + (z/10000) * 5 + (z%10000 / 1000) * 6 + (z % 1000 / 100) * 7 + (z % 100 / 10) * 8 + (z % 10) * 9;
    m %= 11;
    m -= 2*m;
    if (a == "-X")
    {
        if (m == 10)
            cout<<"Right";
        else
            cout<<x<<"-"<<y<<"-"<<z<<m;
    }
    else // if (a != "-X")
    {
        
        if (a != m)
            cout<<x<<"-"<<y<<"-"<<z<<m;
        else
            cout<<"Right";
    }

    return 0;
}