#include<bits/stdc++.h>
using namespace std;
int n, m, tmp = 1; // tmp表示当前在哪个人
struct people{
    bool a; // 0 表示向圈内     1 表示圈外
    string job;
}s1[100005];
struct cmd {
    bool td; // 朝向 0表示朝左    1 表示向右
    long long cnt; // 第几个人
}c[100005];
int main() {
    cin >> n >> m; // 小人个数和指令的条数
    for (int i = 1; i <= n; i++){
        cin >> s1[i].a >> s1[i].job;
    }

    for (int i = 1; i <= m; i++){
        cin >> c[i].td >> c[i].cnt;
    }

    for (int i = 1; i <= m; i++){
        if (s1[tmp].a){ // 当前数的人往圈内
            if (c[i].td){ // 指令是向右数
                // +

            }
        }
    }

    return 0;
}