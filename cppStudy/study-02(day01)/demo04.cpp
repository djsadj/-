#include <iostream>

using namespace std;

int main()
{
    // 1.单精度 float
    // 2.双精度 double

    float f1 = 3.14f;
    cout << "f1=" << f1 << "\n";
    cout << "float占用的内存空间为：" << sizeof(f1) << "\n";
    double f2 = 3.1415;
    cout << "f2=" << f2 << "\n";
    cout << "double占用的内存空间为：" << sizeof(f2) << "\n";
    // 科学计数法
    float f3 = 3e2;
    cout << "f3=" << f3 << "\n"; // 3^2
    float f4 = 3e-2;
    cout << "f4=" << f4 << "\n"; // 3^0.1*2
    system("pause");
    return 0;
}