//
// Created by aQuat on 2025/1/26.
//
#include <iostream>
using namespace std;
int main()
{
    int z,v,x,a,y,b;
    float h;
    cin>>x>>a>>y>>b;
    v = x*a-y*b;
    z=a-b;
    h = v/z;
    printf("%.2f",h);
}