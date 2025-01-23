#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = 0;
    temp = *b;
    *b = *a;
    *a = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    swap(&a, &b);

    cout << a << " " << b << endl;
    system("pause");
    return 0;
}