// ConsoleApplication12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
//funcion prototipo
void imprime(vector<int> v);
void cargaValores(vector<int>& v);

int main()
{
    vector<int> v;

    //llenar el vector con 0, cinco veces
    v.assign(5, 0);
    imprime(v);
    cargaValores(v);
    imprime(v);
    
}
void cargaValores(vector<int>& v) 
{
    for (int i = 0; i <= 4; i++) 
    {
        v[i] = i + 1;
    }
}

void imprime(vector<int> v)
{
    for (auto elemento : v)
    {
        cout << elemento << " , ";
    }
    cout << endl;
    system("pause");
    system("cls");
}
