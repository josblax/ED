# Arbol Binario

## Estructura Nodo para un árbol binario

A diferencia de las listas, un arbol se define por ramas (branches), que serán el punto de unión entre nodos, y específicamente en un árbol binario, se tiene una rama izquierda y una rama derecha.
<p align="center">
<img src="https://courses.cs.washington.edu/courses/cse143/21au/lectures/21/tree.png" alt="Layout app" width="400" height="400">
</p>
fuente imagen: https://courses.cs.washington.edu/courses/cse143/21au/lectures/21

___

## Declaración estructura

```Cplusplus
class Nodo {
    int dato;
    Nodo* izquierdo;
    Nodo* derecho;
    
    Nodo(int dato) {
        this->dato = dato;
        this->izquierdo = NULL;
        this->derecho = NULL;
    }
};

```
___

## Clase Arbol

La clase árbol mantiene las funciones de inserción, recorrido, eliminación y administración del árbol.

## Clase Arbol

```Cplusplus
class Arbol 
{
public:
    Nodo* raiz;
public:
    Arbol() 
    {
        this->raiz = NULL;
    }

// Funciones

};
```

## Función para insertar nodos basado en el valor del Nodo raiz

```Cplusplus
void insertaNodo(int num) 
{
    // crear Nodo con el valor num
    Nodo* nuevoNodo = new Nodo(num);
    if (raiz == NULL) 
    {
        raiz = nuevoNodo;
    }
    else 
    {    
        Nodo* temp = raiz;
        Nodo* padre;
        while (true) 
        {
            padre = temp;
            if (num < temp->dato) 
            {
                temp = temp->izq;
                if (temp == NULL) 
                {
                    padre->izq = nuevoNodo;
                    break;
                }
            }
            else 
            {
                temp = temp->der;
                if (temp == NULL) 
                {
                    padre->der = nuevoNodo;
                    break;
                }
            }
        }
    }
}
```
