#include <iostream>
using namespace std;

int main()
{

    // 布尔类型
    bool a = true;
    cout << "true = " << a << endl;
    cout << "bool(true)占用内存空间：" << sizeof(a) << endl;
    bool b = false;
    cout << "false = " << b << endl;
    cout << "bool(true)占用内存空间：" << sizeof(b) << endl;
    system("pause");
    return 0;
}