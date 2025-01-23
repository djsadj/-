#include <iostream>
using namespace std;

int main()
{
    double PigOne = 0;
    double PigTwo = 0;
    double PigThree = 0;
    double max = 0; // 最重的小猪
    cout << "请输入三只小猪的体重" << endl;
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
    cout << "最中的小猪体重是：" << max << endl;
    system("pause");
    return 0;
}