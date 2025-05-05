#include<bits/stdc++.h>
using namespace std;
int n;
string ans;
int main() {
    getline(cin, ans);
    for (char c : ans){
        if (c == ' ') n++;
        else if (c == 'a' || c == 'd' || c == 'g' || c == 'j' || c == 'm' ||c == 'p' ||c == 'w' ||c == 't') n++;
        else if (c == 'x' || c == 'u' || c == 'q' || c == 'n' || c == 'k' ||c == 'h' ||c == 'e' ||c == 'b') n += 2;
        else if (c == 'y' || c == 'v' || c == 'r' || c == 'o' || c == 'l' ||c == 'i' ||c == 'f' ||c == 'c') n += 3;
        else n += 4;
    }
    cout << n;

    return 0;
}