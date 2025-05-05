#include<bits/stdc++.h>
using namespace std;
char s[10005];
long long  t = 1, num, a, b = 1, c, x, y, tmp, z, litt[10005], k; // 0 代表整数 1 代表小数 2 代表分数 3 代表百分数 // b 小数数组中代表小数点的位置

int main() {
    while (cin >> s[t]){
        t++;
    }

    for (int i = 1; i <= t; i++){
        if (s[i] == '.') num = 1;
        else if (s[i] == '/') num = 2;
        else if (s[i] == '%') num = 3;
    }

    if (num == 0){
        for (int i = t; i > 0; i--){

            //cout << i << "\t" << s[i] << "\n";
            if (s[i] - 48 > 0){
                //cout << "into\t" << s[i] - 48 << "\n";
                a = 1LL * a * 10 + (s[i] - 48);
                //cout << i << "\t" << a << "\t" << s[i] << "\n";
            }
            else if (i != t){
                //cout << "x10 \n";
                a = 1LL * a * 10;
            }
        }
        cout << a;
        return 0;
    }

    else if (num == 1){
        while (s[b] != '.'){
            b++;
        }
        for (int i = b - 1; i > 0; i--){
            if (s[i] - 48 > 0){
                //cout << "into\t" << s[i] - 48 << "\n";
                x = x * 10 + (s[i] - 48);
            }
            else if (i != t){
                //cout << "x10 \n";
                x = x * 10 + (s[i] - 48);
            }
        }
        c = 1;
        while (s[b+c] == '0'){
            c++;
        }

        /*cout << "B:" << b << "\n";
        cout << "t:" << t << "\n";
        cout << "c:" << c << "\n";*/

        cout << x << '.';



        for (int i = 1; i < t-b; i++){
            tmp ++;
            litt[tmp] = s[i+b] - 48;
            /*out << "s:"<<s[i+b] << "\n";*/
        }

        for (int i = t-b-1; i > 0; i--){
            if (litt[i]) cout << litt[i] ;
            else if (i > c) cout << litt[i];
        }


        return 0;
    }

    else if (num == 2){
        while (s[b] != '/'){
            b++;
        }
        k = b - 1;
        while (s[k] == '0'){
            k--;
        }
        for (int i = b - 1; i > 0; i--){
            if (s[i] != '0'){
                x = x * 10 + s[i] - 48;
            }
            else if (i < k) x *= 10;
        }

        k = t - 1;
        while (s[k] == '0'){
            k--;
        }

        for (int i = t - 1; i > b; i--){
            if (s[i] != '0'){
                y = y * 10 + s[i] - 48;
            }
            else if (i < k) y *= 10;
        }

        cout << x << "/" << y;

        return 0;
    }

    else{
        for (int i = t - 1; i > 0; i--){
            //cout << i << "\t" << s[i] << "\n";
            if (s[i] - 48 > 0){
                //cout << "into\t" << s[i] - 48 << "\n";
                a = a * 10 + (s[i] - 48);
            }
            else if (i != t){
                //cout << "x10 \n";
                a = a * 10;
            }
        }
        cout << a << "%";
        return 0;
    }

    return 0;
}