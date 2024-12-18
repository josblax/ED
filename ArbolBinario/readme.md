# Arbol Binario

## Clase Nodo

### Estructura Nodo para un árbol binario

A diferencia de las listas, un arbol se define por ramas (branches), que serán el punto de unión entre nodos, y específicamente en un árbol binario, se tiene una rama izquierda y una rama derecha.
<p align="center">
<img src="https://courses.cs.washington.edu/courses/cse143/21au/lectures/21/tree.png" alt="Layout app" width="200" height="200">
</p>
fuente imagen: https://courses.cs.washington.edu/courses/cse143/21au/lectures/21

___

### Declaración de la estructura Nodo

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

La clase árbol mantiene las funciones de inserción, recorrido, eliminación y administración del árbol. Su estructura inicial constituye un apuntador de tipo Nodo que apunta a Nulo. A partir de ahí se guardarán los valores iniciando con la raíz.

### Decclaración de la Clase Arbol y sus funciones

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

### Función para insertar nodos basado en el valor del Nodo raiz

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

### Funciones para recorrido de Arboles

Los árboles se pueden recorrer de tres maneras:

> En Orden. Se recorre el árbol de izquierda a derecha.

```Cplusplus
void enOrden(Nodo* temp) 
{
    if (temp == NULL) 
    {
        return;
    }
    if (temp != NULL) 
    {
        enOrden(temp->izq);
        cout << temp->dato << " , ";
        enOrden(temp->der);
    }
}
```

> PreOrder. Visita primero el Nodo raíz, después la parte izquierda y por último la parte derecha.

```Cplusplus
void preOrden(Nodo* temp)
{
    if (temp == NULL)
    {
        return;
    }
    cout << temp->dato << " ";
    preOrden(temp->izq);
    preOrden(temp->der);

}
```

> PostOrden. Visita primero el la rama izquierda del árbol, después la rama derecha y por último la raíz

```Cplusplus
void postOrden(Nodo* temp)
{
    if (temp == NULL)
    {
        return;
    }
    postOrden(temp->izq);
    postOrden(temp->der);
    cout << temp->dato << " ";
}
```
