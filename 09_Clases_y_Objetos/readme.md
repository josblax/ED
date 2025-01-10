# Estructuras (Struct)

C++ tiene dos tipos de tipos: tipos integrados y tipos de clase. Los tipos integrados son cualquier tipo que constituye el núcleo del lenguaje, como int, float y char. Los tipos de clase pueden considerarse como tipos definidos por el usuario; Estos son los tipos que creamos declarando clases, estructuras, uniones, etc. Las clases son la base de la programación orientada a objetos.

Es una estructura de datos definida por el programador, de tipo de datos no primitivos que nos sirve para almacenar un grupo de datos con tipos de datos que pueden ser similares o no. Adicionalmente se pueden declarar funciones a las estructuras.

## Como se declara?

```C++
struct identificador 
{
	<tipo_datos1> identificador1;
	<tipo_datos2> identificador2;
	.
	<tipo_datosn> identificadorn;

<tipo_dato> nombre_funcion1()
{
	// inserta aquí instrucciones de la función 1
}

<tipo_dato> nombre_funcion2()
{
	// inserta aquí instrucciones de la función 2
}
};
```

## Ejemplo Declaración. 

Ejemplo: Crear una estructura llamada Alumno que contenga los siguientes datos:
•	Nombre del Alumno
•	Apellido Materno
•	Apellido Paterno
•	Número de cuenta


## Código

```C++
struct Alumno 
{
    string nombre;
    string ap;
    string am;
    int cuenta;
// Abajo se pueden añadir diferentes funciones, como añadir o dar de alta datos
};
```

## Como se crea una instancia de mi estructura Alumno?

### Definición una instancia 
Es un objeto específico que se crea a partir de una clase. Esta ocupa memoria durante la ejecución de un programa y tiene su propio estado y comportamiento. La palabra instancia indica la relación 
de un objeto con su clase.

### Ejemplo:
```C++
int main()
{
    // crear una instancia de la estructura alumno
    Alumno juanpueblo;
    // Agregar datos a la instancia jose
    juanpueblo.nombre = "Juan";
    juanpueblo.ap = "Pueblo";
    juanpueblo.am = "Ciudadano";
    juanpueblo.cuenta = 123456;
// imprimir los valores de la instancia juanpueblo
    cout << "nombre : " << juanpueblo.nombre;
    cout << "apellido paterno : " << juanpueblo.ap;
    cout << "apellido materno : " << juanpueblo.am;
    cout << "matricula : " << juanpueblo.cuenta;
}

```

## Implementando funciones en una estructura.

```C++
struct Alumno 
{
    string nombre;
    string ap;
    string am;
    int cuenta;

// Abajo se pueden añadir diferentes funciones.

// Funcion imprimeAlumnos()


    void imprimeDatos(Alumno alumno)
    {
        cout << "Nombre del alumno : " << alumno.nombre << endl;
        cout << "Apellido Paterno : " << alumno.ap << endl;
        cout << "Apellido Materno : " << alumno.am << endl;
        cout << "No de cuenta : " << alumno.cuenta << endl;
        
    }


};

```

## Ejercicio Integral. Implementar una función que añada de alta nuevos alumnos pasando como parámetro un nuevo objeto.

```C++
    void altaAlumnos() 
    {
        string n1;
        string ap1;
        string am1;
        int cuenta1;
        string mat;
        double cal;
        Alumno obj1;
        cout << "Dame el nombre del alumno : " << endl;
        cin >> n1;
        cout << "Dame el apellido paterno : " << endl;
        cin >> ap1;
        cout << "Dame el apellido materno : " << endl;
        cin >> am1;
        cout << "Dame tu numero de cuenta : " << endl;
        cin >> cuenta1;
        cout << "Dame la materia que cursas : " << endl;
        cin >> mat;
        cout << "Dame la calificacion obtenida : " << endl;
        cin >> cal;
        cout << "Tamano del vector :" << v1.size() << endl;
        obj1 = { n1,ap1,am1,cuenta1,mat,cal };
        v1.push_back(obj1);
        imprimeDatos(obj1);
        cout << "Tamano del vector :" << v1.size() << endl;
    }

```

## Explicación: 

### Definición de Variables: Se declaran variables para almacenar los datos del alumno:

	n1: nombre del alumno.

	ap1: apellido paterno del alumno.

	am1: apellido materno del alumno.

	cuenta1: número de cuenta del alumno.

	mat: materia que cursa el alumno.

	cal: calificación obtenida por el alumno.

* Creación de un Objeto Alumno: Se declara un objeto obj1 de la clase Alumno.

### Entrada de Datos:

