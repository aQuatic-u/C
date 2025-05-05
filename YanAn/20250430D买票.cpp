#include<bits/stdc++.h>
using namespace std;
int tmp, n, a, into[105], finish_times[105];
int main() {
    cin >> n >> a;
    for (int i = 1; i <= n; i++){
        cin >> into[i];
    }

    for (int i = 1; i <= n; i++){
        if (i == 1){
            cout << into[i] + a << "\n";
            finish_times[i] = into[i] + a; // 记录完成时间
        }
        else if (into[i] < finish_times[i - 1]){ // 如果进入的时间在完成时间前
            cout << finish_times[i - 1] + a  << "\n";
            finish_times[i] = finish_times[i - 1] + a; // 记录完成时间
        }
        else{
            cout << into[i] + a << "\n" ; // 直接写入
            finish_times[i] = into[i] + a;
        }
    }


    /*for (int i = 1; i <= n; i++){
        // into[i] 作为上一个下标
        for (int j = 1; j <= a; j++){ // 间隔
            if (times[into[i] + j]){ // 当j=1的时候，就是下一个下标
                cout << into[i] + j << " is true\n";
                cout << into[i] + a << " was changed\n";
                times[into[i] + j] = 0;
                times[into[i] + a] = 1;
            }
        }
    }
    for (int i = 0; i <= into[n] + a; i++){
        if (times[i]) cout << i + 4 << "\n";
    }*/

    return 0;
}