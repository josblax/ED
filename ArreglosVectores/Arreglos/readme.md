# Arreglos 1 dimensionesión

Las arreglos y vectores son estructuras de datos que contienen más de un elemento. Tipos de estructuras:

Built-in arrays. Arreglos tipo C.
Clase array.

Entender los contenedores de secuencia y como usar múltiples vectores en conjunto con otras estructuras de datos.

BUILT-IN ARRAY
Un arreglo es una estructura simple que contiene elementos homogéneos o de un solo tipo de variable.
¿Se anexa alguna librería?

NO

¿Como se declara?

<tipo_variable> nombre_arreglo[# elementos n] {valor#1, valor#2, …, valor#n};
```C++
const int TAMANO = 5;
int arreglo[TAMANO] {1,2,3,4,5};
```
//¿Como se asigna?
```C++
nombre_arreglo[#elemento] = valor;


arreglo[0] = 1;
arreglo[1] = 2;
arreglo[2] = 3;
arreglo[3] = 4;
arreglo[4] = 5;

```

¿Como se imprime?
```C++

for (int i=0; i <=TAMANO; i++)
{
	cout << arreglo[i]<< endl;
}

```
¿Se puede viajar en el arreglo de otra manera? Se puede recorrer el arreglo de una manera diferente, usando la asociación llamada “referencia” del arreglo con el operador : (dos puntos)

```C++
for (int contador : arreglo)
  {
    std::cout << contador << std::endl;
  }
```

Nota: El tipo de variable puede ser cambiado a auto. auto es un tipo de variable comodín que asume su tipo una vez que se hace la asignación.  

ARRAY CLASS
La clase array es muy similar a la declaración de arreglos tradicional, con la diferencia que es orientada a objetos.
Los objetos son entidades contenidas en sí mismos y tienen comportamientos (“behaviors”)
La clase array es una secuencia de elementos de secuencia.
¿Se anexa alguna librería?

```C++
#include <array>
```

¿Como se declara?

array <tipo_variable, # elementos n > nombre_arreglo {valor#1, valor#2, …, valor#n};

```C++
array<int, 5> arreglo{1,2,3,4,5};
```

¿Como se imprime?

```C++
for (int i=0; i <=TAMANO; i++)
{
	cout << arreglo[i]<< endl;
}
```

¿Se puede viajar en el arreglo de otra manera? Se puede recorrer el arreglo de una manera diferente, usando la asociación llamada “referencia” del arreglo con el operador : (dos puntos)

```C++
for (int contador : arr)
  {
    std::cout << contador << std::endl;
  }
```

Nota: El tipo de variable puede ser cambiado a auto. auto es un tipo de variable comodín que asume su tipo una vez que se hace la asignación.

La diferencia entre el arreglo anterior es que se pueden usar funciones añadidas al objeto creado del arreglo es que puede usar funciones anexadas al objeto como size()

Ejemplo:

```C++
for (int i = 0; i < arr.size(); i++)
{
    std::cout << arr[i] << std::endl;
}
```

# Indexación de un arreglo

* La indexación de un arreglo es la definición de como accesar los valores de un arreglo.

<img width="528" alt="image" src="https://github.com/user-attachments/assets/65b11f48-2250-4ac3-a010-1fc5c9ecef9a">

  
* El primer elemento de un arreglo, SIEMPRE, será el **índice 0**, en este caso, lo he llamado elemento 0, el segundo elemento será el índice 1, y este es el elemento 1, y sucesivamente hasta el último elemento. De tal manera que si es un arreglo de 10 elementos, como el ejemplo de la presentación anterior. El índice irá de 0 a 9, que nos da como resultado 10 elementos.

## Acceso y asignación de valores a un arreglo

Ejercicio uno. Se le pide crear un arreglo de 10 elementos de tipo int. Que almacene los números naturales, de cero a nueve. 

```HTML
<p style="text-align:center;">{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}</p>
```



