# Modificadores

* assign() – Asigna un nuevo valor a los elementos vectoriales reemplazando los antiguos.
* push_back() – Inserta los elementos en un vector desde la parte posterior.
* pop_back() – Se utiliza para eliminar elementos de un vector desde la parte posterior.
* insert() – Inserta nuevos elementos antes del elemento en la posición especificada.
* erase() – Se utiliza para eliminar elementos de un contenedor de la posición o rango especificado.
* swap() – Se utiliza para intercambiar el contenido de un vector con otro vector del mismo tipo. Los tamaños pueden diferir.
* clear() – Se utiliza para eliminar todos los elementos del contenedor vectorial.
* emplace() – It extends the container by inserting new element at position.
* emplace_back() – Se utiliza para insertar un nuevo elemento en el contenedor de vectores, el nuevo elemento se agrega al final del vector.

// ConsoleApplication12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

Ejemplos:

```C++
#include <iostream>
#include <vector>
using namespace std;

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

int main()
{
    vector<int> v;

    //llenar el vector con 0, cinco veces
    v.assign(5, 0);
    imprime(v);


    // inserta 15 en la ultima posicion
    v.push_back(15);
    imprime(v);

    // quita el ultimo elemnto 
    v.pop_back();
    imprime(v);

    // inserta al principio 5 en el vector
    v.insert(v.begin(), 5);
    imprime(v);
    // borra el primer elemento del vector
    v.erase(v.begin());
    imprime(v);

    // emplace() inserta 25 al principio
    v.emplace(v.begin(), 25);
    imprime(v);

    // emplace_back() inserta 20 al final
    v.emplace_back(20);

    // borrar completamente el vector
    v.clear();
    imprime(v);

    // swap entre dos vectores
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    v1.swap(v2);
    imprime(v1);
    imprime(v2);
}
```
