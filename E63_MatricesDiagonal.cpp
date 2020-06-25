#include <iostream>
using namespace std;
int main(void)
{
    // Your code here!
    int vector[3][3] = {1, 2, 3,
                        4, 5, 6,
                        7, 8, 9};
    //Mostrar datos
    cout << "Datos en el vector: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << vector[i][j];
        }
        cout << "\n";
    }

    //Mostrar diagonal
    cout << "Diagonal: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                cout << vector[i][j];
            }
        }
    }
}
