#include<bits/stdc++.h>
using namespace std;
int digits, num[105], temp; // temp 用来计算是否为最后一个数字
char ans[105];
int main() {
    /*
    XXX...X.XXX.XXX.X.X.XXX.XXX.XXX.XXX.XXX
    X.X...X...X...X.X.X.X...X.....X.X.X.X.X
    X.X...X.XXX.XXX.XXX.XXX.XXX...X.XXX.XXX
    X.X...X.X.....X...X...X.X.X...X.X.X...X
    XXX...X.XXX.XXX...X.XXX.XXX...X.XXX.XXX
     */
    cin >> digits;
    for (int i = 1; i <= digits; i++){
        cin >> ans[i];
        num[i] = ans[i] - 48;
    }


    for (int i = 1; i <= 5; i ++){ // 一行一行地输出 5 行
        // 从 0 开始
        temp = 0;
        for (int j = 1; j <= digits; j++){ // 遍历每个数字
            temp ++;
            if (num[j] == 0){
                if (i == 1 || i == 5) cout << "XXX";
                else cout << "X.X";
            }
            else if (num[j] == 1){
                cout << "..X";
            }
            else if (num[j] == 2){
                if (i == 1 || i == 3 || i == 5) cout << "XXX";
                else if (i == 2) cout << "..X";
                else cout << "X..";
            }
            else if (num[j] == 3){
                if (i == 1 || i == 3 || i == 5) cout << "XXX";
                else cout << "..X";
            }
            else if (num[j] == 4){
                if (i == 1 || i == 2) cout << "X.X";
                else if (i == 3) cout << "XXX";
                else cout << "..X";
            }
            else if (num[j] == 5){
                if (i == 1 || i == 3 || i == 5) cout << "XXX";
                else if (i == 2) cout << "X..";
                else cout << "..X";
            }
            else if (num[j] == 6){
                if (i == 3 || i == 1 || i == 5) cout << "XXX";
                else if (i == 2) cout << "X..";
                else cout << "X.X";
            }
            else if (num[j] == 7){
                if (i == 1) cout << "XXX";
                else cout << "..X";
            }
            else if (num[j] == 8){
                if (i == 3 || i == 1 || i == 5) cout << "XXX";
                else cout << "X.X";
            }
            else{
                if (i == 3 || i == 1 || i == 5) cout << "XXX";
                else if (i == 2) cout << "X.X";
                else cout << "..X";
            }

            if (temp != digits) cout << ".";
            else cout << "\n";
        }
    }
    return 0;
}