1. Se solicita y se lee el nombre del alumno.
2. Se solicita y se lee el apellido paterno.
3. Se solicita y se lee el apellido materno.
4. Se solicita y se lee el número de cuenta.
5. Se solicita y se lee la materia.
6. Se solicita y se lee la calificación obtenida.
7. Impresión del Tamaño del Vector v1 Antes de la Inserción: Se imprime el tamaño actual del vector v1.
8. Asignación de Datos al Objeto Alumno: Se asignan los valores leídos a obj1.
9. Inserción del Objeto en el Vector: Se inserta el objeto obj1 en el vector v1.
10. Impresión de Datos del Objeto Alumno: Se llama a la función imprimeDatos(obj1) para imprimir los datos del alumno.
11. Impresión del Tamaño del Vector v1 Después de la Inserción: Se imprime el tamaño actual del vector v1 nuevamente.

Este código es útil para agregar nuevos alumnos a una lista (vector) y mantener un registro de sus datos.

## Diferencia Clases versus Structs.

En C++, puede elegir entre declarar un objeto como una estructura o una clase. 

* Ambos pueden utilizar funciones de miembro y herencia y tienen una mezcla de campos públicos, protegidos y privados. 
* La principal diferencia entre una clase y una estructura es que las variables y métodos miembros de una estructura son públicos, mientras que las variables y métodos miembros de una clase son privados.

En el ejemplo siguiente, se declaran dos tipos de datos equivalentes para mostrar cómo una estructura establece por defecto (no usa palabras clave públicas, privadas o protegidas) a sus miembros como públicos, mientras que una clase predeterminada es privada. fuente: The C++ Workshop, Dale Green 2020. 

```C++
#include <iostream>
using namespace std;

struct MiEstructura 
{
    int numeroInt=5;
};

class MiClase 
{
    int numeroInt=10;
};

int main()
{
    // Creacion de una instancia de una estructura
    MiEstructura miInstanciaStruct;
    // Creacion de una instancia de una clase
    MiClase miInstanciaClase;

   // Permitido hacer la siguiente operacion, porque es publica
    int i = miInstanciaStruct.numeroInt;
    // No permitido hacer la siguiente operacion porque es privada
    int j = miInstanciaClase.numeroInt;
}

```

Estos objetos son idénticos excepto por este detalle. Una instancia de una estructura en C++ es exactamente igual que una instancia de una clase. En el código compilado, son idénticos; El uso de memoria, el tiempo de acceso y la alineación de memoria son exactamente los mismos, y no hay sobrecarga asociada con uno sobre el otro. Una estructura se usa tradicionalmente como un tipo de datos antiguos sin formato (POD) para ayudar con la compatibilidad con versiones anteriores de las bibliotecas C. Un tipo POD es una clase o estructura que no tiene constructores, destructores ni funciones de miembro virtual. 

# Clases y Objetos

