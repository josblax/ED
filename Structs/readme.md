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
