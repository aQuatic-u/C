#include<bits/stdc++.h>
using namespace std;
int t;
struct bot{
    long long n;
    long long m;
    long long k;
    long long s; // sum
    long long x;
    long long y;
    long long d;
    long long xx;
    long long yy;
    char map[1005][1005];
    bool wrong[1005][1005];
}s[10];
int main(){
    cin >> t;
    for (int i = 1; i <= t; i++){
        cin >> s[i].n >> s[i].m >> s[i].k;
        cin >> s[i].x >> s[i].y >> s[i].d;
        for (int j = 1; j <= s[i].n; j++){
            for (int p = 1; p <= s[i].m; p++){
                cin >> s[i].map[p][j];
            }
        }
    }

    for (int i = 1; i <= t; i++){
        while (s[i].k){
            if (s[i].d == 0){
                s[i].xx = s[i].x;
                s[i].yy = s[i].y + 1;
            }
            else if (s[i].d == 1){
                s[i].xx = s[i].x + 1;
                s[i].yy = s[i].y;
            }
            else if (s[i].d == 2){
                s[i].xx = s[i].x;
                s[i].yy = s[i].y - 1;
            }
            else if (s[i].d == 3){
                s[i].xx = s[i].x - 1;
                s[i].yy = s[i].y;
            }


            if (1 <= s[i].xx && s[i].xx <= s[i].n && 1 <= s[i].yy && s[i].yy <= s[i].m){
                /*cout << "it's into\n";*/
                if (s[i].map[s[i].yy][s[i].xx] != 'x'){
                    //debug
                    /*cout << "\ni:" << i << "\n";
                    cout << "x':" << s[i].xx << "\ty':" << s[i].yy;
                    cout << "\nx:" << s[i].x << "\ty:" << s[i].y;
                    cout << "\nd:" << s[i].d << "\n";
                    cout << "\ns:" << s[i].s << "\n";*/

                    s[i].x = s[i].xx;
                    s[i].y = s[i].yy;

                    /*cout << "i:" << i << "\ts++\n";*/

                    s[i].k--;
                    if (s[i].wrong[s[i].yy][s[i].xx] == 0){
                        s[i].s++;
                        s[i].wrong[s[i].yy][s[i].xx] = 1;
                    }
                }
                else{
                    s[i].d = (s[i].d+1)%4;
                    s[i].k--;

                    /*cout << "\nturned d:" << s[i].d << "\n";
                    cout << "s:" << s[i].s << "\n";*/
                }
            }
            else{
                s[i].d = (s[i].d+1)%4;
                s[i].k--;

                /*cout << "\nturned d:" << s[i].d << "\n";
                cout << "s:" << s[i].s << "\n";*/
            }


        }
    }

    for (int i = 1; i <= t; i++){
        cout << s[i].s + 1 << "\n";
    }


    return 0;
}