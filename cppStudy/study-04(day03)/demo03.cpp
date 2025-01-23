#include <iostream>
using namespace std;

int main()
{
    /*
        continue关键字，跳过本次循环，在continue下面的代码均不执行
     */

    // 输出奇数
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}