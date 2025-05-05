#include<bits/stdc++.h>
using namespace std;
long long a, n[2000005], s; // maxn 为数组中最大的一个数
bool sum[2000005];
bool x(long long y){
    for (int i = 1; i <= a; i++){
        if (n[i] == y) return true;
    }
    return false;
}
int main() {
    cin >> a;
    for (int p = 1; p <= a; p++){
        cin >> n[p];
/*        if (maxn < n[p]){
            maxn = n[p];
        }*/
    }
    for (int i = 1; i <= a; i++){
        for (int j = i + 1; j <= a; j++){
            if (x(n[i] + n[j])){ // i 和 j 代表索引
                sum[n[i] + n[j]] = true; // 标记为true
            }
        }
    }
    for (int q = 1; q <= 20000; q++){
        if (sum[q]){
            s ++;
        }
    }
    cout << s;


/*    // debug
    cout << "\nDebug:" << "\n";
    for (int i = 1; i <= 2000005; i ++){
        if(sum[i]){
            cout << "True:" << i << "\n";
        }
    }*/
    return 0;
}