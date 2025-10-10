tabla de las clases más importantes de la biblioteca `chrono` de C++.

-----

### Tabla de clases de la biblioteca `chrono` de C++

| Clase | Descripción | Ejemplo |
| :--- | :--- | :--- |
| `std::chrono::system_clock` | Proporciona la hora del sistema en tiempo real. Es el reloj más común para obtener la hora actual. Su tiempo puede ajustarse por el usuario del sistema. | `auto now = std::chrono::system_clock::now();` <br> `std::time_t now_c = std::chrono::system_clock::to_time_t(now);` |
| `std::chrono::steady_clock` | Representa un reloj monotónico que nunca va hacia atrás. Se utiliza principalmente para medir intervalos de tiempo con precisión, como en **benchmarking** o cronómetros, ya que no se ve afectado por cambios en la hora del sistema. | `auto start = std::chrono::steady_clock::now();` <br> `// Código a medir` <br> `auto end = std::chrono::steady_clock::now();` <br> `auto diff = end - start;` |
| `std::chrono::high_resolution_clock` | Representa el reloj con la menor duración de tick disponible en el sistema. A menudo es un alias para `system_clock` o `steady_clock`. Es ideal para obtener la máxima precisión posible en mediciones. | `auto t1 = std::chrono::high_resolution_clock::now();` <br> `// Código a medir` <br> `auto t2 = std::chrono::high_resolution_clock::now();` |
| `std::chrono::duration` | Una clase de plantilla que representa una duración de tiempo, como horas, minutos o segundos. Se construye con un conteo (`count`) y un periodo (`period`). | `std::chrono::duration<double, std::ratio<60>> one_min(1.0);` <br> `std::chrono::seconds s(10);` |
| `std::chrono::time_point` | Una clase de plantilla que representa un punto en el tiempo, como el 1 de enero de 2025. Un `time_point` se crea a partir de un reloj y una duración. | `auto now = std::chrono::steady_clock::now();` <br> `std::chrono::time_point<std::chrono::steady_clock> future = now + std::chrono::seconds(10);` |

-----

### Ejemplo de uso práctico de `chrono`

```cpp
#include <iostream>
#include <chrono>
#include <thread>

int main() {
    // Medir el tiempo de ejecución de un bloque de código
    auto start_time = std::chrono::high_resolution_clock::now();

    // Simular una tarea que toma tiempo
    std::this_thread::sleep_for(std::chrono::seconds(2));

    auto end_time = std::chrono::high_resolution_clock::now();

    // Calcular la duración en milisegundos
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);

    std::cout << "La tarea tardó: " << duration.count() << " milisegundos." << std::endl;

}
```
