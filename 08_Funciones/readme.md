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

### 1. Función sin retorno y sin parámetros.

#### Esta es la estructura más básica. Utilizamos void para indicarle al compilador que la función ejecutará una acción directa (como imprimir en pantalla), pero no devolverá ningún valor matemático al programa principal. Al tener los paréntesis vacíos (), tampoco recibe "ingredientes" o datos externos; toda la información que necesita para operar debe estar declarada internamente.
​
Ejemplo en C++ (Imprimir una suma fija internamente):

```C++

#include <iostream>
using namespace std;

// Declaración de función sin retorno (void) y sin parámetros ()
void imprimirSumaFija() {
    // La función define sus propios datos internamente
    int a = 8;
    int b = 12;
    int suma = a + b;
    
    // Ejecuta la acción y termina
    cout << "La suma calculada internamente es: " << suma << endl;
}

int main() {
    // Al llamarla, simplemente ejecuta su bloque de código encapsulado
    imprimirSumaFija();
    
    // Podemos llamarla varias veces, pero siempre hará exactamente lo mismo
    imprimirSumaFija();
    
}

```
___

### 2. Funciones sin retorno y con parámetros (void)
​
#### Aquí seguimos usando void (ejecutamos una acción sin esperar respuesta matemática), pero ahora los paréntesis contienen "ingredientes" (parámetros). Esto hace que la función sea dinámica: la misma función nos sirve para resolver diferentes problemas dependiendo de los datos que le inyectemos al llamarla.
​
Ejemplo en C++ (Imprimir la suma de dos números):

```cpp
#include <iostream>
using namespace std;

// Declaración de función sin retorno (void) pero que exige dos enteros (parámetros)
void imprimirSuma(int a, int b) {
    int suma = a + b;
    cout << "La suma calculada internamente es: " << suma << endl;
}

int main() {
    // Llamamos a la función inyectándole los "ingredientes" (5 y 10)
    imprimirSuma(5, 10);
    
    // Podemos reutilizarla con datos distintos
    imprimirSuma(100, 250);
    
    return 0;
}


```

___

### 3. Funciones con retorno y sin parámetros
​
Cambiamos void por un tipo de dato (por ejemplo, int). Esto significa que la función funciona como una "calculadora" que promete entregarnos un número. La palabra reservada return es obligatoria aquí. Al no tener parámetros en sus paréntesis, la función busca la información internamente o captura datos de su entorno, los procesa y nos entrega un resultado limpio que podemos guardar en una variable.

```cpp
#include <iostream>
using namespace std;

// Declaración de función que devuelve un entero (int) pero no pide parámetros ()
int obtenerSumaFija() {
    int valor1 = 20;
    int valor2 = 30;
    
    // El return procesa internamente y "escupe" el resultado hacia afuera
    return valor1 + valor2;
}

int main() {
    // La función no imprime nada por sí sola, debemos atrapar su valor
    int resultado = obtenerSumaFija();
    
    cout << "El valor retornado por la función es: " << resultado << endl;
    
    return 0;
}


```

___

### 4. Función con retorno y con parámetros.

#### Este es el estándar de oro en el diseño de algoritmos modulares. En lugar de void, utilizamos un tipo de dato explícito (como int o float) indicando que la función es una "máquina procesadora" que obligatoriamente debe usar la palabra reservada return para devolvernos un resultado.

#### Al exigir parámetros en sus paréntesis, se vuelve altamente dinámica: inyectamos datos externos desde el main, la función realiza el cálculo a puerta cerrada y nos entrega un resultado limpio que podemos atrapar en una variable.
​
Ejemplo en C++ (Calcular y devolver la suma de datos inyectados):



 ```C++

#include <iostream>
using namespace std;

// Declaración con retorno (int) y con parámetros (int a, int b)
int calcularSuma(int a, int b) {
    // Procesa los "ingredientes" recibidos y devuelve el resultado matemático
    return a + b;
}

int main() {
    // Inyectamos los valores 15 y 25. 
    // Como la función "escupe" un valor, debemos atraparlo en una nueva variable.
    int resultadoTotal = calcularSuma(15, 25);
    
    // Ahora podemos usar ese dato en el flujo principal de nuestro programa
    cout << "El resultado procesado y devuelto al main es: " << resultadoTotal << endl;
    
    // También podemos imprimir el retorno directamente sin guardarlo
    cout << "Otra suma rápida es: " << calcularSuma(50, 50) << endl;
    
}


 ```


> La instrucción ***return*** es un componente que define el tipo de retorno del resultado que devuelve la función que se declara en la cabecera de la función.

___

## Practica #3

