#include <iostream>
using namespace std;
int main(void)
{
    // Your code here!
    int numeros[] = {4,1,2,3,5};
    int i, pos, aux = 0;

    for(i = 0; i<5; i++){
        pos = i;
        aux = numeros[i];

        while((pos>0 && (numeros[pos-1] > aux))){
            numeros[pos] = numeros[pos-1];
            pos--;
        }
        numeros[pos] = aux;
    }

    cout << "Orden ascendente: " << endl;
    for (i = 0; i < 5; i++){
        cout<<numeros[i]<< " ";
    }

    cout << "\nOrden ascendente: " << endl;
    for (i = 4; i >= 0; i--){
        cout << numeros[i] << " ";
    }
}