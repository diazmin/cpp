#include <iostream>
//#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(void)
{
    // Your code here!
    int m, n, dato = 0;
    int vector[m][n];
    int vector2[m][n];

    cout << "filas(m): ";
    cin >> m;
    cout << "columnas(n): ";
    cin >> n;

    srand(time(NULL)); //genera numeros aleatorios

    //Rellenando el vector de numeros aleatorios
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dato = 1 + rand() % (100); //Numeros aleatorios entre 1 - 100
            vector[i][j] = dato;
        }
    }

    //Copiando datos de vector a vector2
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            vector2[i][j] = vector[i][j];
        }
    }

    //Mostrando datos del vector2
    cout << "Vector nuevo:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << vector2[i][j]<<" ";
        }

        cout << "\n";
    }
}
