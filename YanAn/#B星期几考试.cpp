#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;

    // 计算结果并处理
    int result = (x + n) % 7;

    // 如果结果为0，表示星期天，输出7
    if (result == 0) {
        cout << 7;
    } else {
        cout << result;
    }

    return 0;
}
