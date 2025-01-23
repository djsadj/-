#include <iostream>
using namespace std;

int main()
{
    // 1 数据类型 数组名[数组长度]
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // 2 数组类型 数组名[数组长度] = {值1,值2 ....};
    int arr1[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // 3 数组类型 数组名[] = {值1,值2 ....};
    int arr3[] = {90, 32, 3, 43, 23, 32, 42, 23};
    cout << "arr3数组的首地址为：" << (long long)arr3 << endl;
    cout << "arr3数组中第一个元素的首地址为：" << (long long)&arr3[0] << endl;
    cout << "arr3数组中第二个元素的首地址为：" << (long long)&arr3[1] << endl;

    // 注意：数组名是一个常量，不可进行赋值操作
    system("pause");
    return 0;
}