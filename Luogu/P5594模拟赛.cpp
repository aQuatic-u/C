#include<bits/stdc++.h>
using namespace std;
long long n, m, k, s[105], days; // s 表示要多少场比赛
bool every_day[105][105];
long long uim[105][105];
bool x(int y, int z, int a){
    y--;
    while (y != 0){
        if (every_day[y][z] && uim[y][z] == a) return true;
        y--;
    }
    return false; // s+1
}
int main() {
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){ // j 会有代表这是第几套卷子
            cin >> days;
            every_day[i][days] = 1; // 把这一天的这一套卷子改为true，然后最后来统计每一天有多少个true决定数量
            uim[i][days] = j;
        }
    }
    for (int i = 1; i <= n; i++) {
        // i 行
        for (int j = 1; j <= k; j++) {
            // j 列
            if (every_day[i][j]) {
                // s[j]++;t
                if (x(i, j, uim[i][j]) == false) s[j]++;
            }
        }
    }
    for (int q = 1; q <= k; q++){
        cout << s[q] << " ";
    }
    return 0;
}