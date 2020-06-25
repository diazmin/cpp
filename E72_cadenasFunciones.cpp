#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
    // Your code here!
    char palabra[20];
    char palabra2[20];
    int longitud = 0;

    cout << "Escribe una palabra: ";
    cin.getline(palabra, 20, '\n');
    cout << "Escribe otra palabra: ";
    cin.getline(palabra2, 20, '\n');

    //strlen para calcular la longitud de un arreglo
    longitud = strlen(palabra);
    cout <<"La palabra 1 mide: "<< longitud<<endl;

    //Copiar una cadena en otra cadena
    strcpy(palabra2, palabra); //Copia lo que hay en palabra a palabra2
    cout << "Palabra 2 ahora dice: " << palabra2<<endl;

    //Comparar cadenas, si son iguales:
    if (strcmp(palabra, palabra2) == 0)
    {
        cout << "Ambas cadenas son iguales" << endl;
    }
    else
    {
        cout << "Ambas cadenas son diferentes" << endl;
    }

    //Comparar cadenas, su posición alfabeéticamente :
    char word[] = "cielo";
    char word2[] = "sol";

    if (strcmp(word, word2) > 0) //Si palabra es mayor a palabra2
    {
        cout << word << " esta despues alfabeticamente" << endl;
    }
    else
    {
        cout << word2 << " esta despues alfabeticamente" << endl;
    }

    //Concatenar cadenas
    char cad1[] = "hola";
    char cad2[] = " muchacho";

    strcat(cad1, cad2); //Junta lo de cad1 + cad2 en cad1
    cout << cad1 << endl;

    //Invertir caracteres
    // strrev(cad2);
    // cout<< "Alreves dice: "<<cad2 << endl;
           
}
