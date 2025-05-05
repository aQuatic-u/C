#include<bits/stdc++.h>
using namespace std;
int answer[1005][1005], n, award[12], temp; // award 表示最终结果 / temp 用来表示该彩票中有多少个数字中
bool prize[38];
int main() {
    cin >> n;
    for (int i = 1; i <= 7; i++){
        cin >> temp;
        prize[temp] = 1; // 此数字的奖为true
    }
    temp = 0;
    for (int i = 1; i <= n; i ++){ // n张彩票
        for (int j = 1; j <= 7; j++){ // j 个奖项
            cin >> answer[i][j];
        }
    }

    for (int i = 1; i <= n; i ++){ // 一张一张彩票
        temp = 0;
        for (int j = 1; j <= 7; j ++){
            if (prize[answer[i][j]])  temp ++;
        }
        if (temp == 1) award[6] ++;
        else if (temp == 2) award[5] ++;
        else if (temp == 3) award[4] ++;
        else if (temp == 4) award[3] ++;
        else if (temp == 5) award[2] ++;
        else if (temp == 6) award[1] ++;
        else if (temp == 7) award[0] ++; // award[0] 表示特等
    }

    for (int i = 0; i <= 6; i ++){
        cout << award[i] << " ";
    }



    return 0;
}