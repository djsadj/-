#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;
    cout << p << endl;
    cout << sizeof(p) << endl;
    // ָ��ǰ���*����ʾ�����ã��ҵ�ָ����ָ����ڴ�
    int b = *p;
    b = 200;
    cout << "a=" << a << " *p=" << *p << " b=" << b << endl;
    *p = 1000;

    cout << "a=" << a << " *p=" << *p << endl;

    int *h = nullptr;
    system("pause");
    return 0;
}