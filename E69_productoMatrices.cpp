#include <iostream>
using namespace std;
int main(void)
{
    // Your code here!
    int matriz[3][3] = {0, 7, 6, 3, 7, 5, 8, 9, 2};
    int matriz2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    //Mostrando datos
    cout << "Matriz 1 " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << " ";
        }

        cout << "\n";
    }

    cout << "Matriz 2 " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz2[i][j] << " ";
        }

        cout << "\n";
    }

    //Mostrando resultado del producto de ambas matrices
    cout << "Resultado " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] * matriz2[i][j] << " ";
        }

        cout << "\n";
    }
}
