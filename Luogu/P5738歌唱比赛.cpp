#include<bits/stdc++.h>
using namespace std;
int n, sum[105], score[25][105], temp_max, temp_min = 11, num;
double temp, m;
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++){ // 同学
        for (int j = 1; j <= m; j++){ // 评委
            cin >> score[j][i]; // x y
        }
    }

    /*// 先定最高分和最低分
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
           if (temp_min > score[j][i]){
               temp_min = score[j][i];
               sub_min = j; // 保存下标索引
           }
           if (temp_max < score[j][i]){
               temp_max = score[j][i];
               sub_max = j;
           }
        }
        score[i][temp_max] = 0;
        score[i][temp_min] = 0; // 将最大和最小归零
    }*/

    for (int i = 1; i <= n; i++){ // 接下来统计总分
        for (int j = 1; j <= m; j++){
            sum[i] += score[j][i];
        }
    }

    for (int i = 1; i <= n; i++){
        if (temp < sum[i]){
            temp = sum[i];
            num = i;
        }
    } // temp 就是最大

    for (int i = 1; i <= m; i++){
        if (score[i][num] < temp_min) temp_min = score[i][num];
        if (score[i][num] > temp_max) temp_max = score[i][num];
    }

    printf("%.2lf",(temp - temp_max - temp_min) / (m-2));

    /*cout << "\ndebug :\n";
    cout << "The highest score: "<< temp - temp_min - temp_max << "\n";

    for (int i = 1; i <= n; i++){
        cout << sum[i] << " ";
    }
    cout << "\nSubscript: " << num;
    cout << "\nMin:" << temp_min;
    cout << "\nMax:" << temp_max;
*/
    return 0;
}