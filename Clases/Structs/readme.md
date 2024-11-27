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

