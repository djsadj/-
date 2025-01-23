#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;
    cout << p << endl;
    cout << sizeof(p) << endl;
    // 指针前面加*，表示解引用，找到指针所指向的内存
    int b = *p;
    b = 200;
    cout << "a=" << a << " *p=" << *p << " b=" << b << endl;
    *p = 1000;

    cout << "a=" << a << " *p=" << *p << endl;

    int *h = nullptr;
    system("pause");
    return 0;
}