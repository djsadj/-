#include <iostream>
using namespace std;

int main()
{

    // 野指针：指针变量指向非法的内存空间

    // const修饰指针
    int a = 10;
    int b = 10;

    const int *p = &a;
    // 指针指向的值不可以改，指针的指向可以改
    //*p = 20;//错误
    p = &b; // 正确
    //  const 修饰常量
    int *const p2 = &a;
    // 指针的指向不可以改，指针指向的值可以改
    *p2 = 100; // 正确
    // p2 = &b; //错误
    //   const修饰指针和常量
    const int *const p3 = &a;
    // *p3 = 100; // 错误
    // p2 = &b;   // 错误
    system("pause");
    return 0;
}