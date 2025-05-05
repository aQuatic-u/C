#include<bits/stdc++.h>
using namespace std;
int n, cute[105], in_their_eyes[105];
int main() {
    cin >> n;
    for (int i = 1;i <= n; i++){
        cin >> cute[i];
    }
    for (int i = 1;i <= n; i++){
        for (int j = 1; j <= i; j++){
            if (cute[j] < cute[i]) in_their_eyes[i]++;
        }
    }

    for (int i = 1;i <= n; i++){
        cout << in_their_eyes[i] << " ";
    }

    return 0;
}