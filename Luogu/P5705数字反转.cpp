//
// Created by aQuat on 2025/4/2.
//
#include<bits/stdc++.h>
using namespace std;
double x;
int y;
int main()
{
    cin >> x;
    y = floor(x);
    cout << (x - y*1.0) * 10 << "." << y % 10 / 1 << y % 100 / 10 << y / 100;
}