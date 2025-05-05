//
// Created by aQuat on 2025/4/3.
//
#include<bits/stdc++.h>
using namespace std; // 试试数组
int num[11], temp; // 把三个数再顶一个整数类型，表示他们的对应颜色编号
bool s(int x, int y) // 判断相差1,2,3,4的数字是否相等,是就输出false
{ // y 为数组的索引
    // 通过y得知判断的是哪个变量
    if (num[y] == num[y-1] || num[y] == num[y-2] || num[y] == num[y-3] || num[y] == num[y-4] || num[y] == num[y+1] || num[y] == num[y+2] || num[y] == num[y+3] || num[y] == num[y+4])
    {
        return false;
    }
    return true;
}
int main()
{
    memset(num, -1, sizeof(num));
    for (int i = 1; i <= 6; i ++)
    {
        cin >> temp;
        num[i] = temp;
    }
    if (s(num[1],1) || s(num[2],2) || s(num[3],3) || s(num[4],4) || s(num[5],5) || s(num[6],6))
    {
        cout << '1';
    }
    else
        cout<< '2';


    return 0;
}