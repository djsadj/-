#include <iostream>
#include "swap.h"
using namespace std;

/* void swap(int a, int b);

void swap(int a, int b)
{

    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
} */

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    system("pause");
    return 0;
}