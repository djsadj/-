#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1 C风格的字符串
    char str[] = "hello world";

    // 2 C++风格的字符串
    string str2 = "hello world";
    cout << str << endl;
    cout << "C风格的字符串占用内存：" << sizeof(str) << endl;
    cout << str2 << endl;
    cout << "C++风格的字符串占用内存：" << sizeof(str2) << endl;

    system("pause");
    return 0;
}