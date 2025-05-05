//
// Created by aQuat on 2025/2/9.
//
#include "iostream"
#include "stdio.h"
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a > b && b > c)
        cout<<a<<" "<<b<<" "<<c;
    if (a > c && c > b)
        cout<<a<<" "<<c<<" "<<b;
    if (c > a && a > b)
        cout<<c<<" "<<a<<" "<<b;
    if (c > b && b > a)
        cout<<c<<" "<<b<<" "<<a;
    if (b > c && c > a)
        cout<<b<<" "<<c<<" "<<a;
    if (b > a && a > c)
        cout<<b<<" "<<a<<" "<<c;
    if (a > b && b > c)
        cout<<a<<" "<<b<<" "<<c;
    if (a > b && b == c)
        cout<<a<<" "<<b<<" "<<c;
    if (b > a && a == c)
        cout<<b<<" "<<a<<" "<<c;
    if (c > a && a == b)
        cout<<c<<" "<<a<<" "<<b;
    if (a == b == c)
        cout<<c<<" "<<a<<" "<<b;
    if (a < b && b == c)
        cout<<c<<" "<<b<<" "<<a;
    if (b < a && a == c)
        cout<<c<<" "<<a<<" "<<b;
    if (c < a && a == b)
        cout<<b<<" "<<a<<" "<<c;
}