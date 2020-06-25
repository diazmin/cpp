#include <iostream>
using namespace std;
int main(void)
{
    // Your code here!
    int vector[2][2] = {1, 2,
                        4, 7};
    int vector2[2][2];

    //Copiando datos de vector a vector2
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            vector2[i][j] = vector[i][j];
        }
    }

    //Mostrar datos del nuevo vector
    cout << "Datos en el nuevo vector: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << vector2[i][j];
        }
        cout << "\n";
    }
}
