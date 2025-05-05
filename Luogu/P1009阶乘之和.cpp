#include<bits/stdc++.h>
using namespace std;
unsigned long long sum, n, n1 = 1;
int main() {
    // 3 = 1! + 2! + 3!
    // 1 + 1 * 2 + 1 * 2 * 3
    cin >> n;
    for (int i = 1;i <= n; i++){ // 1 // 2 // 3
        for (int j = 1;j <= i; j++){ // 1 // 1 * 2
            n1 *= j; // n1 * 1 // 2 // 6
        }
        sum += n1; // 1 // 2 // //6
        n1 = 1;
    }
    cout << sum;

    return 0;
}