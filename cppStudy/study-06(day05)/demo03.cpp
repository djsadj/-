#include <iostream>

using namespace std;

int main()
{

    int arr[10] = {1, 3, 4, 6, 7, 8, 9, 74, 3, 4};
    cout << "��һ��Ԫ���ǣ�" << arr[0] << endl;

    int *p = arr;
    /* cout << "��һ��Ԫ���ǣ�" << *p << endl;
    p++; // ��ָ�����ƫ��4���ֽ� */
    for (int i = 0; i < 10; i++)
    {
        cout << *p << endl;
        p++;
    }

    system("pause");
    return 0;
}