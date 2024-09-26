# Introducción

Las arreglos y vectores son estructuras de datos que contienen más de un elemento.
Tipos de estructuras:
1. Built-in arrays. Arreglos tipo C.
2. Clase array.
3. Clase vector

Entender los contenedores de secuencia y como usar múltiples vectores en conjunto con otras estructuras de datos.

# Built-in array.

## Un arreglo es una estructura simple que contiene elementos homogéneos o de un solo tipo de variable.

¿Se anexa alguna librería?

#include <array>


¿Como se declara?

<tipo_variable> nombre_arreglo[# elementos n] {valor#1, valor#2, …, valor#n};

const int TAMANO = 5;
int arreglo[TAMANO] {1,2,3,4,5};

¿Como se asigna?

nombre_arreglo[#elemento] = valor;


arreglo[0] = 1;
arreglo[1] = 2;
arreglo[2] = 3;
arreglo[3] = 4;
arreglo[4] = 5;

¿Como se imprime?

for (int i=0; i <=TAMANO; i++)
{
	cout << arreglo[i]<< endl;
}

¿Se puede viajar en el arreglo de otra manera?
Se puede recorrer el arreglo de una manera diferente, usando la asociación llamada “referencia” del arreglo con el operador : (dos puntos)

 for (int contador : arreglo)
  {
    std::cout << contador << std::endl;
  }
  
Nota: El tipo de variable puede ser cambiado a auto. auto es un tipo de variable comodín que asume su tipo una vez que se hace la asignación.	
 
# array class.

La clase array es muy similar a la declaración de arreglos tradicional, con la diferencia que es orientada a objetos.
* Los objetos son entidades contenidas en sí mismos y tienen comportamientos (“behaviors”)
* La clase array es una secuencia de elementos de secuencia.

¿Se anexa alguna librería?

#include <array>

¿Como se declara?

array <tipo_variable, # elementos n > nombre_arreglo {valor#1, valor#2, …, valor#n};

array<int, 5> arreglo{1,2,3,4,5};

¿Como se imprime?

for (int i=0; i <=TAMANO; i++)
{
	cout << arreglo[i]<< endl;
}

¿Se puede viajar en el arreglo de otra manera?
Se puede recorrer el arreglo de una manera diferente, usando la asociación llamada “referencia” del arreglo con el operador : (dos puntos)

for (int contador : arr)
  {
    std::cout << contador << std::endl;
  }
  

Nota: El tipo de variable puede ser cambiado a auto. auto es un tipo de variable comodín que asume su tipo una vez que se hace la asignación.

La diferencia entre el arreglo anterior es que se pueden usar funciones añadidas al objeto creado del arreglo es que puede usar funciones anexadas al objeto como size()

Ejemplo:

for (int i = 0; i < arr.size(); i++)
{
    std::cout << arr[i] << std::endl;
}

 
