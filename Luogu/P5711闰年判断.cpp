#include "iostream"
using namespace std;
int main()
{
    // 400 3200 & 172800
    int a;
    cin>>a;
    if (a % 4 == 0 && a % 100 != 0)
    {
        cout<<"1";
    }
    else if (a % 400 == 0)
    {
        cout<<"1";
    }
    else if (a % 3200 == 0 && a % 172800 == 0)
    {
        cout<<"1";
    }
    else
    {
        cout<<"0";
    }
}