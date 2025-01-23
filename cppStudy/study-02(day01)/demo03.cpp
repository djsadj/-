#include <iostream>

using namespace std;

int main()
{

    // 整形
    // 1、短整型(-32768~32767)
    short a = 32767;
    cout << "short占用的内容空间为：" << sizeof(a) << "\n";
    // 2.整形

    int b = 10;
    cout << "int占用的内容空间为：" << sizeof(b) << "\n";
    // 3、长整型
    long c = 10;
    cout << "long占用的内容空间为：" << sizeof(c) << "\n";
    // 4.长长整形
    long long d = 20;
    cout << "long long占用的内容空间为：" << sizeof(d) << "\n";
    cout << a << endl;
    //        2     4     4/8   8/16
    // 结论：short<int<=long<=long long
    system("pause");
    return 0;
}