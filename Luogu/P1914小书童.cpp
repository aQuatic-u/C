#include<bits/stdc++.h>
using namespace std;
int n;
string pwd;
int main() {
    cin >> n >> pwd;
    for (char c : pwd){
        if (int(c+n) > 122){
            cout << char(c+n-26);
        }
        else cout << char(c+n);
    }

    return 0;
}
