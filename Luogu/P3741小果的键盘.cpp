#include<bits/stdc++.h>
using namespace std;
char a[105], ans, os;
int n, cnt;
bool x(char x, char y){

}
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++){
        os = ans;
        cin >> ans;
        a[i] = ans;
        if (os == 'V' && ans == 'K') cnt++;
    }

    for (int i = 1; i <= n; i++){

    }

    cout << cnt;

    return 0;
}