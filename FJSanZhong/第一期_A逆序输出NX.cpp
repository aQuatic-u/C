#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a != 0)
    {
        cout << a % 10;
        a /= 10;
    }

    return 0;
}