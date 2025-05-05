#include<bits/stdc++.h>
using namespace std;
int n, num[21], digital[21][21], tmp, tmptmp, sq[21], maxn, m, k, b = 1; // digital 每一行代表不同数位 // sq 表示顺序，为数组的下标索引
string s[21];
bool a;
int main() {
    cin >> n;
    tmptmp = n;
    for (int i = 1; i <= n; i++){
        cin >> s[i];
    }

    for (int i = 1; i <= n; i++){
        for (char c : s[i]){
            num[i] = num[i]*10 + int(c - 48);
        }
    }
    // 挨个浏览数字的同数位
    for (int i = 1; i <= n; i++){ // 循环n次，排序
        for (int j = 1; j <= n; j++){ // 找出最大的数
            tmp = 0;
            for (char c : s[j]){
                tmp++;
                digital[j][tmp] = c - 48;
            }
        }


        while (tmptmp != 0){ // 每次标好一个索引，tmp--
            k++; // 表示sq数组的第几个下标
            maxn = 0;
            for (int i = 1; i <= n; i++){ // 遍历digital数组
                if (maxn < digital[1][i]) maxn = digital[1][i];
            }
            tmp = 0;
            for (int j = 1;j <= n; j++){
                if (digital[1][i] == maxn){
                    tmp ++;
                    m = i;
                }
            }

            if (tmp == 1){
                sq[k] = m;
                tmptmp--;
            }
            else{
                b = 1;
                while (tmp != 1){
                    maxn = 0;
                    b++;
                    tmp = 0;
                    for (int j = 1;j <= n; j++){ // 找到最大值
                        if (maxn < digital[b][j]){
                            maxn = digital[b][j];
                            m = j;
                        }
                    }
                    for (int i = 1; i <= n; i++){ // 统计tmp
                        if (maxn == digital[b][i]) tmp++;
                    }
                }
                sq[k] = m;
                tmptmp--;
            }
        }
    }

    for (int i = 1; i <= n; i++){
        cout << sq[i] << " ";
    }

    /*for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= n; j++){
            cout << digital[j][i] << " ";
        }
        cout << "\n";
    }*/


    return 0;
}