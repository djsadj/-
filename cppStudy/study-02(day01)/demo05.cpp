#include <iostream>

using namespace std;

int main()
{
    char ch = 'a';
    int size = sizeof(ch);
    cout << "Char占用的内存空间为：" << size << endl;

    cout << (int)ch << endl;  // a对应的ASCII
    cout << (int)'A' << endl; // A对应的ASCII
    // 注意：创建字符型变量时，要用单引号
    system("pause");
    return 0;
}