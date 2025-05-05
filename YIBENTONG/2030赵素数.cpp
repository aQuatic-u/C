//
// Created by aQuat on 2025/3/31.
//
#include<bits/stdc++.h>
using namespace std;
int a,b;
bool f(int x)
{
    if (x == 1) return false;
    if (x == 2) return true;
    for (int i = 2; i < x; i ++)
    {
        if (x % i == 0) return false;
    }
    return true;
}
int main()
{
    cin>>a>>b;
    for (int i = a; i <= b; i++)
    {
        if (f(i)) cout<<i<<"\n";
    }

    return 0;
}