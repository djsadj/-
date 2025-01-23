/*
 注释和变量的学习

 */

#include <iostream>
using namespace std;

// 1.#define 宏常量
// 2.const  修饰的变量

#define Size 20

// 1.单行注释

/* 2.多行注释 */

int main()
{

    const int month = 12; //常量（不可修改）

    int a = 10;
    cout << a << " " << Size << endl;
    system("pause");
    return 0;
}
