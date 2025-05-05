//
// Created by aQuat on 2025/4/3.
//
#include<bits/stdc++.h>
using namespace std;
int a,b,x,y,z;
int main()
{
    cin >> a >> b;
    cin >> x >> y >> z;
    z++; // 明天
    if (z > b) // 跨月
    {
        while (z > b)
        {
            z -= b;
            y ++;
        }
    }
    if (y > a)
    {
        while (y > a) // 减到上线为止
        {
            y -= a;
            x ++ ;
        }
    }
    cout<<x<<" "<<y<<" "<<z;

    return 0;
}