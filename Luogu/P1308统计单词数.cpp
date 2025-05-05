#include<bits/stdc++.h>
using namespace std;
string x, y, lower_x, supper_x, all_supper;
int sum, temp, sum_x, z, is_it_first, how_many_text, count_;
int main() {
    cin >> x;
    for (char c : x){
        how_many_text++;
    }
    // 全小写
    for (char c : x){
        if (isupper(c)){
            lower_x += c + 32;
        }
        else
            lower_x += c;
    }
    // 全部大写
    for (char c : x){
        if (islower(c)){
            all_supper += c - 32;
        }
        else
            all_supper += c;
    }
    // 首字大写
    for (char c : x){
        temp ++;

        if (temp == 1){
            if (islower(c)){
                supper_x += c - 32;
            }
            else
                supper_x += c;
        }
        else{
            if (isupper(c)){
                supper_x += c + 32;
            }
            else
                supper_x += c;
        }
    }
    // cout << all_supper << " " << lower_x << " " << supper_x;

    while (cin >> y){
        count_++;
        if (y == supper_x || y == lower_x || y == all_supper){
            sum ++;
            if (is_it_first == 0){
                if (sum_x == 0) z = sum_x;
                else z = sum_x + count_ - 1;
            }
            is_it_first ++;
        }
        for (char c : y){
            sum_x ++;
        }
    }
    if (sum == 0) cout << "-1";
    else cout << sum << " " << z;

    return 0;
}