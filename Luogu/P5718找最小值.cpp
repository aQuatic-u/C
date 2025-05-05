#include "iostream"
using namespace std;
int main()
{
    int a,b,c,x;
    cin>>a>>b>>c;
    if (b > a)
    {
        x = a;
        a = b;
        b = x;
    }
    if (c > a)
    {
        x = a;
        a = c;
        c = x;
    }
    if (c > b)
    {
        x = b;
        b = c;
        c = x;
    }
    cout<<c<<" "<<b<<" "<<a;
}