#include <iostream>
using namespace std;

int main()
{
    // 1 �������� ������[���鳤��]
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // 2 �������� ������[���鳤��] = {ֵ1,ֵ2 ....};
    int arr1[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // 3 �������� ������[] = {ֵ1,ֵ2 ....};
    int arr3[] = {90, 32, 3, 43, 23, 32, 42, 23};
    cout << "arr3������׵�ַΪ��" << (long long)arr3 << endl;
    cout << "arr3�����е�һ��Ԫ�ص��׵�ַΪ��" << (long long)&arr3[0] << endl;
    cout << "arr3�����еڶ���Ԫ�ص��׵�ַΪ��" << (long long)&arr3[1] << endl;

    // ע�⣺��������һ�����������ɽ��и�ֵ����
    system("pause");
    return 0;
}