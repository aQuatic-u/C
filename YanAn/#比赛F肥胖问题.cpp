//
// Created by aQuat on 2025/3/15.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double m,h,BMI;
    cin>>m>>h;
    BMI = m/pow(h,2);
    if (BMI < 18.5)
        cout<<"Underweight";
    else if (BMI >= 18.5 && BMI < 24)
        cout<<"Normal";
    else if (BMI >= 24)
    {
        cout<<setprecision(6)<<BMI<<"\nOverweight";
    }

    return 0;
}