#include "iostream"
using namespace std;
int main()
{
    double a,b;
    char x;
    cin>>a>>b>>x;
    if (x == '+'||x=='-'||x=='*'||x == '/')
    {
        if (x == '+')
            cout<<a+b;
        if (x == '-')
            cout<<a-b;
        if (x== '*')
            cout<<a*b;
        if (x == '/')
        {
            if (b > 0)
                cout<<a/b;
            if (b == 0)
                cout<<"Divided by zero!";
        }
    }
    else
        cout<<"Invalid operator!";
}