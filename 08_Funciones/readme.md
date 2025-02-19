# Funciones

* Las funciones son piezas de código reusable.
* Las funciones pueden ser llamadas o invocadas cuando son necesitadas.
* Ayuda a desglosar un problema en partes más manejables.
___

## Estructura General de una función.

La estructura general de una función en C++ implica varios componentes clave:
1. Tipo de retorno: Indica qué tipo de valor devolverá la función.
2. Nombre de la función: Un identificador único para la función.
3. Lista de parámetros: Una lista separada por comas de entradas para la función (puede estar vacía).
4. Cuerpo de la función: el bloque de código que define lo que hace la función.


Estructura General de una función:

```C++
<tipo_retorno> nombrefuncion(Lista Parametros)
{
	// Cuerpo de la función
}
```

Ejemplo:

```cplusplus
int suma(int num1, int num2)
{
	return num1+num2;
}
```

Como se llama a una Función? 

> Una función puede ser llamada dentro de cualquier otra función, incluyendo la funcion **main()** y si esta tiene parametros debes anexar las variables o constantes que reciba la función separado por comas `,`


_Se puede definir una Función dentro de otra Función?_ 

> **No** puedes definir una función dentro de otra función. Esto significa que las definiciones anidadas de funciones no están permitidas en el lenguaje estándar. Sin embargo, puedes lograr un comportamiento similar utilizando funciones lambda (funciones anónimas), que son soportadas desde C++11.


___

### Que es una función prototipo. 

**Es la cabecera o primera línea de una función, seguido de un punto y coma. Adicionalmente debemos hacer la definición de la función**

***Generalidades de las funciones prototipo:***

* Es una función que solo contiene el tipo de retorno, nombre de la función y sus parámetros, seguido de un punto y coma.
* Una función en C++ se define arriba de la función main(), pero es más común crear una función prototipo **arriba** de la función main(), y definir la función, es decir, el código necesario de la función **debajo** de la función main().
* Porque se divide en dos? Le informa al compilador que existe una función y ayuda al compilador a ser más eficiente.

> En C++ una función debe ser declarada _arriba_ de la función main(), en otros lenguajes la función puede
> estar arriba o debajo de la función main(), pero, en C++ solo puede estar arriba, si deseamos poner
> nuestras funciones por debajo de la función, se debe usar la definición de la función prototipo.

***Estructura General de una función prototipo***

```C++
<tipo_retorno> nombrefuncion(Lista Parametros);
```

Ejemplo:

```cplusplus
int suma(int num1, int num2);
```

### Definición de una función que usa en conjunto con la función prototipo.

**Propósito:** Es la implementación completa de la función, incluyendo el cuerpo, que define todas las instrucciones que cumplen el propósito de la función.

```C++
<tipo_retorno> nombrefuncion(Lista Parametros)
{
	// instrucciones de lo que actualmente hace la función
}
```

Ejemplo

```cplusplus
int suma(int num1, int num2)
{
	return num1+num2;
}
```
### Diferencias clave entre definición y declaración de funciones

1. Contenido:
* Declaración: Solo especifica la firma de la función.
* Definición: Incluye el cuerpo de la función con el código real.
2. Propósito:
* Declaración: Informa al compilador sobre la existencia de la función y su interfaz.
* Definición: Informa al compilador de cómo funciona la función.
3. Ubicación:
* Declaración: Por lo general, se encuentra en archivos de encabezado (.h).
* Definición: Por lo general, se encuentra en los archivos fuente (.cpp).

___

## Ejemplos de diferentes tipos de funciones.

El ejercicio de hoy __implica una serie de ejercicios__ que muestran algunas de las características de las funciones de C++, los ejercicios se dividen en dos categorías:

* En la primera parte, comenzaremos explorando la naturaleza de los parámetros de función y qué reglas rigen la relación entre los parámetros y sus argumentos.
* También examinaremos los diferentes tipos de parámetros disponibles en C ++.

> RECUERDA. Un **parámetro** es o son diferentes tipos de datos con su identificador dentro de la lista de parámetros, tanto en la función prototipo, como en la definición de la función.
>
> Por el contrario, un argumento se define en la función, cuando esta es llamada y se asignan valores a los a la función dentro de los paréntesis ya sea como constantes o variables.
___

* En la segunda parte, examinaremos la relación entre las definiciones que aparecen en diferentes funciones, y algunas de las reglas de alcance en C++.
___
### Función sin retorno y sin parámetros.

