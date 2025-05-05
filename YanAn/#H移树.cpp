#include<bits/stdc++.h>
using namespace std;
long long s, n, x, y;
int main() {
    cin >> n >> x >> y;
    for (int i = 1;i <= n-1; i++){
        if ((i * x) % y == 0) s++;
    }
    cout << s + 1;

    return 0;
}