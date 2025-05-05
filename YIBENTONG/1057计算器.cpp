//
// Created by aQuat on 2025/2/11.
//
#include "iostream"
using namespace std;
int main()
{
    double a,b;
    char x;
    cin>>a>>b>>x;
    switch(x)
    {
        case ('+'):cout<<a+b;
            break;
        case ('-'):cout<<a-b;
            break;
        case ('*'):cout<<a*b;
            break;
        case ('/'):
        {
            if (b != 0)
                cout<<a/b;
            else
                cout<<"Divided by zero!";
            break;
        }

        default:
            cout<<"Invalid operator!";
            break;
    }

}