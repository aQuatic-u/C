#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    float r,h,a;
    cin>>h>>r;
    a = 20000 / (pow(r,2)*3.14*h);
    cout<<ceil(a);

    return 0;
}