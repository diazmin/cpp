#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(void)
{
    // Your code here!
    int vector[3][3];

    //ingresar los datos
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "\nMatriz[" << i << "][" << j << "]: ";
            cin >> vector[i][j];
        }
    }

    //Mostrando datos
    cout << "Matriz: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << vector[i][j] << " ";
        }

        cout << "\n";
    }

    //Mostrando matriz traspuesta
    cout << "Matriz transpuesta: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << vector[j][i] << " ";
        }

        cout << "\n";
    }
}
