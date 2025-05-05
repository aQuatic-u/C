//
// Created by aQuat on 2025/3/1.
//
#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    long int a,b,x = 1,y = 1;
    cin>>a>>b;
    for (int i = 1;i<=b;i++)
    {
        x = x * a;
        if (x >= 7)
        {
            x%=7;
        }
    }
    switch(x)
    {
        case 0:cout<<"Sunday";break;
        case 1:cout<<"Monday";break;
        case 2:cout<<"Tuesday";break;
        case 3:cout<<"Wednesday";break;
        case 4:cout<<"Thursday";break;
        case 5:cout<<"Friday";break;
        case 6:cout<<"Saturday";break;
        case 7:cout<<"Sunday";break;
    }

}