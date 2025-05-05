#include<bits/stdc++.h>
using namespace std;
double n, sum;
int main() {
    cin >> n;
    while (n != 1){
        n = floor(n / 2);
        sum ++;
    }
    cout << sum + 1;
    return 0;
}