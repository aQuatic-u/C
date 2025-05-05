#include<bits/stdc++.h>
using namespace std;
int n, s, a; // s 表示当前输出到第几个数
int main() {
    cin >> n;
    a = n;
    for (int i = 1;i <= n;i++){
        for (int j = 1; j <= a; j++){
            s++;
            if (s < 10) cout << 0 << s;
            else cout << s;
        }
        a--;
        cout << "\n";
    }
    return 0;
}