//
// Created by aQuat on 2025/4/3.
//
#include<bits/stdc++.h>
using namespace std;
long long n,k,s,sum; // s 次数 奇数为先手 偶数为NO sum 表示总值
int main()
{
    cin>>n>>k;
    while (sum + k <= n)
    {
        sum += k;
        s ++;
    }
    if (s % 2 == 0) cout<<"No";
    else cout<<"Yes";

    return 0;
}
