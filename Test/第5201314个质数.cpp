#include<bits/stdc++.h>
using namespace std;
bool x(int y){
    if (y == 1) return false;
    if (y == 2) return true;
    for (int i = 2; i < y; i++){
        if (y % i == 0) return false;
    }
    return true;
}
int times, a;
int main() {
    while (times < pow(2280.6389456,2)){
        a ++;
        if (x(a)) cout << a << "\n";
        times ++;
    }
    return 0;
}