#include <iostream>
using namespace std;

int main()
{
    double PigOne = 0;
    double PigTwo = 0;
    double PigThree = 0;
    double max = 0; // ���ص�С��
    cout << "��������ֻС�������" << endl;
    cin >> PigOne >> PigTwo >> PigThree;
    max = PigOne;
    if (max < PigTwo)
    {
        max = PigTwo;
        if (max < PigThree)
        {
            max = PigThree;
        }
    }
    else
    {
        if (max < PigThree)
        {
            max = PigThree;
        }
    }
    cout << "���е�С�������ǣ�" << max << endl;
    system("pause");
    return 0;
}