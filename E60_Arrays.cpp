/* Hacer un arreglo de 5 numeros, multiplicarlos por 2
y guardar el producto en un nuevo arreglo
*/

#include<iostream>
using namespace std;

int main()
{
    int numeros[] = {1, 2, 3, 4, 5};
    int producto[5];

    for(int i = 0; i < 5; i++)
    {
        producto[i] = numeros[i] * 2;
        cout << "Nuevo vector[" << i << "]: " << producto[i]<<endl;
    }
    return 0;
}