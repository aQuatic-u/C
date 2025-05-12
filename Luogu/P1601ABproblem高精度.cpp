#include<bits/stdc++.h>
using namespace std;
int a[505], b[505], sum[505], tmp;
string s1, s2;
int main() {
    cin >> s1 >> s2;
    tmp = s1.size();
    for (char c : s1){
        a[tmp] = c-'0';
        tmp--;
    }
    tmp = s2.size();
    for (char c : s2){
        b[tmp] = c-'0';
        tmp--;
    }

    tmp = 0;
    for (int i = 1; i <= max(s1.size(), s2.size()); i++){
        sum[i] = a[i] + b[i] + tmp;


        /*if (i == 3){
            cout << tmp;
        }*/


        if (sum[i] >= 10){
            tmp=1;
            sum[i] %= 10;
        }
        else tmp = 0;
    }

    if (tmp != 0) cout << tmp;

    for (int i = max(s1.size(), s2.size()); i > 0; i--){
        //cout << sum[i] << "\t" << i << "\n";
        cout << sum[i];
    }


    return 0;
}