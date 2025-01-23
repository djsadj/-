#include <iostream>
using namespace std;
// 水仙花数
int main()
{
    int num = 100;
    do
    {

        int one = 0;   // 个位
        int two = 0;   // 十位
        int three = 0; // 百位
        int result = 0;
        one = num % 10;
        two = num % 100 / 10;
        three = num / 100;
        result = one * one * one + two * two * two + three * three * three;
        if (result == num)
        {
            cout << num << "是水仙花数 ";
        }
        num++;
    } while (num < 1000);
    cout << endl;
    system("pause");
    return 0;
}