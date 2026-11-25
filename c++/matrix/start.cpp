#include <iostream>
using namespace std;

int main()
{

    int matrix[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}};

    int matrix1[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}};

    int sum[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = matrix[i][j] + matrix1[i][j];
            cout << endl;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << sum[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}