# Listas Simplemente Ligadas

## Estructura Nodo

```Cplusplus
class Nodo
{
// Declaración
public:
    int dato;
    Nodo* siguiente;
    Nodo* anterior;
// Constuctor
public:
    Nodo(int dato)
    {
        this->dato = dato;
        this->siguiente = NULL;
        this->anterior = NULL;
    }
};
```

## Lista Ligada Simple LL

