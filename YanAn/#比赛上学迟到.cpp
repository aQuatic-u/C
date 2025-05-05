//
// Created by aQuat on 2025/3/15.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double times,s,v,SH = 0,H = 7,SM = 5,M = 0;
    cin>>s>>v;
    times = ceil(s/v);

    while (times != 0)
    {
        M--;
        times--;
        if (M < 0) // 进一变9
        {
            SM--; // 十位退一
            M = 9; // 个位重置
        }
        if (SM < 0) // 小时后退
        {
            H--;
            SM = 5;
        }
        if (H < 0) // 减十位
        {
            SH--;
            H = 9;
        }
        if (SH < 0) // 重置为 上一天 23:59
        {
            SH = 2;
            H = 3;
            SM = 5;
            M = 9;
        }
    }
    cout<<SH<<H<<":"<<SM<<M;

    return 0;
}