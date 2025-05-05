#include<bits/stdc++.h>
using namespace std;
int a[105], n;
bool x(int y){
    if (y == 1) return false;
    if (y == 2) return true;
    for (int i = 2; i < y; i++){
        if (y % i == 0) return false;
    }
    return true;
}
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for (int i = 1;i <= n; i++){
        if (x(a[i])) cout << a[i] << " ";
    }
    return 0;
}