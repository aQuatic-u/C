#include<bits/stdc++.h>
using namespace std;
int a, b, num[15], temp;
int main() {
    cin >> a >> b;
    for (int i = a; i <= b; i++){
        temp = i;
        while (temp != 0){
            num[temp % 10]++;
            temp /= 10;
        }
    }

    for (int i = 0; i <= 9; i++){
        cout << num[i] << " ";
    }


    return 0;
}