//
// Created by aQuat on 2025/2/8.
//
#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    // This is the first
    e = e+a/3;
    b = b+a/3;
    a = a/3;

    // Second start
    a = a + b/3;
    c = c + b/3;
    b = b/3;

    // Third here
    b = b + c/3;
    d = d + c/3;
    c = c/3;

    // Fourth
    e = e + d/3;
    c = c + d/3;
    d = d/3;

    // Last
    a = a + e/3;
    d = d + e/3;
    e = e/3;
    // Printf
    printf("%4d %4d %4d %4d %4d",a,b,c,d,e);
}
