#include<bits/stdc++.h>
using namespace std;
int n, mark[1005][1005], sum[1005], temp, s; // temp 用来计算俩位同学的三科成绩相差是否不大于5
/*bool x(int y[], int p, int q){
    for ()
}*/
int main() {
    cin >> n;
    for (int i = 1;i <= n; i++){ // n位学生
        for (int j = 1;j <= 3; j++){ // 输入3个学科
            cin >> mark[i][j];
            sum[i] += mark[i][j];
        }
    }

    for (int i = 1; i <= n; i++){ // 一个学生向后遍历一次
        for (int j = i + 1;j <= n; j++) { // 往这位学生后面遍历
            temp = 0;
            if (abs(sum[i] - sum[j]) <= 10) { // 总分差不大于10
                // cout << "has entered" << "\n";
                for (int q = 1; q <= 3; q++) { // 遍历俩位同学的三科成绩
                    if (abs(mark[i][q] - mark[j][q]) <= 5) temp++;
                }
            }
            if (temp == 3) s++;
        }
    }
    cout << s;

    return 0;
}