#include<bits/stdc++.h>
using namespace std;
int l, n, tance[1000005], st, ft, tmp;
int main() {
    cin >> l >> n;
    for (int i = 1; i <= n; i++){
        cin >> tance[i];
        // 最慢的时间
        if (l - tance[i] > tance[i]){ // 离右侧距离大于左侧距离 / 得往右边走
            if (l - tance[i] > tmp){
                tmp = l - tance[i];
                st = l - tance[i];
            }
        }
        else {  // 离左侧距离大于右侧距离 / 得往左边走
            if (tance[i] > tmp){
                tmp = tance[i];
                st = tance[i];
            }
        }
    }
    tmp = 0;
    for (int i = 1; i <= n; i++){
        if (l - tance[i] < tance[i]){  // 离右侧距离小于左侧距离 / 得往右边走
            if (l - tance[i] > tmp){
                tmp = l - tance[i];
                ft = l - tance[i];
            }
        }
        else{  // 离左侧距离小于右侧距离 / 得往左边走
            if (tance[i] > tmp){
                tmp = tance[i];
                ft = tance[i];
            }
        }
    }

    cout << ft << " " << st;

    return 0;
}