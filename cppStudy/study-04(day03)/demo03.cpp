#include <iostream>
using namespace std;

int main()
{
    /*
        continue�ؼ��֣���������ѭ������continue����Ĵ������ִ��
     */

    // �������
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}