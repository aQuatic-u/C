#include<bits/stdc++.h>
using namespace std;
bool pd(int y){
    if (y == 1) return false;
    if (y == 2) return true;
    for (int i = 2; i <= sqrt(y); i++){
        if (y % i == 0) return false;
    }
    return true;
}
int n;
int main() {
    cin >> n;
    for (int i = 4; i <= n; i+=2){
        for (int j = 2; j < i; j++){
            if (pd(j) && pd(i-j)){
                cout << i << "=" << j << "+" << i-j << "\n";
                break;
            }
        }
    }

    return 0;
}