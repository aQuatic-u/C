#include<bits/stdc++.h>
using namespace std;
struct team{
    int a;
    int b;
    int c;
    int s;
    bool x;
}s[1005];
int n;
int main() {

    n++;
    while(cin >> s[n].a >> s[n].b >> s[n].c){
        n++;
    }
    n--;

    for (int i = 1; i <= n; i++){
        s[i].s = 10;
        while(s[i].x != 1){ // 直到完成
            if (s[i].s % 3 == s[i].a && s[i].s % 5 == s[i].b && s[i].s % 7 == s[i].c){
                s[i].x = 1;
            }
            else s[i].s ++;
        }
    }

    for (int i = 1; i <= n; i++){
        if (s[i].s >= 10 && s[i].s <= 100){
            cout << "Case " << i << ": " << s[i].s << "\n";
        }
        else cout << "Case " << i << ": No answer.\n";
    }


    return 0;
}