_Ejemplo de una función sin retorno y sin parámetros_ 

```C++

void suma()
{
   int n1, n2;
   cout << "Ingresa el numero 1 : ";
   cin >> n1;
   cout << "INgresa el numero 2 : ";
   cin >> n2;
   cout << "La suma es : " << (n1+n2) << endl;
}

```


_Como se llama una función sin retorno y sin parámetros._

```cpp

int main()
{
   suma();
}

```


___

### Función con retorno y con parámetros.

_Ejemplo de una función con retorno y con parámetros_


 ```C++

#include <iostream>
using namespace std;

int suma(int a, int b)
{
    return a + b;
}

 ```


> La instrucción ***return*** es un componente que define el tipo de retorno del resultado que devuelve la función que se declara en la cabecera de la función.


_Ejemplo de llamada de una función con retorno y con parámetros._

```cpp

int main() {
    int resultado = suma(5, 3);
    cout << "Suma: " << resultado << endl;
    return 0;
}

```
___

### Ejemplo de una funcion prototipo.

Una funcion prototipo tiene multiples propositos, el mas basico es el hecho de poder mover la definicion de la funcion en la parte inferior de la funcion **main()** que genera un codigo de mas facil lectura.  

```C++
// ConsoleApplication12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
// funcion prototipo
void imprime(vector<int> v);

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    imprime(v);
}
// Definiciones de la función
void imprime(vector<int> v)
{
    for (auto elemento : v)
    {
        cout << elemento << " , ";
    }
    cout << endl;
}
```

### Ejemplo práctico integral: Establece las operaciones básicas de un cajero automático:


> Realice un programa en C++ que represente las operaciones básicas de un cajero automático, que son consulta de saldo de una cuenta, y retiro de efectivo de una cuenta.

> Para el proceso de consulta, deberá mostrar en pantalla el saldo, usando una función donde imprima el valor del saldo. Considere que la variable donde guarde el saldo, debe ser una variable global.

> Para el proceso de retiro deberá preguntar por la cantidad a retirar en pantalla, validar que la cantidad no exceda al saldo, usar parámetro por referencia para modificar el saldo, en caso de que el retiro se ejecute.

> Si obtiene el saldo y no excede la cantidad de la que puede disponer, deberá “simular” la operación de entrega de efectivo y descontar la cantidad del saldo y enviar petición de actualización del saldo a la central.



```C++

#include <iostream>
#include <iomanip>
using namespace std;
//variable global. Se definen fuera de cualquier función
int opcion;
double saldoActual = 5000, retiro, deposito;
// función prototipo
void menu();
void imprimeSaldo(double saldo1);
void retirar(double saldo1);
void depositar(double deposito);
 
void imprime() 
{
    std::cout << "Hello World!\n";
}
 
int main()
{
    imprime();
    do {
        menu();
        switch (opcion)
        {
        case 1:
            imprimeSaldo(saldoActual);
            break;
        case 2:
            cout << "Ingrese el monto a retirar: ";
            cin >> retiro;
            retirar(retiro);
            break;
        case 3:
            cout << "Ingrese el monto a depositar: ";
            cin >> deposito;
            depositar(deposito);
            break;
        default:
            break;
        }
    } while (opcion != 4);
}
 
void depositar(double deposito1) 
{
    saldoActual = saldoActual + deposito1;
    cout << "Su saldo actual es: " << saldoActual << endl;
 
}
 
    void retirar(double retiro1)
    {
        if (retiro1 > saldoActual)
        {
            cout << "Saldo insuficiente" << endl;
        }
        else
        {
            saldoActual = saldoActual - retiro1;
        }
        cout << "Su saldo actual es: " << saldoActual << endl;
    }
 
    void imprimeSaldo(double saldo1)
    {
        cout << "El saldo actual es: " << saldo1 << endl;
    }
 
    void menu()
    {
        cout << "Bienvenido al cajero automatico" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Retirar" << endl;
        cout << "3. Depositar" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cout << "La opcion seleccionada es: " << opcion << endl; 
    }

```
___

## Parámetros x Valor y parámetros x referencia

### Parámetro por valor: 

Un parámetro cuyo Tipo NO va seguido de un signo ampersand (&) se denomina parámetro x valor. Un parámetro x valor es una variable local a la función, tal que cuando se llama a la función, recibe una **copia del valor del argumento correspondiente**.

### Parámetro por referencia:

