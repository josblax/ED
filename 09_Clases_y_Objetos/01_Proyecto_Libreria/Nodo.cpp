#include <iostream>
#include <string>
using namespace std;
template <typename T>

class Nodo
{
public:
    T dato;
    Nodo* siguiente;

    Nodo(T dato)
    {
        this->dato = dato;
        this->siguiente = NULL;
    }
};
