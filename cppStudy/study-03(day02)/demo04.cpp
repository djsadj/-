#include <iostream>
using namespace std;

int main()
{
    // switch���
    int score = 0;
    cout << "�����Ӱ���" << endl;
    cin >> score;
    switch (score)
    {
    case 10:
        cout << "����Ϊ��" << score << "�ǳ���" << endl;
        break;
    case 9:
        cout << "����Ϊ��" << score << "�ǳ���" << endl;
        break;
    case 8:
        cout << "����Ϊ��" << score << "����" << endl;
        break;
    case 7:
        cout << "����Ϊ��" << score << "����" << endl;
        break;
    case 6:
        cout << "����Ϊ��" << score << "һ��" << endl;
        break;
    case 5:
        cout << "����Ϊ��" << score << "һ��" << endl;
        break;
    default:
        cout << "����Ϊ��" << score << "��Ƭ" << endl;
        break;
    }

    system("pause");
    return 0;
}