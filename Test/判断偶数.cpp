#include<bits/stdc++.h>
using namespace std;

int main() {
    double a;
    while (cin >> a) {
        if (a / 2 - floor(a / 2) == 0) {
            cout << a << " is an even numb er\n";
        } else {
            cout << a << " is an odd number\n";
        }
    }

    return 0;
}