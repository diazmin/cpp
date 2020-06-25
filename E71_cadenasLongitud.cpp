#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
    // Your code here!
    char palabra[20];
    int longitud = 0;

    cout << "Escribe una palabra: ";
    cin.getline(palabra, 20, '\n');

    longitud = strlen(palabra);
    if (longitud <= 10)
    {
        cout << "Tu palabra es: " << palabra << endl;
    }
    else
    {
        cout << "Es mayor a 10 caracteres, no juegas." << endl;
    }
}
