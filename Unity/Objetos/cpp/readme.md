```C++
#include <iostream>
#include <thread>
#include <chrono>
#include <string>

// 1. CREAMOS NUESTRA ESTRUCTURA VECTOR3 MATEMÁTICA
struct Vector3 {
    float x, y, z;

    // Constructor
    Vector3(float _x, float _y, float _z) {
        x = _x; y = _y; z = _z;
    }

    // Direcciones Estáticas (Tal como en Unity)
    static Vector3 right()   { return Vector3(1.0f, 0.0f, 0.0f); }
    static Vector3 left()    { return Vector3(-1.0f, 0.0f, 0.0f); }
    static Vector3 up()      { return Vector3(0.0f, 1.0f, 0.0f); }
    static Vector3 down()    { return Vector3(0.0f, -1.0f, 0.0f); }
    static Vector3 forward() { return Vector3(0.0f, 0.0f, 1.0f); }
    static Vector3 back()    { return Vector3(0.0f, 0.0f, -1.0f); }

    // SOBRECARGA DE OPERADOR: Le enseñamos a C++ a multiplicar un Vector3 por un número
    Vector3 operator*(float escalar) {
        return Vector3(x * escalar, y * escalar, z * escalar);
    }
};

// 2. NUESTRO OBJETO 3D (El Game Object)
class Objeto3D {
public:
    std::string nombre;
    Vector3 rotacionActual; // Ahora usamos Vector3 para guardar los grados

    Objeto3D(std::string n) : rotacionActual(0.0f, 0.0f, 0.0f) {
        nombre = n;
    }
        
    // 3. LA FUNCIÓN ROTATE UNIVERSAL (Como transform.Rotate)
    // Recibe el eje (ej. Vector3.up) y la velocidad
    void rotar(Vector3 ejeDeseado, float velocidad, float delta_time) {
        // Multiplicamos el eje por la velocidad y el tiempo
        rotacionActual.x += ejeDeseado.x * velocidad * delta_time;
        rotacionActual.y += ejeDeseado.y * velocidad * delta_time;
        rotacionActual.z += ejeDeseado.z * velocidad * delta_time;
    }
};

int main() {
    Objeto3D cubo("Cubo de Prueba");
    float velocidad = 90.0f; 
    float delta_time = 1.0f / 60.0f; // 60 FPS

    std::cout << "--- Simulador de Rotacion Estilo Unity ---\n\n";

    // --- CONFIGURACIÓN DE DIRECCIÓN ---
    // ¡AQUÍ PUEDES CAMBIAR EL EJE Y MULTIPLICARLO POR 1 O -1!
    // Prueba cambiarlo a Vector3::right() * -1;
    Vector3 direccionGiro = Vector3::up() * 1.0f; 

    std::cout << "Giro configurado en el eje: (" 
              << direccionGiro.x << ", " 
              << direccionGiro.y << ", " 
              << direccionGiro.z << ")\n\n";

    // El Ciclo de Juego (Game Loop)
    for (int fotograma = 1; fotograma <= 5; ++fotograma) {
        
        // Aplicamos la rotación matemática
        cubo.rotar(direccionGiro, velocidad, delta_time);
        
        // Renderizamos (Imprimimos los datos en consola)
        std::cout << "Frame " << fotograma 
                  << " | Rotacion [ X: " << cubo.rotacionActual.x 
                  << ", Y: " << cubo.rotacionActual.y 
                  << ", Z: " << cubo.rotacionActual.z << " ]\n";
        
        // Pausa simulada
        std::this_thread::sleep_for(std::chrono::milliseconds(16));
    }

    return 0;
}
```
