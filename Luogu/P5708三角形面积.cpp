//
// Created by aQuat on 2025/4/2.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,p;
    cin >> a >> b >> c;
    p = 0.5*(a+b+c);
    printf("%.1lf", sqrt(p*(p-a)*(p-b)*(p-c)));
}