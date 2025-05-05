#include<bits/stdc++.h>
using namespace std;

int money, mom_money, cost;

int main() {
    for (int i = 1; i <= 12; i++) {
        money += 300;
        cin >> cost;
        money -= cost;
        if (money < 0) {
            cout << "-" << i;
            return 0;
        }
        int save = (money / 100) * 100;
        mom_money += save;
        money -= save;
    }
    cout << mom_money * 1.2 + money;
    return 0;
}