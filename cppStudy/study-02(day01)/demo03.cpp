#include <iostream>

using namespace std;

int main()
{

    // ����
    // 1��������(-32768~32767)
    short a = 32767;
    cout << "shortռ�õ����ݿռ�Ϊ��" << sizeof(a) << "\n";
    // 2.����

    int b = 10;
    cout << "intռ�õ����ݿռ�Ϊ��" << sizeof(b) << "\n";
    // 3��������
    long c = 10;
    cout << "longռ�õ����ݿռ�Ϊ��" << sizeof(c) << "\n";
    // 4.��������
    long long d = 20;
    cout << "long longռ�õ����ݿռ�Ϊ��" << sizeof(d) << "\n";
    cout << a << endl;
    //        2     4     4/8   8/16
    // ���ۣ�short<int<=long<=long long
    system("pause");
    return 0;
}