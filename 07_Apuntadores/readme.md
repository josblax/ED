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


### Ejercicios:

1. Implementar una función que reciba dos apuntadores a int y los intercambie.
2. Declara una variable entera y un apuntador que apunte a ella. Muestra el valor de la variable usando el apuntador.
3. Crea una variable float y un apuntador que la apunte. Muestra la dirección y el valor usando el apuntador.
4. Declara una variable char, un apuntador a char, y muestra el carácter usando el apuntador.
5. Declara una variable int y muestra su dirección de memoria usando &.
6. Crea dos variables double y guarda sus direcciones en dos apuntadores. Muestra ambas direcciones.
7. Declara una variable bool y usa & para asignar su dirección a un apuntador. Muestra la dirección en pantalla.
8. Declara una variable int, un apuntador a int, y muestra el valor usando *.
9. Modifica el valor de una variable usando su apuntador y el operador *.
10. Crea una variable float, apunta a ella, y muestra el valor con *. Luego cambia el valor desde el apuntador.
11. Declara un apuntador a int y asígnale nullptr. Verifica si está vacío antes de usarlo.
12. Crea una función que reciba un apuntador. Si el apuntador es nullptr, muestra un mensaje de error.
13. Declara un apuntador a char, asígnale nullptr, y luego asígnale la dirección de una variable válida.
14. Declara una variable int, un apuntador a int, y un apuntador al apuntador. Muestra el valor usando **.
15. Modifica el valor de una variable usando un apuntador de apuntador.
16. Crea una función que reciba un apuntador de apuntador y cambie el valor de la variable original.


## Caso 1: Modificar una variable desde una función

17. Crea una función que reciba un apuntador a int y le asigne el valor 100.
18. Implementa una función que reciba un apuntador a float y lo multiplique por 3.14.
19. Diseña una función que reciba un apuntador a bool y lo cambie de true a false.

## Caso 2: Reservar memoria dinámica
20. Crea una función que reciba un apuntador doble (int**) y reserve memoria con new.
21. Implementa una función que reciba un apuntador doble a char y le asigne una letra.
22. Diseña una función que reciba un apuntador doble a float, reserve memoria y asigne un valor decimal.