Un parámetro cuyo Tipo va seguido de un signo ampersand (&) se denomina parámetro x referencia. Un parámetro x referencia es un alias (por ejemplo, otro nombre) para su argumento correspondiente. Y el valor del argumento que se pasa, será modificado.

Ejemplo simple:

```C++
#include <iostream>
#include <vector>

using namespace std;

void suma(int& a) 
{
    cout << "numero en suma() " 
        << a << endl;
    a++;
    cout << "numero en suma() "
        << a << endl;
}
int main()
{
    int numero = 10;
    suma(numero);
    cout << "numero en main() " <<
        numero << endl;
}
```

____
### Ejemplo: Parámetros x valor y Parámetros por referencia.

Haga un nuevo código que incluya las funciones prototipo y sus definiciones y use parametros por valor y por referencia, segun sea el caso. 

```C++

#include <iostream>
#include <iomanip>
using namespace std;
//variable global. Se definen fuera de cualquier función
int opcion;
double  retiro, deposito;
// función prototipo
void menu();
void imprimeSaldo(double saldo1);
void retirar(double saldo1, double &sa);
void depositar(double deposito, double &sa);
 
void imprime() 
{
    std::cout << "Hello World!\n";
}
 
int main()
{
    double saldoActual = 5000;
    imprime();
    do {
        menu();
        switch (opcion)
        {
        case 1:
            imprimeSaldo(saldoActual);
            break;
        case 2:
            cout << "Ingrese el monto a retirar: ";
            cin >> retiro;
            retirar(retiro,saldoActual);
            break;
        case 3:
            cout << "Ingrese el monto a depositar: ";
            cin >> deposito;
            depositar(deposito, saldoActual);
            break;
        default:
            break;
        }
    } while (opcion != 4);
}
 
void depositar(double deposito1, double &sa) 
{
    sa = sa + deposito1;
    cout << "Su saldo actual es: " << sa << endl;
 
}
 
    void retirar(double retiro1, double &sa)
    {
        if (retiro1 > sa)
        {
            cout << "Saldo insuficiente" << endl;
        }
        else
        {
            sa = sa - retiro1;
        }
        cout << "Su saldo actual es: " << sa << endl;
    }
 
    void imprimeSaldo(double saldo1)
    {
        cout << "El saldo actual es: " << saldo1 << endl;
    }
 
    void menu()
    {
        cout << "Bienvenido al cajero automatico" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Retirar" << endl;
        cout << "3. Depositar" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cout << "La opcion seleccionada es: " << opcion << endl; 
    }

```
___

## Funciones Overloading

Una función **overloading** es el proceso de crear funciones múltiples con el mismo nombre pero con diferentes “firmas” o tipos y formas de lista de parámetros.

Una función con “firmas” consiste en el nombre de la función con una lista de parámetros de la función.

* Nunca una función overloading incluye un retorno. **return**.
* Los parámetros pueden variar en número, tipo y orden.


Ejemplo:

```C++
#include <iostream>
using namespace std;
// Declaración de funciones sobrecargadas
void imprime(int numInt) {
    cout << "Entero: " << numInt << endl;
}

void imprime(double numDouble) {
    cout << "Doble flotante: " << numDouble << endl;
}

void imprime(const string& st) {
    cout << "String: " << st << endl;
}

int main() {
    // Llamadas a las funciones sobrecargadas
    imprime(34);           // Llama a la versión que acepta un int
    imprime(45.78);         // Llama a la versión que acepta un double
    imprime("Hola!");      // Llama a la versión que acepta una cadena

    return 0;
}
```
### Ejemplo de la calculadora usando funciones overloading. 

Usando todas las posibles combinaciones de tipos de variable, usando funciones overloading, solo se muestra la operación suma().

```C++
// ConsoleApplication19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"
using namespace std;
// Funciones prototipo
void suma(int a, int b);
void suma(double a, double b);
void suma(float a, float b);
void suma(string a, string b);
void suma(int a, double b);
void suma(double a, int b);
void suma(int a, float b);
void suma(float a, int b);
int main()
{
	// Ejercicio 4
	suma(1, 2);
	suma(3.4, 5.6);
}
// Definicion de la funcion
void suma(int a, int b) 
{
	cout << a + b << endl;
}
void suma(double a, double b)
{
	cout << a + b << endl;
}
void suma(float a, float b) 
{
	cout << a + b << endl;
}
```

___


### Ejemplo usando una función calculaArea() para diferentes figuras geométricas. 

