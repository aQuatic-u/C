//
// Created by aQuat on 2025/3/9.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double hish,times,h; // 历史高度，次数，高度
    cin>>h;
    times = 1;
    hish = h;
    while (times < 10)
    {
        hish += h;
        times++;
        h/=2;
    }
    h/=2;
    printf("%g\n%g",hish,h);

    return 0;
}