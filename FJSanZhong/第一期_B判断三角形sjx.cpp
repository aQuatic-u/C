#include<bits/stdc++.h>
using namespace std;
int a, b = 1;
int main()
{
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        b *= i;
    }
    cout << b;

    return 0;
}