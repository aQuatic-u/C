#include<bits/stdc++.h>
using namespace std;
int n, a, b, sum, tmp, digits;
string old, ans, strsum[55], s[55];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++){
        if (ans == "a" || ans == "b" || ans == "c") old = ans;
        cin >> ans;

        tmp = 0;
        digits = 0;

        if (ans == "a"){
            cin >> a >> b;
            sum = a + b;
            cout << a << "+" << b << "=" << sum << "\n";
            if (a == 0) digits++;
            if (b == 0) digits++;
            if (sum == 0) digits++;
            while (a){
                digits++;
                a/=10;
            }
            while (b){
                digits++;
                b/=10;
            }
            while(sum){
                digits++;
                sum/=10;
            }
            cout << digits + 2 << "\n";
        }

        else if (ans == "b"){
            cin >> a >> b;
            if (a == 0) digits++;
            if (b == 0) digits++;
            sum = a - b;
            cout << a << "-" << b << "=" << sum << "\n";
            if (sum <= 0) digits++;
            while (a){
                digits++;
                a/=10;
            }
            while(b){
                digits++;
                b/=10;
            }
            while(sum){
                digits++;
                sum/=10;
            }
            cout << digits + 2 << "\n";
        }

        else if (ans == "c"){
            cin >> a >> b;
            if (a == 0) digits++;
            if (b == 0) digits++;
            sum = a * b;
            if (sum == 0) digits++;
            cout << a << "*" << b << "=" << sum << "\n";
            while (a){
                digits++;
                a/=10;
            }
            while(b){
                digits++;
                b/=10;
            }
            while(sum){
                digits++;
                sum/=10;
            }
            cout << digits + 2 << "\n";
        }

        else{ // 先将第一个str转成int
            cin >> b;

            for (char c : ans){
                a = a * 10 + int(c - 48);
            }
            if (a == 0) digits++;
            if (b == 0) digits++;
            if (old == "a"){
                sum = a + b;
                if (sum == 0) digits++;
                cout << a << "+" << b << "=" << sum << "\n";
                while (a){
                    digits++;
                    a/=10;
                }
                while(b){
                    digits++;
                    b/=10;
                }
                while(sum){
                    digits++;
                    sum/=10;
                }
                cout << digits + 2 << "\n";
            }
            else if (old == "b"){
                sum = a - b;
                cout << a << "-" << b << "=" << sum << "\n";
                if (sum <= 0) digits++;
                while(a){
                    digits++;
                    a/=10;
                }
                while(b){
                    digits++;
                    b/=10;
                }
                while(sum){
                    digits++;
                    sum/=10;
                }
                cout << digits + 2 << "\n";
            }
            else{
                sum = a * b;
                if (sum == 0) digits++;
                cout << a << "*" << b << "=" << sum << "\n";
                while(a){
                    digits++;
                    a/=10;
                }
                while(b){
                    digits++;
                    b/=10;
                }
                while(sum){
                    digits++;
                    sum/=10;
                }
                cout << digits + 2 << "\n";
            }
        }
    }

    return 0;
}