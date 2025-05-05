#include<bits/stdc++.h>
using namespace std;
unsigned long long s = 1, n, sum;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            s *= j;
        }
    }
    int a = s;
    while (s != 0){
        if (s % 10 == 0) sum ++;
        s /= 10;
    }
    cout << a << "\n";
    cout << sum;
    return 0;
}