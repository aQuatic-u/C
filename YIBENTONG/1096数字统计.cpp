//
// Created by aQuat on 2025/3/31.
//
#include<bits/stdc++.h>
using namespace std;
int L,R,s;
int sum(int x)
{
    int num = 0;
    while (x != 0)
    {
        if (x % 10 == 2) num ++;
        x /= 10;
    }
    return num;
}
int main()
{
    cin>>L>>R;
    for (int i = L; i <= R; i ++)
    {
        s+=sum(i);
    }
    cout<<s;
}