#include <iostream>
using namespace std;
int main(void)
{
    // Your code here!
    int m, n = 0;
    int matriz [m][n];
    int bandera = 0;

    cout << "Filas(m): ";
    cin >> m;
    cout << "Columnas(n): ";
    cin >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "\nMatriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    if (m == n)
    {
        for (int i = 0; i < m; i++)
        {

            for (int j = 0; j < n; j++)
            {
                bandera = 0;
                if (matriz[i][j] == matriz[j][i])
                {
                    bandera = 1;
                }
            }
        }
    }
    if (bandera == 1)
    {
        cout << "\nLa matriz es simetrica"<<endl;
    }
    else
    {
        cout << "\nNo es una matriz simetrica"<<endl;
    }
}
