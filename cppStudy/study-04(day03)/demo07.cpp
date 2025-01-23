#include <iostream>
using namespace std;

int main()
{
    // ц╟ещеепР
    int arr[10] = {4, 2, 5, 7, 9, 10, 2, 1, 3, 0};
    int temp = 0;
    int lengh = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < lengh - 1; i++)
    {
        for (int j = 0; j < lengh - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int k = 0; k < lengh; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}