#include <iostream>

using namespace std;

int main()
{

    int arr[10] = {1, 3, 4, 6, 7, 8, 9, 74, 3, 4};
    cout << "第一个元素是：" << arr[0] << endl;

    int *p = arr;
    /* cout << "第一个元素是：" << *p << endl;
    p++; // 让指针向后偏移4个字节 */
    for (int i = 0; i < 10; i++)
    {
        cout << *p << endl;
        p++;
    }

    system("pause");
    return 0;
}