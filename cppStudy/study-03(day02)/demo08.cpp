#include <iostream>
using namespace std;
// ˮ�ɻ���
int main()
{
    int num = 100;
    do
    {

        int one = 0;   // ��λ
        int two = 0;   // ʮλ
        int three = 0; // ��λ
        int result = 0;
        one = num % 10;
        two = num % 100 / 10;
        three = num / 100;
        result = one * one * one + two * two * two + three * three * three;
        if (result == num)
        {
            cout << num << "��ˮ�ɻ��� ";
        }
        num++;
    } while (num < 1000);
    cout << endl;
    system("pause");
    return 0;
}