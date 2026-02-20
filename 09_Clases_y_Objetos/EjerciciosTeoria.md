# Estructuras (structs)

## ¿Qué es un struct? (Fundamentos)
Un struct (abreviatura de structure) es un tipo de dato definido por el usuario que permite agrupar variables de diferentes tipos bajo un mismo nombre. A diferencia de un arreglo (donde todos los datos deben ser del mismo tipo), el struct es una colección heterogénea.

Miembros o campos: Son las variables individuales dentro de la estructura.

Instancia: Es la variable creada a partir del molde del struct.

---

## 2. Conceptos Clave en los Ejercicios

A. Encapsulamiento de Comportamiento (Métodos)
C++ permite que los structs contengan funciones. Esto es el precursor de la Programación Orientada a Objetos (POO).

Ventaja: Los datos y las funciones que los manipulan están en el mismo lugar. Ejemplo: Un Rectangulo tiene su ancho y también su función area().

D. Estructuras Anidadas
El ejercicio de Cumpleaños utiliza una estructura Fecha dentro de una estructura Persona.

Teoría: Esto se conoce como composición. Permite modelar objetos complejos de la vida real de forma jerárquica.


## 3. Resumen de Conceptos Clave

### Conceptos Clave: Estructuras en C++

Esta tabla resume los pilares fundamentales aplicados en los ejercicios de programación, facilitando la transición de la programación procedimental a la Orientada a Objetos (POO).

| Concepto | Definición Técnica | Aplicación en el Código |
| :--- | :--- | :--- |
| **Abstracción** | Proceso de modelar objetos del mundo real simplificándolos a sus atributos y comportamientos esenciales. | Creación de los `structs` como `Estudiante`, `Libro` o `Empleado`. |
| **Encapsulamiento** | Agrupar datos (variables) y lógica (métodos) en una sola unidad funcional. | Inclusión de funciones como `area()` o `distanciaA()` dentro del `struct`. |
| **Composición** | Relación donde una estructura contiene a otra como parte de sus miembros. | El `struct Persona` que incluye un miembro de tipo `Fecha`. |
| **Paso por Referencia** | Técnica para permitir que una función modifique el objeto original accediendo a su dirección de memoria. | Uso del operador `&` en funciones externas como `venderItem(Item &i)`. |
| **Puntero Implícito (`this`)** | Puntero que utiliza C++ internamente en los métodos de un `struct` para referirse a la instancia que invoca la función. | Permite que `rect.area()` sepa que debe usar el `ancho` de ese objeto específico. |
| **Colecciones de Objetos** | Uso de contenedores dinámicos para almacenar múltiples instancias de una estructura. | Implementación de `std::vector<Producto>` para generar una factura. |
| **Búsqueda Lineal** | Algoritmo para encontrar un elemento recorriendo secuencialmente una colección. | Búsqueda de un `Libro` por su título o un `Contacto` por su nombre. |
| **Lógica de Extremos** | Algoritmo para identificar el valor mínimo o máximo dentro de una lista de objetos. | Identificación del estudiante con el `promedio` más alto o el salario más bajo. |
| **Operador Punto (`.`)** | Operador de acceso utilizado para interactuar con los miembros y métodos de una instancia. | Acceso a datos como `punto.x` o ejecución de métodos como `vector.sumar()`. |
| **Persistencia de Estado** | Capacidad de un objeto para mantener y actualizar sus valores internos a través de métodos. | Actualización del `stock` en un `Item` tras una venta o reposición. |

---
> **Nota :** En C++, la principal diferencia entre un `struct` y una `class` es que en el `struct` todos los miembros son **públicos** por defecto, mientras que en la clase son **privados**.

## 4. ¿Por qué aprender esto antes de Clases (POO)?
Porque el struct es el puente. Una vez que entienden que un objeto puede tener datos y funciones, el salto a la Programación Orientada a Objetos es mucho más sencillo: solo les faltará añadir "seguridad" (modificadores como private y public).


## 5. Vectores 

### Acceso por Índice
Cuando declaras vector<Estudiante> lista(3);, le estás diciendo a C++: "Reserva espacio para 3 estudiantes ahora mismo". El vector nace con 3 "casillas" vacías pero ya existentes.

Cómo funciona: Accedes directamente a la posición de memoria: lista[0], lista[1], etc.

Analogía: Es como llegar a un salón de clases que ya tiene 3 pupitres fijos. Tú solo llegas y sientas a los alumnos en ellos.

### Uso de push_back (Crecimiento Dinámico)

Si declaras el vector vacío vector<Estudiante> lista;, el vector nace con tamaño 0. No puedes usar lista[0] porque esa casilla no existe y el programa fallaría (error de segmentation fault).

Cómo funciona: Cada vez que llamas a push_back(objeto), el vector se "estira", crea una nueva casilla al final y copia el objeto ahí.

Analogía: Es como un salón vacío donde cada vez que llega un alumno, tú tienes que traer un pupitre nuevo de la bodega y ponerlo al final.

### Gestión de Vectores en C++: Memoria Estática vs. Dinámica

Al trabajar con la librería `<vector>`, existen dos estrategias para almacenar objetos de una estructura (`struct`). La elección depende de si conocemos el tamaño de la colección de antemano.

