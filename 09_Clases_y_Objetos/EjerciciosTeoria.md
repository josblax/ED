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

# Guía de Errores Comunes: Estructuras en C++

## 1. El punto y coma olvidado (;)
Es el error número uno. En C++, después de cerrar la llave de un struct, debe ir un punto y coma. De lo contrario, el compilador pensará que estás intentando declarar una variable de ese tipo de forma inmediata.

```
struct Estudiante {
    string nombre;
    float promedio;
} // <--- ¡ERROR! Falta el ;
```
