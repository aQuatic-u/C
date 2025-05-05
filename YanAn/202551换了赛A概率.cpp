#include<bits/stdc++.h>
using namespace std;
double a, b, c, x, s;
int main() {
    cin >> a >> b >> c >> x;

    if (x <= a){
        cout << "1.000000000000";
        return 0;
    }

    else if (x <= b){
        printf("%.12lf",c/(b-a));
        return 0;
    }

    cout << "0.000000000000";

    return 0;
}