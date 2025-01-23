#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int start = 0;
    int last = 0;
    int temp = 0;
    for (start = 0, last = sizeof(arr) / sizeof(arr[0]) - 1; start < last; start++, last--)
    {
        temp = arr[start];
        arr[start] = arr[last];
        arr[last] = temp;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    system("pause");
    return 0;
}