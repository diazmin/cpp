#include<iostream>
using namespace std;

int main()
{
    //Matriz 1
    int matriz[3][2] = {1,2, 3,4, 5,6};

    cout<<"Matriz 1"<<endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout<<"Campo["<<i<<"]["<<j<<"]: "<<matriz[i][j]<<endl;
        }
    }

    //Matriz 2
    int matriz2[3][5] = {1,2,3,4,5, 6,7,8,9,10, 11,12,13,14,15};
    cout<<"Matriz 2"<<endl;
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout<<"Campo["<<i<<"]["<<j<<"]: "<<matriz2[i][j]<<endl;
        }
    }
    return 0;
}