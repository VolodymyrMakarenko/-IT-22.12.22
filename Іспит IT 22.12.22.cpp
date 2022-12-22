#include <iostream>
#include <fstream>
using namespace std;

int main()
//Ініціалізація двовимірного масиву
{
    int matrix[3][3] =
    {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 },
    };
    
    
    // Поворот масиву на 90 градусів за годинниковою стрілкою
    int tmp[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tmp[i][j] = matrix[3 - j - 1][i];

    // Відображення масиву
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << tmp[i][j] << ' ';
        cout << endl;
    }
    // Сума діагоналей
    int dsum(matrix[3][3]);
    {
        return matrix[0][0] + matrix[1][1] + matrix[2][2] + matrix[0][2] + matrix[1][1] + matrix[2][0];
    }
   
    
    
}

