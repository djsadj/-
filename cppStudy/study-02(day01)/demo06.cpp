#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1 C�����ַ���
    char str[] = "hello world";

    // 2 C++�����ַ���
    string str2 = "hello world";
    cout << str << endl;
    cout << "C�����ַ���ռ���ڴ棺" << sizeof(str) << endl;
    cout << str2 << endl;
    cout << "C++�����ַ���ռ���ڴ棺" << sizeof(str2) << endl;

    system("pause");
    return 0;
}