#include <iostream>

using namespace std;

int main()
{
    char ch = 'a';
    int size = sizeof(ch);
    cout << "Charռ�õ��ڴ�ռ�Ϊ��" << size << endl;

    cout << (int)ch << endl;  // a��Ӧ��ASCII
    cout << (int)'A' << endl; // A��Ӧ��ASCII
    // ע�⣺�����ַ��ͱ���ʱ��Ҫ�õ�����
    system("pause");
    return 0;
}