# Apuntadores

**Objetivo**: Que el alumno comprenda el uso de apuntadores en C++, incluyendo su definición, operadores relacionados, y cómo se utilizan en funciones.

## **“¿Qué sucede en memoria cuando declaramos una variable?”**

* Una variable ocupa una posición en memoria.
* Un apuntador es una variable que almacena la dirección de otra variable.

**Ejemplo:**

```C++
int x = 10;
int* ptr = &x; // ptr apunta a x
```

## Definición de apuntador

* Un apuntador es una variable que almacena la dirección de otra variable.
* Se declara con * antes del nombre.

**Ejemplo:**

```C++
int x = 5;
int* p = &x;
```

## Operador de definicion de memoria

* Se usa para obtener la dirección de una variable

**Ejemplo:**

```C++
int x = 10;
int* p = &x;
cout << *p; // Muestra 10
```

## Operador de indireccion de memoria

* Se usa para acceder al valor almacenado en la dirección que apunta el apuntador.

**Ejemplo:**

```C++
int x = 10;
int* p = &x;
cout << *p; // Muestra 10
```

## Operador nullptr / NULL

Representa un apuntador que no apunta a ninguna dirección válida.

**Ejemplo:**

```C++
int* p = nullptr;
if (p == nullptr)
   cout << "Apuntador vacío";
```

## Apuntador de apuntadores

* Un apuntador que almacena la dirección de otro apuntador.

**Ejemplo:**

```C++
int x = 20;
int* p = &x;
int** pp = &p;
cout << **pp; // Muestra 20
```

## Enviar y recibir apuntadores en funciones

### Caso 1: Modificar una variable desde una función

```C++
void modificar(int* p)
{
    *p = 100;
}

int main()
{
    int x = 5;
    modificar(&x);
    cout << x; // Muestra 100
}

```

### Caso 2: Reservar memoria dinámica

```C++
void crear(int** p) {
    *p = new int;
    **p = 50;
}

int main() {
    int* ptr = nullptr;
    crear(&ptr);
    cout << *ptr; // Muestra 50
    delete ptr;
}
```

## Cierre

* ¿Qué ventajas tiene usar apuntadores?
* ¿Qué errores comunes debemos evitar?

### Aplicaciones

* Manejo de arreglos dinámicos: Usar apuntadores para reservar memoria según el tamaño que el usuario indique.
* Intercambio de valores: Usar funciones con apuntadores para intercambiar valores sin necesidad de retorno.

### Actividad

1. Implementar una función que reciba dos apuntadores a int y los intercambie.
