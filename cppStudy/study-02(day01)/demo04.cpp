#include <iostream>

using namespace std;

int main()
{
    // 1.������ float
    // 2.˫���� double

    float f1 = 3.14f;
    cout << "f1=" << f1 << "\n";
    cout << "floatռ�õ��ڴ�ռ�Ϊ��" << sizeof(f1) << "\n";
    double f2 = 3.1415;
    cout << "f2=" << f2 << "\n";
    cout << "doubleռ�õ��ڴ�ռ�Ϊ��" << sizeof(f2) << "\n";
    // ��ѧ������
    float f3 = 3e2;
    cout << "f3=" << f3 << "\n"; // 3^2
    float f4 = 3e-2;
    cout << "f4=" << f4 << "\n"; // 3^0.1*2
    system("pause");
    return 0;
}