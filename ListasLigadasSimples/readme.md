# Listas Simplemente Ligadas

Una Lista Ligada Simple es una secuencia de items (desde datos simples hasta estructuras complejas) unidos uno a otro. La estructura base para guardar información se denomina **Nodo** que contiene la información y un apuntador al siguiente **Nodo**, este apuntador al primer **Nodo** se denomina _head_ o _cabecera_ que siempre nos indicara el inicio de la lista, dentro de la estructura apuntará a la dirección donde se encuentra el siguiente **Nodo** o apuntará a **NULL**

## Estructura Nodo

```Cplusplus
class Nodo
{
// Declaración
public:
    int dato;
    Nodo* siguiente;
// Constuctor
public:
    Nodo(int dato)
    {
        this->dato = dato;
        this->siguiente = NULL;
    }
};
```

## Lista Ligada Simple LL

