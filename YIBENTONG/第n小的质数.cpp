#include<bits/stdc++.h>
using namespace std;
int n,m;
bool p(int q) // 判断是否为质数
{
    if (q == 1) return false;
    for (int i = 2; i <= sqrt(q) ; i ++)
    {
        if (q % i == 0) return false;
    }
    return true;
}
int main()
{
    cin>>n;
    while (n != 0)
    {
        m ++;
        if (p(m))
        {
            n --;
        }
    }
    cout<<m;

    return 0;
}