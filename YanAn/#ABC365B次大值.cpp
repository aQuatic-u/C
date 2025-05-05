//
// Created by aQuat on 2025/3/9.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,x,max,mini,second,se_y,y,fi_y; // y表示Ax,x表示输入 se_y表示次大值的序列
    cin>>a;
    max = 0;
    mini = 1001;
    y = 1;
    second = max;
    se_y = -1;
    for (int i = 1;i <= a;i++)
    {
        cin>>x;
        y++;
        if (x < mini){
            mini = x;
        }
        if (max < x)
        {
            se_y = fi_y;
            fi_y = y;
            second = max;
            max = x;
        }
    }
    cout<<second;
}