#include<bits/stdc++.h>
using namespace std;
int tmp, a, b, n, s;
int main() {
    cin >> a >> b >> n;
    // 用竖式计算推
    for (int i = 1; i <= n; i++){
        tmp = 0;
        a *= 10;
        for (int i = 1; i <= 9; i++){
            if (i * b <= a) tmp = i;
        }
        a = a - tmp * b;
    }
    cout << tmp;


    return 0;
}