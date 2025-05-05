#include<bits/stdc++.h>
using namespace std;
double l = 2, a, b, sum, foots;
int main() {
    cin >> sum;
    while (sum >= 0){
        sum -= l;
        l *= 0.98;
        foots++;
    }
    cout << foots;

    return 0;
}