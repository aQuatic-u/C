#include<bits/stdc++.h>
using namespace std;
int main()
{
    char vip;
    bool gift = false;
    double money;
    cin>>vip>>money;
    if (vip == 'V')
    {
        if (money <= 500)
            money*=0.85;
        else if (money > 500 && money <= 1000)
            money*=0.8;
        else if (money > 1000)
        {
            gift = true;
            money*=0.75;
        }
    }
    else
    {
        if (money <= 500)
            money*=0.9;
        else if (money > 500)
        {
            money*=0.9;
            gift = true;
        }

    }

    if (gift == true)
    {
        cout<<"YES\n";
        printf("%.2f",money);
    }
    else
    {
        cout<<"NO\n";
        printf("%.2f",money);
    }


    return 0;
}