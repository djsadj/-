#include <iostream>
using namespace std;

int main()
{
    // 加减乘除
    int a1 = 10;
    int b1 = 3;

    cout << a1 + b1 << endl;
    cout << a1 - b1 << endl;
    cout << a1 * b1 << endl;
    cout << a1 / b1 << endl; // 会把小数部分去除

    cout << a1 % b1 << endl; // 取模运算就是求余数

    // 取模运算两个小数是不可以的

    // int a3 = 10;
    // int a4 = 0;
    // cout << a3 / a4 << endl;

    // 前置和后置的区别
    // 前置递增 先让变量+1 然后进行表达式运算
    // 后置递增 先进行表达式运算，后让变量+1
    system("pause");
    return 0;
}