Usando funciones overloading crear una función llamada calculaArea(), que pueda calcular el área de al menos cuatro figuras geométricas. Hacer un menú de opciones que muestre las opciones de cálculo de área, por ejemplo: cuadrado, triangulo equilátero, circulo, rectángulo etc. Dependiendo de los datos de entrada serán los parámetros y argumentos a usar en la función, pero solo puede usar un solo nombre de función.
```C++

#include <iostream>
#include <cmath> 
using namespace std;

// Sobrecarga de la función calculaArea

// Área del cuadrado: lado * lado
double calculaArea(double lado) {
    return lado * lado;
}

// Área del triángulo equilátero: (sqrt(3) / 4) * lado * lado
double calculaArea(double base, double altura) {
    return 0.5 * base * altura;
}

// Área del círculo: pi * radio * radio
double calculaArea(float radio) {
    return 3.1416 * radio * radio;
}

// Área del rectángulo: largo * ancho
double calculaArea(int largo, int ancho) {
    return largo * ancho;
}

int main() {
    int opcion;
    cout << "Calculadora de áreas" << endl;
    cout << "1. Cuadrado" << endl;
    cout << "2. Triángulo equilátero" << endl;
    cout << "3. Círculo" << endl;
    cout << "4. Rectángulo" << endl;
    cout << "Seleccione una opción: ";
    cin >> opcion;

    switch(opcion) {
        case 1: {
            double lado;
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            cout << "Área del cuadrado: " << calculaArea(lado) << endl;
            break;
        }
        case 2: {
            double base, altura;
            cout << "Ingrese la base del triángulo equilátero: ";
            cin >> base;
            cout << "Ingrese la altura del triángulo equilátero: ";
            cin >> altura;
            cout << "Área del triángulo equilátero: " << calculaArea(base, altura) << endl;
            break;
        }
        case 3: {
            float radio;
            cout << "Ingrese el radio del círculo: ";
            cin >> radio;
            cout << "Área del círculo: " << calculaArea(radio) << endl;
            break;
        }
        case 4: {
            int largo, ancho;
            cout << "Ingrese el largo del rectángulo: ";
            cin >> largo;
            cout << "Ingrese el ancho del rectángulo: ";
            cin >> ancho;
            cout << "Área del rectángulo: " << calculaArea(largo, ancho) << endl;
            break;
        }
        default:
            cout << "Opción no válida" << endl;
    }

    return 0;
}

```
___

## Funciones Recursivas

Funciones Recursivas (Algoritmos avanzados). Una función recursiva se llama a sí misma de manera directa o indirecta (vía otra función). 

Es en su mayoría como una función normal excepto que al menos se llama una vez a sí misma y contiene una solución base que es la solución más simple del problema. 

Esta solución simple es un booleano (condición lógica) que cuando esta es verdadera, es decir se cumple se detiene de llamar a la función nuevamente. 

Esto es cuando no hay más cálculos que procesar. 

Estas condiciones simples son instrucciones if-else con la instrucción return. 

### Otra definicion 

Una función recursiva se llama a sí misma de manera directa o indirecta (vía otra función).

Es en su mayoría como una función normal excepto que al menos se llama una vez a sí misma y contiene una solución base que es la solución más simple del problema.

Esta solución simple es un booleano (condición lógica) que cuando esta es verdadera, es decir se cumple se detiene de llamar a la función nuevamente. Esto es cuando no hay más cálculos que procesar.

Estas condiciones simples son instrucciones if-else con la instrucción return.

```C++
// Recursivas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int suma1=0;
int suma(int num) 
{
	if (num == 1) 
	{
		cout << "Condicion mas simple : " << num << ", suma1: " << suma1+1 << endl;
		return 1;
	}
	else 
	{
		
		 suma1 = num + suma(num - 1);
		 cout << "Retornando a llamada de : " << num << ", suma1: " << suma1 << endl;
	}
	
	return suma1;

}

int main()
{
	
	cout << "Resultado en main() : " << suma(5) << endl;
}


```

## Glosario
* **Tipo de dato VOID** Un tipo de dato VOID se usa en una función cuando no se requiere devolver un resultado a la función.
* **Variable Local** Es una declaración de una variable o estructura dentro de una función.
* **Parámetro** Es el componente de una función que recibe datos para ser procesados.
* **Argumento** Es el componente de una función que pasa datos a la función cuando esta es llamada o invocada.

