#include<bits/stdc++.h>
using namespace std;
// 暴力枚举
int t, x[100001], digits_sum, tmp_num, tmp;
bool a;
int main() {
    cin >> t;
    for (int i = 1; i <= t; i++){
        cin >> x[i];
    }

    for (int i = 1; i <= t; i++){ // 每个数从1开始执行一个循环
        digits_sum = 0;
        a = 0;
        for (int j = x[i]-45; j <= x[i]; j++){ // 从最大偏差开始开始
            tmp_num = j; // 数位之和
            digits_sum = 0;
            while (tmp_num != 0){
                digits_sum += tmp_num % 10; // 个个数位上的和
                tmp_num /= 10;
            }
            if (j + digits_sum == x[i]){
                tmp = j;
                // cout << "I:" << i <<"\tA:" << j << "\tdigits_sum:" << digits_sum << "\n";
                break;
            }
            tmp = 0;
        }

        cout << tmp << "\n";
    }

    return 0;
}