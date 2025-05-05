#include<bits/stdc++.h>
using namespace std;
int n;
string a;
int main() {
    cin >> n >> a;
    for (char c : a){
        cout << char(c + n);
    }
    return 0;
}