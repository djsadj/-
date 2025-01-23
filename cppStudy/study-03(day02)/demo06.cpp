#include <iostream>
#include <ctime>
using namespace std;

int main()
{

    srand((unsigned int)time(NULL)); // 真正实现生成随机数字
    int num = 0;                     // 随机数
    int guess = 0;
    num = rand() % 100 + 1;
    bool flag = true;
    while (flag)
    {
        cout << "请输入你要猜的数字" << endl;
        cin >> guess;
        if (num > guess)
        {
            cout << "您猜的数字小了" << endl;
        }
        else if (num < guess)
        {
            cout << "您猜的数字大了" << endl;
        }
        else
        {
            cout << "您猜对了，系统生成的是:" << num << endl;
            flag = false; // 退出循环
        }
    }

    system("pause");
    return 0;
}