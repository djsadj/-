#include <iostream>
using namespace std;

// С�ž�

int main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << "*" << i << "=" << i * j << "\t";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}