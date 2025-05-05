#include<bits/stdc++.h>
using namespace std;
bool box[1005][1005][1005];
long long q, range[1005][1005], w, x, h,temp__, temp_1_1, temp_2_2, temp, temp_1, temp_2, sum;
int main()
{
    cin >> w >> x >> h; // y x z
    for (int i = 1; i <= w; i++){
        for (int j = 1; j <= x; j++){
            for (int p = 1; p <= h; p++){
                box[j][p][i] = true;
            }
        }
    }

    cin >> q;
    for (int i = 1; i <= q;i ++){
        for (int j = 1; j <= 6; j++){
            cin >> range[j][i];
        }
    }

    for (int i = 1; i <= q; i++){
        temp = range[1][i]; // x
        temp_1 = range[2][i]; // y
        temp_2 = range[3][i]; // z
        temp__ = range[4][i]; // x1
        temp_1_1 = range[5][i]; // y1
        temp_2_2 = range[6][i]; // z1
        for (int j = temp_1; j <= temp_1_1; j++){ // y
            for (int p = temp; p <= temp__; p++){ // x
                for (int q = temp_2; q <= temp_2_2; q++){ // z
                    box[p][j][q] = false;
                }
            }
        }
    }

    for (int i = 1; i <= w; i++){
        for (int j = 1; j <= x; j++){
            for (int p = 1; p <= h; p++){
                if (box[j][p][i]) sum++;
            }
        }
    }

    cout << sum;

    return 0;
}