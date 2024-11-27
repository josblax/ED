# Introducción

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
```

## Como se crea una instancia de mi estructura Alumno?

### Definición una instancia 
Es un objeto específico que se crea a partir de una clase. Esta ocupa memoria durante la ejecución de un programa y tiene su propio estado y comportamiento. La palabra instancia indica la relación 
de un objeto con su clase.

## Ejemplo:
```C++
int main()
{
    // crear una instancia de la estructura alumno
    Alumno jose;
    // Agregar datos a la instancia jose
    jose.nombre = "Jose Luis";
    jose.ap = "Blancas";
    jose.am = "Ruiz";
    jose.cuenta = 123456;
// imprimir los valores de la instancia jose
    cout << "nombre : " << jose.nombre;
    cout << "apellido paterno : " << jose.ap;
    cout << "apellido materno : " << jose.am;
    cout << "matricula : " << jose.cuenta;
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

# Ejercicio Integral. Implementar una función que añada de alta nuevos alumnos pasando como parámetro un nuevo objeto.

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

## Definición de Variables: Se declaran variables para almacenar los datos del alumno:

	n1: nombre del alumno.

	ap1: apellido paterno del alumno.

	am1: apellido materno del alumno.

	cuenta1: número de cuenta del alumno.

	mat: materia que cursa el alumno.

	cal: calificación obtenida por el alumno.

* Creación de un Objeto Alumno: Se declara un objeto obj1 de la clase Alumno.

## Entrada de Datos:

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

# Diferencia Clases versus Structs.

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
