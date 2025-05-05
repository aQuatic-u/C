//
// Created by aQuat on 2025/3/22.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char a1,b2,c3;
    cin>>a>>b>>c>>a1>>b2>>c3;
    if (b > a && b > c) // 取最大值
    {
        swap(c,b);
    }
    else if (a > b && a > c) // a 为最大
    {
        swap(a,c);
    }
    if (a > b) // 保证 b 大
    {
        swap(b,a);
    }

    // cout<<"a,b,c ="<<a<<b<<c<<"\n";

    if (int(a1) == 65 && int(b2) == 66 && int (c3) == 67) // a b c
    {
        cout<<a<<" "<<b<<" "<<c;
    }
    else if (int(a1) == 65 && int(b2) == 67 && int (c3) == 66) // a c b
    {
        cout<<a<<" "<<c<<" "<<b;
    }
    else if (int(a1) == 66 && int(b2) == 67 && int (c3) == 65) // b c a
    {
        cout<<b<<" "<<c<<" "<<a;
    }
    else if (int(a1) == 66 && int(b2) == 65 && int (c3) == 67) // b a c
    {
        cout<<b<<" "<<a<<" "<<c;
    }
    else if (int(a1) == 67 && int(b2) == 65 && int (c3) == 66) // c a b
    {
        cout<<c<<" "<<a<<" "<<b;
    }
    else if (int(a1) == 67 && int(b2) == 66 && int (c3) == 65) // c b a
    {
        cout<<c<<" "<<b<<" "<<a;
    }

    return 0;
}