### I. Funciones sin retorno y sin parámetros (void, ())

 
 * **Ejercicio 1: Generador del Escenario Base**
   * **Enunciado:** Escribe un programa que utilice una función básica para simular la creación de un elemento 3D en el origen del mundo. La función debe llamarse instanciarCuboBase y simplemente imprimirá en consola que el cubo (el suelo de nuestro nivel) ha sido creado en las coordenadas absolutas (0, 0, 0).
 
 * **Ejercicio 2: Reiniciar la Cámara**

   * **Enunciado:** Crea una función llamada resetearCamara. En la animación 3D, es común perder de vista al personaje. Esta función no recibe datos, pero al llamarse, debe imprimir en pantalla: *"La cámara principal ha regresado a su posición por defecto frente al escenario"*. Llámala desde tu función principal.
 
 * **Ejercicio 3: Interfaz de Herramientas**

   * **Enunciado:** Imagina que estás programando el menú de un software de animación. Diseña una función llamada mostrarMenuAnimacion que imprima tres opciones en consola: *"1. Trasladar | 2. Rotar | 3. Escalar"*. El programa principal debe ejecutar esta función al inicio para mostrarle las herramientas al artista.

### II. Funciones sin retorno y con parámetros (void, (parametros))

 * **Ejercicio 4: Trasladar al Héroe**

   * **Enunciado:** Crea una función llamada trasladarObjeto que reciba tres parámetros numéricos con decimales (float): x, y, z. La función debe imprimir la nueva posición absoluta del objeto, simulando que movimos a nuestro personaje principal en el espacio 3D hacia esas coordenadas exactas.

 * **Ejercicio 5: Impacto y Cambio de Material**
 
   * **Enunciado:** Cuando un objeto choca, suele cambiar su material (por ejemplo, ponerse rojo para indicar daño). Diseña la función aplicarColorDano que reciba una cadena de texto (string) con el nombre de un color. La función debe imprimir: *"¡Colisión detectada! El material del personaje ha cambiado a color: [Color Recibido]"*.
 
 * **Ejercicio 6: Opacidad de un Fantasma**

   * **Enunciado:** Escribe una función llamada modificarTransparencia que reciba un número fraccionario entre 0.0 y 1.0 (donde 0 es invisible y 1 es sólido). La función debe simular el renderizado de un fantasma imprimiendo en pantalla: *"La opacidad del modelo 3D se ha ajustado al [Valor] %"*. *(Pista: Multiplica el parámetro por 100 dentro del cout).*

### III. Funciones con retorno y sin parámetros (Tipo, ())

 * **Ejercicio 7: Simulador de Escombros**
 
   * **Enunciado:** Para que una explosión se vea natural, las partículas no pueden caer idénticas; necesitan rotar de forma caótica. Diseña la función generarRotacionAleatoria que no reciba parámetros, pero devuelva (return) un número fraccionario aleatorio entre 0.0 y 360.0. Atrapa ese valor en el main e imprímelo simulando la rotación de una roca. *(Nota: Puedes retornar un valor fijo como 45.5 solo para comprobar la estructura de la función).*
 
 * **Ejercicio 8: Gravedad Universal**
 
   * **Enunciado:** En todo motor de físicas, la gravedad tira de los objetos hacia abajo. Crea una función llamada obtenerGravedadNativa que retorne el valor decimal -9.8. En tu función principal, guarda este retorno en una variable e imprime: *"La fuerza de atracción del escenario está configurada en: [Valor]"*.

 * **Ejercicio 9: Sincronización de Fotogramas (Frames)**
 
   * **Enunciado:** Escribe una función leerFotogramaActual que simule leer la línea de tiempo de una animación y retorne el número entero 60 (representando que estamos en el frame 60). Captura este valor en el main y utilízalo para imprimir: *"Renderizando el fotograma número: 60"*.

### IV. Funciones con retorno y con parámetros (Tipo, (parametros))

 * **Ejercicio 10: El Escudo Mágico (Escalado)**
 
   * **Enunciado:** Escribe la función calcularEscalaFinal que reciba el tamaño base de una esfera de energía (float) y un multiplicador de poder de magia (float). La función debe multiplicar ambos valores y retornar el resultado, el cual deberás atrapar e imprimir en la función principal para simular cuánto creció el escudo en pantalla.
 
 * **Ejercicio 11: Fotograma Intermedio (Interpolación)**

   * **Enunciado:** La animación fluida requiere calcular posiciones intermedias. Crea la función calcularPuntoMedio que reciba dos parámetros decimales: la posicionA y la posicionB de un objeto. La función debe sumar ambas posiciones, dividirlas entre dos, y **retornar** ese resultado numérico. Imprímelo en el main indicando que ese es el fotograma intermedio generado.
 
 * **Ejercicio 12: Desgaste de Barra de Salud (Clamp)**
 
   * **Enunciado:** Un enemigo recibe daño por fuego prolongado. Crea una función calcularSaludRestante que reciba la salud actual del enemigo y el daño por quemadura. Resta el daño a la salud. Antes de retornar, usa una decisión (if) para asegurar que si la salud es menor a cero, se fije en cero para evitar que la barra visual colapse. Retorna el valor final y muéstralo en la consola.

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

