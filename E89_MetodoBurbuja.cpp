/* Método Burbuja
En un arreglo, si el número actual es mayor al número siguiente,
se hace un cambio. Y así hasta que el arreglo quede ordenado.
*/

#include <iostream>
using namespace std;
int main(void)
{
    // Your code here!
    int numeros[] = {4, 1, 2, 3, 5};
    int i, j, aux = 0;

    for (i = 0; i < 5; i++) //Para el numero de veces que se quiere recorrer el arreglo
    {
        for (j = 0; j < 5; j++) //Se encarga de recorrer la lista y ordenarla 1 vez por iteración 
        {
            if (numeros[j] > numeros[j + 1])
            {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }

    cout << "Orden ascendente: " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << numeros[i] << " ";
    }

    cout << "\nOrden ascendente: " << endl;
    for (i = 4; i >= 0; i--)
    {
        cout << numeros[i] << " ";
    }
}
