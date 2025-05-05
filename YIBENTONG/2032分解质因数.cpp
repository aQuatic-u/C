//
// Created by aQuat on 2025/3/31.
//
#include<bits/stdc++.h>
using namespace std;
int L,sum,all,last; // L 表示正整数 sum 表示个数 all 表示总和 last 表示最后一个素数
bool s(int x)
{
    if (x == 2) return true;
    for (int i = 2; i < x; i ++)
    {
        if (x % i == 0) return false;
    }
    return true;
}

int main()
{
    cin>>L;
    for (int i = 2; i <= L; i ++)
    {
        if (all + i <= L)
        {
            if (s(i))
            {
                last = i;
                all += i;
                sum++;
                cout<<i<<"\n";
            }
        }
    }

    cout<<sum;

    return 0;
}