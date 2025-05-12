#include<bits/stdc++.h>
using namespace std;
char ans;
int digits[30], maxn;
int main() {
    while (cin >> ans){
        if (ans >= 65 && ans <= 90){
            digits[int(ans)-64]++;
            maxn = max(digits[int(ans)-64], maxn);
        }
    }

    for (int i = 0; i < maxn; i++){ // 行
        for (int j = 1; j <= 26; j++){
            if (digits[j] >= maxn-i) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }

    cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";

    return 0;
}