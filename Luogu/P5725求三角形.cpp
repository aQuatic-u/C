#include<bits/stdc++.h>
using namespace std;
int ans, num;
int main() {
    cin >> ans;
    // square
    for (int i = 1; i <= ans; i++){
        for (int j = 1; j <= ans; j++){
            num ++;
            if (num < 10) cout << "0" << num;
            else cout << num;
        }
        cout << "\n";
    }
    cout << "\n";

    // triangle
    num = 0;
    // 第n行就是
    // n 个数
    // ans - n 个 空格
    for (int i = 1; i <= ans; i++){
        for (int j = 1; j <= ans - i; j++){
            cout << "  ";
        }
        for (int q = 1; q <= i; q++){
            num ++;
            if (num < 10) cout << "0" << num;
            else cout << num;
        }
        cout << "\n";
    }

    return 0;
}