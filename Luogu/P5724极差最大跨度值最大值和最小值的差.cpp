#include<bits/stdc++.h>
using namespace std;
int maxn, minn = 1001, a, ans;
int main() {
    cin >> a;
    for (int i = 1;i <= a; i++){
        cin >> ans;
        if (ans < minn) minn = ans;
        if (ans > maxn) maxn = ans;
    }
    cout << maxn - minn;

    return 0;
}