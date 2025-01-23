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
    cout << "最重的小猪为：" << max << endl;
    system("pause");
    return 0;
}