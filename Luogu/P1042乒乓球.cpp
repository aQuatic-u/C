#include<bits/stdc++.h>
using namespace std;
int n, w, tmp, l, sw, sl;
string a, ans;
int main(){
    while (cin >> ans) a += ans;
    for (char c : a){
        tmp++;
        if (tmp > 11){
            tmp = 0;
            cout << w << ":" << l << "\n";
            l = 0;
            w = 0;
        }
        else if ()
            if (c == 'W'){
                w++;
            }
            else if (c == 'L'){
                l++;
            }

        if (sw + sl < 21){
            if (c == 'W'){
                sw++;
            }
            else if (c == 'L'){
                sl++;
            }
        }
        else{

        }
    }

    return 0;
}