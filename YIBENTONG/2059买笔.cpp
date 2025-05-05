//
// Created by aQuat on 2025/2/11.
//
#include "iostream"
using namespace std;
int main()
{
    int a = 0; // 6元
    int b = 0; // 5元
    int c = 0; // 4元
    int x;
    cin>>x;
    if (x % 4 == 0)
    {
        c+=x/4;
        x = 0;
    }
    else if (x % 4 == 1)
    {
        c+=x/4-1;
        b+=1;
        x = 0;
    }
    else if (x % 4 == 2)
    {
        c += x / 4 - 1;
        a += 1;
        x = 0;
    }
    cout<<a<<" "<<b<<" "<<c;
}