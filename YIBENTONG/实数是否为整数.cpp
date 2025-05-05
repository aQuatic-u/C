//
// Created by aQuat on 2025/2/12.
//

#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    float x;
    cin>>x;
    if (x - floor(x) != 0)
        cout<<"no";
    else
        cout<<"yes";
}