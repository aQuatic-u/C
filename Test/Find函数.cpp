#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[5] = {5, 3, 2, 1, 4};
    string b[5] = {"nihao", "haode", "shide", "ok", "hehe"};

    // 正确获取字符串指针
    string* q = find(b, b + 5, "123");

    // 计算在b数组中的位置
    int r = q - b;

    // 输出结果
    if (q != b + 5) { // 确保找到元素
        cout << "position in b: " << r << endl;
        cout << "a[" << r << "] = " << a[r] << endl; // 关联到a数组
        cout << "string value: " << *q << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}