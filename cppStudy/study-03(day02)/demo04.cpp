#include <iostream>
using namespace std;

int main()
{
    // switch语句
    int score = 0;
    cout << "请给电影打分" << endl;
    cin >> score;
    switch (score)
    {
    case 10:
        cout << "分数为：" << score << "非常好" << endl;
        break;
    case 9:
        cout << "分数为：" << score << "非常好" << endl;
        break;
    case 8:
        cout << "分数为：" << score << "还好" << endl;
        break;
    case 7:
        cout << "分数为：" << score << "还好" << endl;
        break;
    case 6:
        cout << "分数为：" << score << "一般" << endl;
        break;
    case 5:
        cout << "分数为：" << score << "一般" << endl;
        break;
    default:
        cout << "分数为：" << score << "烂片" << endl;
        break;
    }

    system("pause");
    return 0;
}