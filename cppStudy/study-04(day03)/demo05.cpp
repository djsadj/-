#include <iostream>
using namespace std;

int main()
{
    int pigWeight[5] = {100, 200, 300, 400, 500};
    int max = pigWeight[0];
    for (int i = 0; i < sizeof(pigWeight) / sizeof(pigWeight[0]); i++)
    {
        if (max < pigWeight[i])
        {
            max = pigWeight[i];
        }
    }
    cout << "���ص�С��Ϊ��" << max << endl;
    system("pause");
    return 0;
}