//
// Created by aQuat on 2025/3/8.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,x2,x3,y1,y2,y3,p,s,a,b,c;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    a = sqrt((pow(x2-x1,2)+pow(y1-y2,2)));
    b = sqrt((pow(x1-x3,2)+pow(y3-y1,2)));
    c = sqrt((pow(x3-x2,2)+pow(y3-y2,2)));
    p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.2lf",s);
}