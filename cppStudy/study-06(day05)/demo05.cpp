#include <iostream>
using namespace std;

// ����
void swap(int *a, int *b)
{
    int temp = 0;
    temp = *b;
    *b = *a;
    *a = temp;
}

// ð������
void BubbleSort(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(&arr[j + 1], &arr[j]);
            }
        }
    }
}
void printArry(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[10] = {5, 23, 6, 32, 2, 1, 43, 65, 78, 34};
    int len = sizeof(arr) / sizeof(arr[0]);
    // ����ǰ
    printArry(arr, len);
    BubbleSort(arr, len);
    // �����
    printArry(arr, len);
    system("pause");
    return 0;
}