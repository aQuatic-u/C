#include<bits/stdc++.h>
using namespace std;

int main() {
    int i;
    cin >> i;
    if (((i / 100) * 10) + ((i % 100) / 10) == (i % 100 / 10) + ((i % 10) * 10)) cout << i;
    return 0;
}