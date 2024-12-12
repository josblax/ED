# Arbol Binario

## Estructura Nodo para un árbol binario

A diferencia de las listas, un arbol se define por ramas (branches), que serán el punto de unión entre nodos, y específicamente en un árbol binario, se tiene una rama izquierda y una rama derecha.
<p align="center">
<img src="https://courses.cs.washington.edu/courses/cse143/21au/lectures/21/tree.png" alt="Layout app">
</p>
fuente imagen: https://courses.cs.washington.edu/courses/cse143/21au/lectures/21

```Cplusplus
class Nodo {
    int dato;
    Nodo* izquierdo;
    Nodo* derecho;
    
    Nodo(int dato) {
        this.dato = dato;
        this.izquierdo = NULL;
        this.derecho = NULL;
    }
};

```
