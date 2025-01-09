# Mapas.

En general los mapas mantienen dos elementos <clave, valor> que nos ayudan a encontrar las frecuencias de repetición de una secuencia, y esto nos puede ayudar a graficar y entender valores y analizarlos.

Como se declaran? 

```C++
map<double, int> frecuencia;
```

Como se alimentan?
```C++
for (int i = 0; i < TAMANO; ++i) {
        frecuencia[numeros[i]]++;
    }
```

## Mapas Ordenados (map)

Características:

* Básado en búsquedas de tipo binario.
* Los elementos estan ordenados de menor a mayor
* Soporta iteraciones

Ventajas:
* Mantiene los elementos en orden.

## Mapas no ordenados (unordered_maps)

Como se declaran? 

```C++
unordered_map<double, int> frecuencia;
```

Como se alimentan?
```C++
for (int i = 0; i < TAMANO; ++i) {
        frecuencia[numeros[i]]++;
    }
```

* Implementación basadas en tablas hash
* Los elementos, como su nombre lo dice se mantienen desordenados.

## Tabla Hash

Es una estructura de datos que permite almacenar y buscar elementos de manera rápida. Mediante una heurística convierte las llaves de una secuencia en indices dentro de un contenedor.

```C++
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
    // Crear una tabla hash (unordered_map)
    unordered_map<int, string> Estudiantes;

    // Insertar elementos en la tabla hash
    Estudiantes[10] = "Maria";
    Estudiantes[20] = "Clara";
    Estudiantes[30] = "Alejandro";
    Estudiantes[40] = "Princesa";

    // Buscar e imprimir un elemento usando su clave (número de identificación)
    int cuenta = 40;
    if (Estudiantes.find(id) != Estudiantes.end()) {
        cout << "Cuenta: " << cuenta << ", Nombre: " << Estudiantes[cuenta] << endl;
    } else {
        cout << "ID no encontrado." << std::endl;
    }

}
```