| Característica | Acceso por Índice (`lista[i]`) | Uso de `push_back()` |
| :--- | :--- | :--- |
| **Estado Inicial** | El vector nace con un tamaño fijo: `vector<T> v(n);`. | El vector nace vacío: `vector<T> v;`. |
| **Gestión de Memoria** | Reserva todo el espacio necesario en RAM desde el inicio. | Reserva memoria dinámicamente conforme se añaden elementos. |
| **Inserción de Datos** | Se asigna directamente a una "casilla" ya existente. | Se añade un nuevo elemento al final, expandiendo el contenedor. |
| **Sintaxis de Llenado** | `cin >> v[i].miembro;` | `aux.leer(); v.push_back(aux);` |
| **Rendimiento** | **Más rápido:** Evita realojamientos de memoria constantes. | **Flexible:** Ideal cuando el número de datos es desconocido. |
| **Riesgo Común** | Intentar acceder a un índice mayor al declarado (`Out of bounds`). | Intentar usar `v[i]` antes de haber hecho un `push_back`. |
| **Uso Ideal** | Listas con cupo limitado (Ej. "Los 10 mejores alumnos"). | Listas abiertas (Ej. "Carrito de compras" o "Lista de contactos"). |

---

### Ejemplo de Diferencia en Código

#### Con Tamaño Predefinido (Acceso Directo)
```cpp
vector<Estudiante> lista(5); // Crea 5 espacios ya listos
for(int i = 0; i < 5; i++) {
    lista[i].leer(); // Accede al espacio 'i'
}
```

#### Con Crecimiento Dinámico (push_back)
```cpp
vector<Estudiante> lista; // Tamaño 0
for(int i = 0; i < 5; i++) {
    Estudiante aux;
    aux.leer();
    lista.push_back(aux); // Crea el espacio 'i' en este momento
}
```


# Guía de Errores Comunes: Estructuras en C++

## 1. El punto y coma olvidado (;)
Es el error número uno. En C++, después de cerrar la llave de un struct, debe ir un punto y coma. De lo contrario, el compilador pensará que estás intentando declarar una variable de ese tipo de forma inmediata.

```cpp
struct Estudiante {
    string nombre;
    float promedio;
} // <--- ¡ERROR! Falta el ;
```
Error del compilador: expected ';' after struct definition.

## 2. El "Salto" del getline (Buffer Sucio)

Cuando usas cin >> para leer un número y luego getline() para leer un texto con espacios (como el título de un libro), el programa parece saltarse la lectura del texto.

Por qué ocurre: cin >> deja el carácter de "Enter" (\n) en el buffer. getline lo lee inmediatamente y piensa que terminaste.

Solución: Usar cin.ignore() antes del getline.

```cpp
cin >> edad;
cin.ignore(); // Limpia el rastro del Enter
getline(cin, nombreCompleto);
```

## 3. El error del "Case-Sensitive" en Métodos

Si defines una función dentro del struct, debes llamarla exactamente igual. Un error de dedo en una mayúscula o una letra hará que el struct no reconozca el miembro.

```cpp
struct Punto {
    void mostrarDato();
};

// ... en el main ...
p.mostrardato(); // ERROR: C++ distingue entre mayúsculas y minúsculas.
```

## 4. Comparar Estructuras Completas

C++ no sabe cómo comparar dos objetos completos por sí solo. No puedes hacer if (estudiante1 > estudiante2).

Solución: Debes comparar el miembro específico que te interesa (el promedio, el sueldo, la edad).

```cpp
if (e1.promedio > e2.promedio) // Correcto
if (e1 > e2) // ERROR: El compilador no sabe qué comparar.
```

## 5. Acceso a Miembros Inexistentes

Intentar usar una variable que no definiste dentro del molde del struct.

```cpp
struct Libro { string titulo; };

Libro miLibro;
miLibro.autor = "Cervantes"; // ERROR: 'autor' no existe en la estructura Libro.
```

## 6. Olvidar el Ámbito (Scope) en el Switch

Cuando declaras variables (como un vector o un struct) dentro de un case de un switch, C++ puede confundirse sobre dónde empieza y termina esa variable.

> Solución: Siempre encierra el código de cada case entre llaves { }.

```cpp
case 1: { // Abrir llaves para crear un ámbito local
    Estudiante e;
    // ... código ...
    break;
} // Cerrar llaves
```

## 7. Paso por Valor en Funciones Externas

Si creas una función fuera del struct para modificarlo (como reponerStock) y olvidas el símbolo &, los cambios solo ocurrirán en una copia temporal.

```cpp
void vender(Item it) { // Sin el &, esto es una copia
    it.stock -= 10; 
} // Al salir de aquí, ¡el stock original sigue igual!
```

## 8. Inicialización de Miembros

A diferencia de otros lenguajes, si no inicializas una variable numérica dentro de un struct, esta contendrá "basura" (un número aleatorio que quedó en la memoria).

Buen hábito: Siempre inicializa tus variables a 0 o valores vacíos.

```cpp
struct Producto {
    double precio = 0.0;
    int cantidad = 0;
};
```
