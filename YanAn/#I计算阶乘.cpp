#include<bits/stdc++.h>
using namespace std;
unsigned long long n, sum = 1, a1 = 1, a2 = 1;
int main(){
    cin >> n;
    /*for (int i = 1; i <= n; i ++){
        a1 *= i;
    }
    if (n % 2 != 0){
        for (int i = 1; i <= n; i+=2){
            a2 *= i;
        }
    }
    else if (n == 0){
        a2 = 1;
    }
    else{
        for (int i = 2; i <= n; i+=2){
            a2 *= i;
        }
    }
    cout << 2 * (a1 / a2);*/
    if (n == 0){
        cout << '2';
        return 0;
    }
    else if (n % 2 == 0) {
        for (int i = 1;i < n; i+=2) {
            sum *= i;
        }
    }
    else{
        for (int i = 2;i < n; i+=2){
            sum *= i;
        }
    }
    cout << 2*sum;

    return 0;
}