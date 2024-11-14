# Arreglos 1 dimensión

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


> {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}


Código necesario.
1. Una variable que me sirva para almacenar los números naturales, desde cero hasta 9. En este caso será un arreglo que llamaremos “naturales”.
2. El tipo de variable que usaremos, que en este caso será int, ya que lo que necesitamos almacenar los números naturales.
3. El número de elementos que necesitamos, que será 10, ya que este es el número de elementos que necesitamos.
4. Declaración del arreglo, como vimos en el ejemplo anterior para declarar un arreglo de 10 elementos tipo entero, sería:
   > int naturales[];

## Asignación de valores

Hay dos tipos de asignación, de un arreglo:
1. En la declaración del arreglo, como se vio en la presentación anterior sería:
   > int[ ] naturales = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
Nota: De la declaración el cambio es que no se pone el número de elementos. 

## Segunda forma de asignación:
La segunda manera sería una asignación manual asignando el valor usando los corchetes para indicar en que localidad queremos guardar el valor, ejemplos:
> naturales[0] = 0;
> naturales[1] = 1;
> naturales[2] = 2;
> Así sucesivamente hasta llegar a naturales[9] = 9;

El número que esta entre corchetes es la localidad o índice del arreglo donde estamos guardado el valor.
El número a la derecha del símbolo igual (=), es el valor que estamos asignando a la localidad o índice. OJO En este caso coinciden el índice con, el valor, pero si asignaras los meses del año el valor sería diferente. 


## Código necesario:
Una vez que tengo mi arreglo declarado y lleno. Anexo el código necesario en un archivo de texto aparte. Ejemplificando las dos maneras de alimentar nuestro arreglo. practicaH1.txt
Para accesar, es decir recorrer el arreglo, generalmente lo podemos asociar a una instrucción “for” para recorrer elemento por elemento e imprimirlo. Las instrucciones serían :
```C++
for (int i=0 ; i <=9 ;  i++ ){
	 cout << “numero [”  <<  i  <<  ”] tiene el valor : “ << naturales[i];
}
```

	i) El índice esta denotado como “i”, y este se incrementa de 0 hasta 9.
	ii) naturales[i], denota el valor que tenemos guardado en la posición del índice. Y por lo tanto imprimirá el 	valor que contiene el arreglo.


Ejercicios.

1. Generar el código necesario en C# para declarar un arreglo que contenga los nombres de los meses del año y asignar dichos valores a cada posición. Tip : Usar tipo de variable “string” y asina el nombre a cada posición relativa, es decir la posición cero corresponde a “enero”, la posición relativa uno corresponde a “febrero” etc.
2. Imprime el arreglo usando la instrucción “for” usando el índice y accesa el arreglo meses e imprime los valores del arreglo, debe imprimir “enero”, “febrero”, etc.
3. Generar el código necesario en C# para declarar un arreglo que contenga los nombres de los planetas del sistema solar y asignar dichos valores a cada posición. Tip : Usar tipo de variable “string” y asina el nombre a cada posición relativa, es decir la posición cero corresponde a “mercurio”, la posición relativa uno corresponde a “venus” etc. 
3. Imprime el arreglo usando la instrucción “for” usando el índice y accesa el arreglo planetas e imprime los valores del arreglo, debe imprimir “enero”, “febrero”, etc.

## Arreglos dos dimensiones

Ejercicios

La siguiente practica cuenta para el proyecto final.

1. El juego sudoku es muy famoso, y es una matriz. De que dimensión es y cuantas casillas tiene? 

2. El juego de ajedrez otro juego super famoso y antiguo. De que dimensión es su tablero y cuantas casillas tiene?

3. Que es un diferencia hay entre los colores HTML y los colores RGB? Son equivalentes?

4. Cuál sería el código del color azul medianoche en HTML y RGB?

5. Documentar como hacer la suma y multiplicación de matrices. Describe un pequeño proceso, para la multiplicación y suma de matrices de dimensión de 2x2. Y pon un ejemplo, si lo tomas de algún libro de matemáticas o internet, cita la fuente. Nota: No uses Wikipedia.


## Arreglos de dos dimensiones (Dimensión de un arreglo bidimensional)

* Como mencionamos el arreglo bidimensional es una colección de valores, del mismo tipo de datos, de un valor finito. Que se componen de renglones y columnas, normalmente denominados nxm.

* Donde n es el número de renglones. Y m es el número de columnas. La identificación de las posiciones es (renglón, columna) es decir (1,1), (1,2), (2,1) & (2,2). 

* Un arreglo de dos dimensiones se conoce también como matriz. Usare este nombre indistintamente como equivalente de arreglo de dos dimensiones.

<img width="311" alt="Screenshot 2024-11-14 at 7 44 20 AM" src="https://github.com/user-attachments/assets/2468a7bb-fdca-4cc3-a9c5-acb3c07ddf15">

## Sintaxis para declarar un arreglo de dos dimensiones

![image](https://github.com/user-attachments/assets/64baf44b-432e-4c39-9322-a92c17a85c5c)








