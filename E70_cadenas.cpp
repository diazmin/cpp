#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
    // Your code here!
    char palabra[] = "Marcelo";
    char palabra2[] = {'M', 'a', 'r', 'c', 'e', 'l', 'o'};
    char nombre[20];

    cout << palabra << endl;
    cout << palabra2 << endl;

    cout << "Escribe tu nombre: ";
    //gets(nombre);, no respeta el espacio de memoria asignado
    cin.getline(nombre, 20, '\n');

    cout << nombre<<endl;
}
