#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, tmp = 0;
    cin >> n;
    while(n){
        tmp++;
        n/=10;
    }
    cout << tmp;
    return 0;
}