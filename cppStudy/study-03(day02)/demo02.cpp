#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    cout << "请输入分数:" << endl;
    cin >> score;
    if (score > 500)
    {
        cout << "恭喜啊！！一本大学等着你" << endl;
    }
    else
    {
        cout << "不好意思，分数不太够，去上大专吧！！" << endl;
    }
    system("pause");
    return 0;
}