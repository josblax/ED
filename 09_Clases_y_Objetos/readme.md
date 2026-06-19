
# Objetivos de Aprendizaje

## Objetivo General:

### El alumno construirá arquitecturas de datos fundamentales mediante el paradigma orientado a objetos en C++, para comprender la lógica interna de los componentes, transformaciones y renderizado de los motores de videojuegos modernos.

### Subobjetivos:

* Identificar: Diferenciar la estructura y niveles de acceso entre una struct y una class.

* Aplicar: Implementar el principio de encapsulación mediante constructores, atributos privados y métodos públicos.

* Relacionar: Vincular la lógica de las clases en C++ con el comportamiento de los GameObjects y Components nativos de Unity mediante C#.


## 1. El Molde de los Datos: Clases y Estructuras

### En la animación digital, no lidiamos con variables sueltas. Un personaje de un videojuego no es solo un int vida, es un conjunto complejo de mallas, texturas, coordenadas y comportamientos. Para agrupar todo esto, C++ nos ofrece dos herramientas fundamentales: Estructuras (Structs) y Clases (Classes).

### Ambas funcionan como "planos" o "moldes" para crear objetos en la memoria, pero tienen una diferencia crucial en su nivel de seguridad por defecto.

| Característica | Estructura (`struct`) | Clase (`class`) |
| :--- | :--- | :--- |
| **Acceso por defecto** | **Público:** Cualquiera puede ver y modificar sus datos desde afuera. | **Privado:** Los datos están ocultos y protegidos por defecto. |
| **Uso en C++** | Agrupar datos simples. | Modelar entidades complejas con comportamientos. |
| **Equivalente en Unity (C#)** | `Vector3`, `Color`, `Quaternion` (Datos matemáticos pequeños y rápidos). | `Transform`, `GameObject`, `Renderer` (Sistemas complejos y pesados). |

___

## 2. Anatomía de una Clase (De lo cotidiano a lo técnico)

### Para entender cómo se construye una clase, primero modelaremos algo del mundo real: un estudiante.

### El pilar fundamental aquí es la Encapsulación. Esto significa que protegeremos los datos sensibles (como la calificación) para que nadie pueda alterarlos accidentalmente desde afuera, y solo permitiremos su lectura o modificación a través de canales oficiales.

#### Ejemplo Nivel 1: La Clase Alumno (C++)

**Observa cómo dividimos la clase en secciones específicas:**

```C++
#include <iostream>
#include <string>
using namespace std;

class Alumno {
// 1. ATRIBUTOS (Privados por defecto o por declaración explícita)
// Son los datos internos. Están ocultos y protegidos.
private:
    string nombre;
    int matricula;
    float calificacion;

// 2. MÉTODOS Y CONSTRUCTORES (Públicos)
// Son las interfaces mediante las cuales el mundo exterior interactúa con el objeto.
public:
    // A. Constructor: Se ejecuta automáticamente al "nacer" el objeto.
    Alumno(string nom, int mat) {
        nombre = nom;
        matricula = mat;
        calificacion = 0.0f; // Valor por defecto
    }

    // B. Setter: Función para modificar un dato de forma segura y controlada.
    void setCalificacion(float nuevaCalificacion) {
        if (nuevaCalificacion >= 0 && nuevaCalificacion <= 10) {
            calificacion = nuevaCalificacion;
        } else {
            cout << "Error: Calificación inválida." << endl;
        }
    }

    // C. Getter: Función para leer un dato sin poder modificarlo.
    float getCalificacion() {
        return calificacion;
    }

    // D. Función / Comportamiento: Acciones que el objeto puede realizar.
    void mostrarDatos() {
        cout << "Alumno: " << nombre << " | Matrícula: " << matricula << endl;
    }
};

int main() {
    // Creación de una Instancia (Un objeto real nacido del molde)
    Alumno estudianteAnimacion("Ana", 12345);
    
    // Interactuando a través de los métodos seguros
    estudianteAnimacion.setCalificacion(9.5f);
    estudianteAnimacion.mostrarDatos();

}

```

### Anatomía de una Clase: Entendiendo el Código Paso a Paso
Vamos a analizar el código de nuestra clase Alumno y descubrir por qué cada sección es fundamental en la Programación Orientada a Objetos.

___
A. **La Definición de la Clase (class Alumno { ... };)**

```C++

class Alumno {
// ... contenido de la clase ...
};

```

* **¿Qué es class?** Es la palabra clave que le indica a C++ que estamos creando un nuevo tipo de dato personalizado.

> **Importancia en la POO (Abstracción):** Una clase actúa como un "molde" o un "plano". Define las características y comportamientos generales que tendrán todos los objetos de ese tipo, abstrayendo la complejidad. Es como el diseño de un personaje antes de ponerlo en el nivel de un juego.
___
B. **Modificadores de Acceso (private: y public:)**

```C++
private:
    // ...
public:
    // ...
```

* **¿Qué son private y public?** Palabras clave que determinan quién puede ver y modificar los datos y métodos que están dentro de la clase.

* **Importancia en la POO (Encapsulación)**: Este es el corazón de la POO. Al hacer los datos private, los protegemos (encapsulamos) de modificaciones accidentales o no autorizadas desde fuera de la clase. Todo lo que es public funciona como la "interfaz" oficial mediante la cual el exterior puede interactuar con el objeto de forma segura.
___ 
C. **Los Atributos (Datos Privados)**

```C++
private:
    string nombre;
    int matricula;
    float calificacion;
```

* **¿Qué son?** Las variables que pertenecen a la clase y que guardan el estado de cada objeto individual.

* **Importancia en la POO:** Representan las propiedades de la entidad que estamos modelando. Mantenerlos en private es crucial para que otras partes del programa (u otros desarrolladores) no puedan, por ejemplo, cambiar la calificacion a un valor irreal como 5000 sin pasar por las reglas de la clase.

D. **El Constructor**

```C++
public:
    Alumno(string nom, int mat) {
        nombre = nom;
        matricula = mat;
        calificacion = 0.0f;
    }
```

* **¿Qué es un constructor?** Un método especial que tiene exactamente el mismo nombre que la clase y no devuelve ningún valor. Se ejecuta una única vez: justo en el momento en que el objeto "nace" (es instanciado).

* **Importancia en la POO (Inicialización):** Garantiza que cada objeto empiece su existencia en un estado válido. En Unity, es similar a cuando arrastras un Prefab a la escena: el constructor asegura que tenga sus variables base listas antes de empezar a funcionar.
___

E. **Métodos Getter y Setter**

```C++
// Setter
    void setCalificacion(float nuevaCalificacion) {
        if (nuevaCalificacion >= 0 && nuevaCalificacion <= 10) {
            calificacion = nuevaCalificacion;
        } else {
            cout << "Error: Calificación inválida." << endl;
        }
    }

    // Getter
    float getCalificacion() {
        return calificacion;
    }


// Setter
    void setCalificacion(float nuevaCalificacion) {
        if (nuevaCalificacion >= 0 && nuevaCalificacion <= 10) {
            calificacion = nuevaCalificacion;
        } else {
            cout << "Error: Calificación inválida." << endl;
        }
    }

    // Getter
    float getCalificacion() {
        return calificacion;
    }
```

* **¿Qué son los getters y los setters?** Métodos públicos que actúan como "puertas de acceso" controladas a los atributos privados.

* **Setters (Establecer):** Permiten modificar un atributo, pero a menudo incluyen lógica de validación (como revisar que la calificación esté entre 0 y 10).

* **Getters (Obtener):** Permiten leer el valor de un atributo sin dar permiso para alterarlo directamente.

* **Importancia en la POO:** Son la implementación práctica de la encapsulación. Mantienen los datos seguros mientras permiten una interacción controlada.

F. **Métodos de Comportamiento**

```C++
void mostrarDatos() {
        cout << "Alumno: " << nombre << " | Matrícula: " << matricula << endl;
    }
```

* **¿Qué son?** Funciones que definen lo que el objeto puede hacer.

* **Importancia en la POO:** Un objeto no es solo un contenedor de datos; es una entidad viva que realiza acciones. Estos métodos encapsulan la lógica relacionada con esos datos.

G. **Instanciación en main()**

```C++
int main() {
    Alumno estudianteAnimacion("Ana", 12345);
    
    estudianteAnimacion.setCalificacion(9.5f);
    estudianteAnimacion.mostrarDatos();
    
}
```

* **¿Qué es una instanciación?** El proceso de crear un objeto real y concreto (estudianteAnimacion) a partir del molde abstracto de la clase (Alumno).

* **Importancia en la POO:** Aquí es donde la teoría se convierte en práctica. El "molde" cobra vida y ocupa memoria. Cada instancia es independiente; si creáramos otro alumno (Alumno estudiante2("Juan", 6789);), sus datos y estados estarían completamente separados de los de "Ana".
___

# Practica #4 Clases, Encapsulación y Métodos de Acceso

## A continuación, se presentan 20 ejercicios diseñados para dominar la creación de clases en C++. Para cada ejercicio, deberás seguir los pasos detalladamente y escribir el código correspondiente en tu entorno de desarrollo.

### Ejercicio 1: La Clase Robot
**Enunciado:** Construye un programa en C++ que modele un robot básico de limpieza.
* **Paso 1:** Define una clase llamada `Robot`.
* **Paso 2:** Crea la sección `private:` y declara dos atributos: un `string` llamado `nombre` y un `float` llamado `nivelBateria`.
* **Paso 3:** Crea la sección `public:` y declara un constructor que reciba dos parámetros (un texto y un decimal) para inicializar los atributos `nombre` y `nivelBateria` al momento de "encender" el robot.
* **Paso 4:** Escribe dos métodos *setter* (`setNombre` y `setNivelBateria`). En el setter de batería, asegúrate de que el valor asignado no sea menor a 0 ni mayor a 100.
* **Paso 5:** Escribe dos métodos *getter* (`getNombre` y `getNivelBateria`) que retornen el valor de cada atributo.
* **Paso 6:** En la función `main()`, instancia un objeto llamado `miRobot` pasando valores iniciales a tu constructor (ej. "Astro", 100.0f).
* **Paso 7:** Usa el método *setter* para simular que el robot gastó energía (baja su batería a 45.5f) y usa un `cout` apoyándote de los *getters* para imprimir en consola el estado final del robot.
> **Mini-Rúbrica:** Atributos privados (20%) | Constructor funcional (20%) | Setters con validación básica (20%) | Getters correctos (20%) | Instanciación e impresión en main (20%).

### Ejercicio 2: La Clase Auto
**Enunciado:** Construye un programa en C++ que modele un automóvil.
* **Paso 1:** Define una clase llamada `Auto`.
* **Paso 2:** Crea la sección `private:` y declara dos atributos: un `string` llamado `marca` y un `int` llamado `velocidadActual`.
* **Paso 3:** Crea la sección `public:` y declara un constructor que reciba dos parámetros para inicializar `marca` y `velocidadActual` cuando el auto sale de la agencia.
* **Paso 4:** Escribe dos métodos *setter* (`setMarca` y `setVelocidadActual`). 
* **Paso 5:** Escribe dos métodos *getter* (`getMarca` y `getVelocidadActual`) para poder leer los datos desde fuera.
* **Paso 6:** En la función `main()`, crea un objeto llamado `autoFamiliar` enviando una marca (ej. "Toyota") y una velocidad de 0 al constructor.
* **Paso 7:** Usa `setVelocidadActual` para simular que el auto aceleró a 80 km/h. Luego, usa `cout` y los *getters* para imprimir la marca y la velocidad actual.
> **Mini-Rúbrica:** Atributos privados (20%) | Constructor funcional (20%) | Setters correctos (20%) | Getters correctos (20%) | Instanciación e impresión en main (20%).

### Ejercicio 3: La Clase Docente
**Enunciado:** Construye un programa en C++ que modele el perfil de un profesor.
* **Paso 1:** Define una clase llamada `Docente`.
* **Paso 2:** En la sección `private:`, declara un `string` llamado `materia` y un `int` llamado `aniosExperiencia`.
* **Paso 3:** En la sección `public:`, programa un constructor que reciba la materia que imparte y sus años de experiencia para inicializar el objeto.
* **Paso 4:** Construye dos métodos *setter* (`setMateria` y `setAniosExperiencia`).
* **Paso 5:** Construye dos métodos *getter* (`getMateria` y `getAniosExperiencia`).
* **Paso 6:** En el `main()`, instancia un objeto llamado `profesorProgramacion` con valores iniciales (ej. "Matemáticas", 5).
* **Paso 7:** Utiliza los *setters* para actualizar la materia a "Estructuras de Datos" y la experiencia a 6. Imprime los datos usando `cout` y los *getters*.
> **Mini-Rúbrica:** Atributos privados (20%) | Constructor funcional (20%) | Setters correctos (20%) | Getters correctos (20%) | Instanciación e impresión en main (20%).

### Ejercicio 4: La Clase Mascota
**Enunciado:** Modela los datos de una mascota en una clínica veterinaria.
* **Paso 1:** Define la clase `Mascota`.
* **Paso 2:** En `private:`, declara un `string` para `nombre` y un `int` para `edad`.
* **Paso 3:** En `public:`, crea un constructor que reciba el nombre y la edad de la mascota para asignarlos a los atributos privados.
* **Paso 4:** Desarrolla los métodos *setter* para ambos atributos (`setNombre`, `setEdad`).
* **Paso 5:** Desarrolla los métodos *getter* para ambos atributos (`getNombre`, `getEdad`).
* **Paso 6:** Dentro de `main()`, crea la instancia `miPerro` con nombre "Firulais" y edad 3.
* **Paso 7:** El perro cumplió años. Usa el setter correspondiente para cambiar su edad a 4. Usa `cout` junto a los getters para mostrar el mensaje: "La mascota [Nombre] ahora tiene [Edad] años".
> **Mini-Rúbrica:** Atributos privados (20%) | Constructor funcional (20%) | Setters correctos (20%) | Getters correctos (20%) | Instanciación e impresión en main (20%).

### Ejercicio 5: La Clase Libro
**Enunciado:** Modela un libro para un sistema de biblioteca.
* **Paso 1:** Crea la clase `Libro`.
* **Paso 2:** Declara como privados los atributos: `string titulo` e `int numeroPaginas`.
* **Paso 3:** Crea un constructor público que inicialice ambos atributos recibiendo sus valores como parámetros.
* **Paso 4:** Programa los métodos `setTitulo` y `setNumeroPaginas`. (Asegúrate de que no se puedan ingresar páginas negativas).
* **Paso 5:** Programa los métodos `getTitulo` y `getNumeroPaginas`.
* **Paso 6:** En `main()`, instancia `libroAventura` pasándole el título "El Hobbit" y 300 páginas.
* **Paso 7:** Usa el setter para corregir el número de páginas a 310. Muestra la información final en consola usando `cout` y los getters.
> **Mini-Rúbrica:** Atributos privados (20%) | Constructor funcional (20%) | Setters con validación de páginas (20%) | Getters correctos (20%) | Instanciación e impresión en main (20%).

### Ejercicio 6: La Clase Celular
**Enunciado:** Modela el estado de un teléfono móvil.
* **Paso 1:** Nombra a tu clase `Celular`.
* **Paso 2:** Establece en `private:` los atributos `string modelo` e `int porcentajeBateria`.
* **Paso 3:** Declara el constructor público que reciba el modelo y el porcentaje de batería inicial.
* **Paso 4:** Crea los métodos `setModelo` y `setPorcentajeBateria`.
* **Paso 5:** Crea los métodos `getModelo` y `getPorcentajeBateria`.
* **Paso 6:** En `main()`, instancia `miTelefono` con valores como "Galaxy S23" y batería al 100.
* **Paso 7:** Simula que usaste el teléfono: llama al setter de batería para bajarla al 15%. Imprime una alerta en consola con el modelo y la batería usando los getters.
> **Mini-Rúbrica:** Atributos privados (20%) | Constructor funcional (20%) | Setters correctos (20%) | Getters correctos (20%) | Instanciación e impresión en main (20%).

### Ejercicio 7: La Clase Videojuego
**Enunciado:** Modela un artículo de una tienda de juegos.
* **Paso 1:** Define la clase `Videojuego`.
* **Paso 2:** Protege en la sección `private:` los datos `string titulo` y `float precio`.
* **Paso 3:** Crea el constructor que pida el título y el precio al momento de crear el objeto.
* **Paso 4:** Escribe las funciones de acceso `setTitulo` y `setPrecio`.
* **Paso 5:** Escribe las funciones de lectura `getTitulo` y `getPrecio`.
* **Paso 6:** En el `main()`, crea la instancia `juegoEstreno` con título "Zelda" y precio 1200.50.
* **Paso 7:** El juego tiene descuento. Usa el setter para cambiar el precio a 900.00. Muestra en pantalla el nuevo precio usando los getters.
> **Mini-Rúbrica:** Atributos privados (20%) | Constructor funcional (20%) | Setters correctos (20%) | Getters correctos (20%) | Instanciación e impresión en main (20%).

### Ejercicio 8: La Clase Computadora
**Enunciado:** Modela las especificaciones básicas de una PC.
* **Paso 1:** Define la clase `Computadora`.
* **Paso 2:** En la sección privada, declara `string procesador` e `int memoriaRAM` (en GB).
* **Paso 3:** Programa el constructor público para asignar el procesador y la RAM.
* **Paso 4:** Implementa los métodos `setProcesador` y `setMemoriaRAM`.
* **Paso 5:** Implementa los métodos `getProcesador` y `getMemoriaRAM`.
* **Paso 6:** En `main()`, instancia `miPC` con procesador "Core i5" y 8 GB de RAM.
* **Paso 7:** Simula una actualización de hardware: usa el setter para cambiar la RAM a 16 GB. Imprime las nuevas especificaciones con los getters.
> **Mini-Rúbrica:** Atributos privados (20%) | Constructor funcional (20%) | Setters correctos (20%) | Getters correctos (20%) | Instanciación e impresión en main (20%).

### Ejercicio 9: La Clase Cancion
**Enunciado:** Modela una pista de audio para un reproductor musical.
* **Paso 1:** Crea la clase `Cancion`.
* **Paso 2:** Crea los atributos privados `string nombre` e `int duracionSegundos`.
* **Paso 3:** Crea el constructor que solicite el nombre y los segundos de duración.
* **Paso 4:** Codifica los métodos *setter* para modificar los datos.
* **Paso 5:** Codifica los métodos *getter* para leer los datos.
* **Paso 6:** En el `main()`, crea la instancia `pista1` con "Bohemian Rhapsody" y 354 segundos.
* **Paso 7:** Usa el setter para corregir la duración a 355 segundos y muestra la información en consola usando los getters.
> **Mini-Rúbrica:** Atributos privados (20%) | Constructor funcional (20%) | Setters correctos (20%) | Getters correctos (20%) | Instanciación e impresión en main (20%).

### Ejercicio 10: La Clase Pelicula
**Enunciado:** Modela una película para una plataforma de streaming.
* **Paso 1:** Define la clase `Pelicula`.
* **Paso 2:** Oculta mediante `private:` los atributos `string titulo` e `int anioEstreno`.
* **Paso 3:** Haz un constructor público que reciba y asigne ambos valores.
* **Paso 4:** Escribe las puertas de entrada seguras: `setTitulo` y `setAnioEstreno`.
* **Paso 5:** Escribe las puertas de lectura: `getTitulo` y `getAnioEstreno`.
* **Paso 6:** En `main()`, genera el objeto `peliClasica` con los datos "Matrix" y 1999.
* **Paso 7:** Cambia el título usando el setter a "The Matrix" y muestra el resultado en consola.
> **Mini-Rúbrica:** Atributos privados (20%) | Constructor funcional (20%) | Setters correctos (20%) | Getters correctos (20%) | Instanciación e impresión en main (20%).

### Ejercicio 11: La Clase CuentaBancaria
**Enunciado:** Simula la seguridad de una cuenta de banco básica.
* **Paso 1:** Crea la clase `CuentaBancaria`.
* **Paso 2:** Declara los atributos privados `string titular` y `float saldo`.
* **Paso 3:** Programa un constructor para definir quién es el titular y con qué saldo abre su cuenta.
* **Paso 4:** Crea los métodos `setTitular` y `setSaldo`.
* **Paso 5:** Crea los métodos `getTitular` y `getSaldo`.
* **Paso 6:** Instancia en `main()` el objeto `miCuenta` con tu nombre y un saldo de 500.50.
* **Paso 7:** Simula un depósito: suma 200 al saldo actual y actualízalo usando `setSaldo`. Muestra el balance final con `cout` y los getters.
> **Mini-Rúbrica:** Atributos privados (20%) | Constructor funcional (20%) | Setters correctos (20%) | Getters correctos (20%) | Instanciación e impresión en main (20%).

### Ejercicio 12: La Clase Reloj
**Enunciado:** Modela un reloj digital sencillo.
* **Paso 1:** Nombra la clase `Reloj`.
* **Paso 2:** Protege los datos con `private:` usando `string marca` y `string horaActual` (ej. "14:30").
* **Paso 3:** Inicializa el reloj con un constructor que pida marca y hora.
* **Paso 4:** Genera los métodos de escritura (*setters*).
* **Paso 5:** Genera los métodos de lectura (*getters*).
* **Paso 6:** En la función principal, crea un objeto `relojMano` de la marca "Casio" a las "12:00".
* **Paso 7:** El tiempo avanza; usa el setter de hora para ponerlo en "12:01" e imprime la hora usando getters.
> **Mini-Rúbrica:** Atributos privados (20%) | Constructor funcional (20%) | Setters correctos (20%) | Getters correctos (20%) | Instanciación e impresión en main (20%).

### Ejercicio 13: La Clase Bicicleta
**Enunciado:** Modela una bicicleta en una tienda deportiva.
* **Paso 1:** Define la clase `Bicicleta`.
* **Paso 2:** En la sección privada coloca `string tipo` (ej. Montaña, Ruta) y `int rodada`.
* **Paso 3:** Escribe un constructor público que reciba el tipo y la rodada.
* **Paso 4:** Implementa los setters para poder modificar los datos del objeto.
* **Paso 5:** Implementa los getters para poder leer la información.
* **Paso 6:** En `main()`, crea la instancia `bici1` como tipo "Urbana" rodada 26.
* **Paso 7:** Usa el setter para cambiar la rodada a 29 e imprime en consola el estado final.
> **Mini-Rúbrica:** Atributos privados (20%) | Constructor funcional (20%) | Setters correctos (20%) | Getters correctos (20%) | Instanciación e impresión en main (20%).

### Ejercicio 14: La Clase Avion
**Enunciado:** Modela un avión comercial para una torre de control.
* **Paso 1:** Construye la clase `Avion`.
* **Paso 2:** Oculta la información usando `private: string aerolinea` e `int capacidadPasajeros`.
* **Paso 3:** Define el constructor público para configurar el avión al crearlo.
* **Paso 4:** Programa los métodos setter para los atributos.
* **Paso 5:** Programa los métodos getter para obtener los atributos.
* **Paso 6:** Dentro de `main()`, instancia `vuelo101` de la aerolínea "AeroMexico" con 150 pasajeros.
* **Paso 7:** Modifica la aerolínea usando el setter e imprime los detalles con `cout`.
> **Mini-Rúbrica:** Atributos privados (20%) | Constructor funcional (20%) | Setters correctos (20%) | Getters correctos (20%) | Instanciación e impresión en main (20%).

### Ejercicio 15: La Clase Camara
**Enunciado:** Crea una estructura orientada a objetos para una cámara fotográfica.
* **Paso 1:** Define la clase `Camara`.
* **Paso 2:** Declara como privados `string marca` y `float megapixeles`.
* **Paso 3:** Escribe el constructor que reciba ambos parámetros al nacer el objeto.
* **Paso 4:** Escribe las interfaces seguras de modificación (setters).
* **Paso 5:** Escribe las interfaces seguras de lectura (getters).
* **Paso 6:** En `main()`, instancia `camaraFotos` de marca "Canon" con 18.0f megapixeles.
* **Paso 7:** Cambia los megapixeles a 24.5f con el setter y muestra los datos en consola.
> **Mini-Rúbrica:** Atributos privados (20%) | Constructor funcional (20%) | Setters correctos (20%) | Getters correctos (20%) | Instanciación e impresión en main (20%).

### Ejercicio 16: La Clase Mochila
**Enunciado:** Modela un contenedor básico como una mochila.
* **Paso 1:** Crea la clase `Mochila`.
* **Paso 2:** En la sección privada, añade `string color` y `float capacidadLitros`.
* **Paso 3:** Genera un constructor para dar color y capacidad.
* **Paso 4:** Crea los setters `setColor` y `setCapacidadLitros`.
* **Paso 5:** Crea los getters correspondientes.
* **Paso 6:** Instancia en `main()` el objeto `mochilaEscolar` ("Negra", 20.0f).
* **Paso 7:** Usa el setter para cambiar el color a "Azul" y despliega la información con `cout`.
> **Mini-Rúbrica:** Atributos privados (20%) | Constructor funcional (20%) | Setters correctos (20%) | Getters correctos (20%) | Instanciación e impresión en main (20%).

### Ejercicio 17: La Clase Guitarra
**Enunciado:** Modela un instrumento musical.
* **Paso 1:** Define la clase `Guitarra`.
* **Paso 2:** Usa `private:` para declarar `string tipo` (ej. Acústica, Eléctrica) e `int numeroCuerdas`.
* **Paso 3:** Haz que el constructor reciba y asigne el tipo y el número de cuerdas.
* **Paso 4:** Escribe los métodos para establecer (setters) la información.
* **Paso 5:** Escribe los métodos para obtener (getters) la información.
* **Paso 6:** En `main()`, crea `miGuitarra` como tipo "Acústica" con 6 cuerdas.
* **Paso 7:** Modifica el tipo a "Eléctrica" usando el setter e imprime la información final.
> **Mini-Rúbrica:** Atributos privados (20%) | Constructor funcional (20%) | Setters correctos (20%) | Getters correctos (20%) | Instanciación e impresión en main (20%).

### Ejercicio 18: La Clase Restaurante
**Enunciado:** Modela la calificación de un restaurante en una aplicación de mapas.
* **Paso 1:** Define la clase `Restaurante`.
* **Paso 2:** Protege los datos `string nombre` y `float calificacion` (del 1 al 5).
* **Paso 3:** Escribe un constructor público que pida nombre y calificación inicial.
* **Paso 4:** Crea los métodos *setter* para cambiar ambos valores.
* **Paso 5:** Crea los métodos *getter* para leer ambos valores.
* **Paso 6:** Crea el objeto `localPizzas` ("Pizzeria Luigi", 4.2f) en el `main()`.
* **Paso 7:** Recibió buenas reseñas. Cambia la calificación a 4.8f mediante el setter y muéstrala en consola.
> **Mini-Rúbrica:** Atributos privados (20%) | Constructor funcional (20%) | Setters correctos (20%) | Getters correctos (20%) | Instanciación e impresión en main (20%).

### Ejercicio 19: La Clase Planeta
**Enunciado:** Modela los datos básicos de un cuerpo celeste.
* **Paso 1:** Define la clase `Planeta`.
* **Paso 2:** En la sección privada, escribe `string nombre` y `double distanciaSol` (en millones de km).
* **Paso 3:** Elabora un constructor público que exija el nombre y la distancia.
* **Paso 4:** Redacta las funciones *setter* para editar los datos de forma encapsulada.
* **Paso 5:** Redacta las funciones *getter* para acceder a la información.
* **Paso 6:** En `main()`, instancia el objeto `planetaRojo` ("Marte", 227.9).
* **Paso 7:** Cambia el nombre a "Marte (Ares)" con el setter e imprime los datos completos en consola.
> **Mini-Rúbrica:** Atributos privados (20%) | Constructor funcional (20%) | Setters correctos (20%) | Getters correctos (20%) | Instanciación e impresión en main (20%).

### Ejercicio 20: La Clase Zapato
**Enunciado:** Modela un artículo de inventario de una tienda de calzado.
* **Paso 1:** Crea la clase `Zapato`.
* **Paso 2:** Declara de forma privada `string marca` y `float talla`.
* **Paso 3:** Escribe el constructor que reciba e inicialice ambos valores.
* **Paso 4:** Genera los métodos para establecer los valores (setters).
* **Paso 5:** Genera los métodos para retornar los valores (getters).
* **Paso 6:** En el código principal, instancia el objeto `tenisDeporte` ("Nike", 26.5f).
* **Paso 7:** Actualiza la talla a 27.0f con tu función *setter* y usa *getters* dentro de un `cout` para imprimir el resultado de tu inventario.
> **Mini-Rúbrica:** Atributos privados (20%) | Constructor funcional (20%) | Setters correctos (20%) | Getters correctos (20%) | Instanciación e impresión en main (20%).

# Estructuras (Struct)

C++ tiene dos tipos: tipos devdatos integrados y estructuras. Los tipos de datos son cualquier tipo que constituye el núcleo del lenguaje, como int, float y char. Los tipos estructurad pueden considerarse como tipos definidos por el usuario; Estos son los tipos que creamos declarando clases, estructuras, funciones, etc. Las clases son la base de la programación orientada a objetos.

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