[UML 2.5](https://www.omg.org/spec/UML/2.5/PDF)

### ¿Cuál es el propósito del SW?
*	Ejecutar tareas y cálculos complejos
*	Reducir dicha complejidad
*	Reducir intervención humana
*	Reducir errores
*	Hacer tareas monótonas.

### Los objetos en el mundo real son por naturaleza complejos: 
* Órganos y estructuras en seres vivos.
* Sistemas que se encuentran en la naturaleza, Ríos, Océanos, Bosques, Ecosistemas, Clima etc.

### Esto aplica al SW también:
* Sistemas de Bases de Datos
* Sistemas Financieros
* Control de tráfico aéreo.

> Esta complejidad es demasiado grande para ser entendida por una sola persona.
> La complejidad nunca puede ser eliminada, pero puede reducirse.

### ¿Porque el SW es complejo?

Debido a la naturaleza y dominio es complejo.
* Por ejemplo, Sistemas Bancarios, Sistemas Financieros, Sistemas de Abastecimiento, Sistemas de Comercialización.
* Esta complejidad se transfiere al SW.
* Existen requerimientos no funcionales como rendimiento, costo, ejecución y actuación de dichos sistemas.

### El SW es complejo porque…
* Comunicación entre personas (usuarios y desarrolladores)
* Poca educación en lo que el SW es capaz y no de ejecutar.
* El usuario o el programador no tienen buenas habilidades de comunicación.
* Los programadores esperan las mayores especificaciones posibles.
* Los usuarios necesitan “probar” antes de mejorar su expectativa de lo que el SW puede hacer.
* Los cambios pueden ser difíciles de incorporar.

### El SW es impredecible…
* SW corre con componentes discretos.
* La solución puede tener muchas variantes, y uso de memoria y recursos.
* En numero muy grande de eventos y estados.
* Normalmente mostrada en términos combinatorios (probabilidad y estadística)
* Interacción entre muchos componentes

## UML Diagrama de clases.

**Unified Modeling Language (UML) [Lenguaje Unificado de Modelado].**

* Nos ayuda a modelar nuestras clases durante el diseño.

> Una notación de clase es una representación gráfica se usa para representar la clase y sus relaciones en
> el modelado de orientado-objetos.

<p align="center">
<img src="https://github.com/josblax/ED/blob/main/imagenes/clase.jpg" alt="Layout app" width="200" height="200">
</p>


### Definición de una Clase. 
El nombre de la clase se define en la parte alta del rectángulo normalmente es centrada y en negritas.

### Atributos de una clase. 
También conocidos como propiedades o campos, representa los elementos de datos de la clase.

### Métodos ó funciones de una clase. 
También conocidos como Funciones u operaciones, representa el comportamiento o funcionalidad de la clase. Se enumeran en el tercer compartimiento del rectángulo de la clase e incluye la visibilidad (público o privado), tipo de retorno y tipo de datos de cada atributo.

### Representación de visibilidad de un diagrama de clases
```bash
+ para el público (visible para todas las clases)
- privado (visible solo dentro de la clase)
# protegido (visible solo para subclases)
~ para paquetes o visibilidad por default (visible solo para las clases dentro del mismo paquete)
```
### Dirección de los parámetros de una clase.

En los diagramas de clase, la dirección de los parámetros se refiere a la indicación del flujo de la información entre clases, si es un parámetro de entrada, de salida o de ambos.

#### in (input):
* Un parámetro de entrada es obtenido desde el objeto que llama a la función(cliente) al objeto llamado(servidor) durante el método de la invocación.
* Es representado mediante una flecha con magnitud hacia la clase que recibe.
out (ortput):
* Un parámetro de salida es un pasado desde el objeto que llama (server) de regreso a la clase que llamo (cliente) después de que el método ha sido ejecutado.
* Es representado mediante una flecha con la magnitud apuntando hacia afuera de la clase que recibió.

#### inout (entrada y salida):
* Sirve como entrada y salida se maneja en ambos sentidos
* La representación es doble flecha.
 

#### Ejemplo:

<p align="center">
<img src="https://github.com/josblax/ED/blob/main/imagenes/clase2.jpg" alt="Layout app" width="200" height="200">
</p>

# Introducción a programación orientada a objetos. (OOP)

* Clases
* Objetos

## Paradigmas de programación.
* Procedural
* OOP (Programación Orientada a Objetos)

## OOP.
* Los objetos encapsulan comportamientos y datos.

Los tres principios de la OOP.
* Encapsulación
* Herencia
* Polimorfismo.

## Encapsulación: Miembros de funciones y datos.

* El principio de encapsulación “Unifica” los datos y las funciones en un objeto.
* Es uno de los principios de OOP.

## La encapsulación provee:

### Seguridad:
*Esconde o hace invisible información
* Los datos quedan protegidos del “mundo exterior”, esto se puede definir como cualquier cosa fuera del mismo objeto. Ejemplo, proteger el valor de los saldos de los clientes de una institución bancaria.
* Portabilidad. Tenemos la ventaja de mover nuestro objeto, en nuestros programas, sin cambiar los atributos o funciones que afectan nuestro objeto.
* Una clase representa el “diseño” o “plano” para un objeto. En un ejemplo real, vienen a ser los planos de la casa para construir dichas casas, o el diseño de un circuito eléctrico, que dará vida a nuestro componente electrónico.

El significado de la encapsulación es asegurarse de que los datos "sensibles" estén ocultos a los usuarios. Para lograr esto, debe declarar las variables/atributos de clase como privados (no se puede acceder desde fuera de la clase). Si desea que otros lean o modifiquen el valor de un miembro privado, puede proporcionar métodos públicos get y set.

¿Entonces como establecer los valores de las variables?

La manera correcta de actualizar es a través de un establecer información es a través de tres métodos:

* Constructor. Es un método especial que es invocado automáticamente al tiempo de la creación de un objeto. Es usado para inicializar los elementos de los datos. Tiene el  mismo nombre que la clase. Y se puede usar para inicializar los valores.
* Setter. Es una función que ayuda a establecer el valor de un dato privado. El cuál puede ser modificado mediante este método. La nomenclatura normalmente debe ser la palabra “set” y el nombre del elemento de datos del que se quiere obtener. Normalmente es para establecer información almacenada a través de la misma clase.
* Getter. Es una función que ayuda a obtener el valor de un dato privado. El cuál no puede ser modificado mediante este método. La nomenclatura normalmente debe ser la palabra “get” y el nombre del elemento de datos del que se quiere obtener. Normalmente es para obtener información almacenada, pero no modificarla.


## Herencia:

Es una relación entre dos clases, donde una subclase puede heredar las propiedades y métodos de otra clase, en C se conocen como super clases. Nos ayuda a reutilizar el código y mantener una coherencia lógica entre subclases y superclases para no definir características repetitivas entre diferentes clases, por ejemplo movimiento en muchos tipos de clase es muy común.

En el ejemplo mostrado abajo, la clase Enemigo, representa la superclase, y las clases Orco y Dragos son subclases que comparten atributos en común como tipo y vida.

```C++
class Enemigo
{
public:
  int vida;
  double ataque;
public:
  void informacion()
{
    cout << "Vida: " << vida << "Ataque: " << ataque << endl; 
}
};

```
## Polimorfismo

Polimorfismo permite a objetos de diferentes tipos ser usados como objetos de una base común a una base derivada como puede ser Libro, Musica y Pelicula.
