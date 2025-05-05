#include<bits/stdc++.h>
using namespace std;
string ans;
int main() {
    cin >> ans;
    for (char c : ans){
        if (islower(c)) cout << char(c - 32);
        else cout << c;
    }

    return 0;
}