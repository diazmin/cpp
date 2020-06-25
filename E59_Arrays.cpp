/* Define 2 vectores y copias sus valores a un nuevo vector en orden
*/
#include<iostream>
using namespace std;

int main()
{
    char vector1[5] = {'a', 'b', 'c', 'd', 'e'};
    char vector2[5] = {'A', 'B', 'C', 'D', 'E'};
    char vector3[10] = "";
    int i, j;

    for(i = 0; i < 5; i++)
    {
        vector3[i] = vector1[i];
        cout<<"Vector["<<i<<"]: "<<vector3[i]<<endl;         
    }
    i = 0;
    for(j = 5; j < 10; j++)
    {
        vector3[j] = vector2[i];
        i++;
        cout<<"Vector["<<j<<"]: "<<vector3[j]<<endl;
    }

    
}