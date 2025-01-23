#include <iostream>
using namespace std;

int main()
{
    // 逻辑运算符 非
    int a = 10;
    int b = 10;
    // 在C++中除了0都为真
    cout << !a << endl;
    cout << (a && b) << endl; 
    cout << (a || b) << endl;
    system("pause");
    return 0;
}