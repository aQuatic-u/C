#include<bits/stdc++.h>
using namespace std;
long long n, x, y, xx, yy, a , b, aa, bb;
int main() {
    cin >> n;
    cin >> x >> y >> xx >> yy;
    a = max(y,yy);
    b = min(y,yy);
    aa = max(x,xx);
    bb = min(x,xx);
    for (int i = 1; i <= n - 1; i++){
        cin >> x >> y >> xx >> yy;

        a = max(a,y);
        a = max(a,yy);

        b = min(b,yy);
        b = min(b,y);

        aa = max(aa,xx);
        aa = max(aa,x);

        bb = min(bb,x);
        bb = min(bb,xx);

        //cout << b << " " << a <<  "  "<< bb << " " << aa << "\n";
    }

    //cout << b << " " << a <<  "  "<< bb << " " << aa << "\n";

    cout << abs(a-b) * abs(bb-aa);

    return 0;
}