#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    srand((unsigned int)time(NULL)); // ����ʵ�������������
    int num = 0;                     // �����
    int guess = 0;
    num = rand() % 100 + 1;
    bool flag = true;
    while (flag)
    {
        cout << "��������Ҫ�µ�����" << endl;
        cin >> guess;
        if (num > guess)
        {
            cout << "���µ�����С��" << endl;
        }
        else if (num < guess)
        {
            cout << "���µ����ִ���" << endl;
        }
        else
        {
            cout << "���¶��ˣ�ϵͳ���ɵ���:" << num << endl;
            flag = false; // �˳�ѭ��
        }
    }

    system("pause");
    return 0;
}