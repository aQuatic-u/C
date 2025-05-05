#include<bits/stdc++.h>
using namespace std;
int num, mark[8][1005], sub_script, sum[1005], temp;
string name[1005];
int main() {
    cin >> num;
    for (int i = 1;i <= num; i++){
        cin >> name[i];
        for (int j = 1; j <= 3; j++){
            cin >> mark[j][i];
        }
    }

    for (int i = 1; i <= num; i++){ // 统计总分
        for (int j = 1; j <= 3; j ++){
            sum[i] += mark[j][i];
        }
    }

    for (int i = 1; i <= num; i++){
        if (temp < sum[i]){
            temp = sum[i];
            sub_script = i; // 下标
        }
    }

    /*cout << string(name[sub_script]) << " ";*/

    for (char c : name[sub_script]){
        if (c != char(32)) cout << c;
    }
    cout << " ";
    for (int i = 1; i <= 3; i++){
        cout << mark[i][sub_script] << " ";
    }


    return 0;
}