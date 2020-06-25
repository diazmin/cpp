#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(void)
{
    // Your code here!
    int matriz[3][3];
    int matriz2[3][3];
    int matriz3[3][3];

    //ingresar los datos
    cout << "\nMatriz 1: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "\nMatriz1[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nMatriz 2: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "\nMatriz2[" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    //Mostrando datos
    cout << "\nMatriz 1: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nMatriz 2: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz2[i][j] << " ";
        }
        cout << "\n";
    }

    //calculando la suma
    cout << "\nLa suma de matrices es: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz3[i][j] = matriz[i][j] + matriz2[i][j];
            cout << matriz3[i][j] << " ";
        }
        cout << "\n";
    }
}
