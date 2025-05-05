#include<bits/stdc++.h>
using namespace std;
double a, mark[1005], maxn, minn = 11, sum, num;
bool maxn_chance, minn_chance;
int main() {
    cin >> a;
    for (int i = 1;i <= a; i++){
        cin >> mark[i];
        if (maxn < mark[i]) maxn = mark[i];
        if (minn > mark[i]) minn = mark[i];
        num++;
    }
    for (int i = 1;i <= a; i++){
        // if (mark[i] != maxn || mark[i] != minn) sum += mark[i];
        // else num--;
        if (mark[i] == maxn){
            if (maxn_chance) sum += mark[i];
            else{
                num--;
                maxn_chance = 1;
            }
        }
        else if (mark[i] == minn){
            if (minn_chance) sum += mark[i];
            else{
                num--;
                minn_chance = 1;
            }
        }
        else sum += mark[i];
    }
    printf("%.2lf",sum / num);
    return 0;
}