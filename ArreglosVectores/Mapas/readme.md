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

* Implementación basadas en tablas hash
* Los elementos, como su nombre lo dice se mantienen desordenados.

## Tabla Hash

Es una estructura de datos que permite almacenar y buscar elementos de manera rápida. Mediante una heurística convierte las llaves de una secuencia en indices dentro de un contenedor.

