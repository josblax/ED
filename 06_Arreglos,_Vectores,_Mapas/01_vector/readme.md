# VECTOR CLASS

**La clase vector es un contenedor secuencial como la clase array.**

## Definicion
 * Consiste en espacios contiguos de memoria como los arreglos.
 * NO está limitado a tamaños fijos, al contrario, se puede cambiar el tamaño dinámicamente como se necesite para cambiar más elementos.
 * No necesitas especificar la capacidad inicial.

___

## Ventajas

* Tamaño dinámico: puedes agregar o quitar elementos
* Métodos útiles como: .size(), .push_back(), at()
* Compatible con algoritmos STL
* Maneja memoria automáticamente

## Desventajas

* Ligeramente más lento que los arreglos fijos
* Requiere incluir la librería <vector>
* Puede tener overhead de memoria si se redimensiona frecuentemente


## ¿Se anexa alguna librería?

```cplusplus

#include <vector>

```
___

## ¿Como se declara?

```cplusplus

vector <tipo_variable > nombre_vector;

```

Ejemplo:

```C++
vector<int> mivector;
```
___

## ¿Como se añaden elementos?

Se usa la función .push_back(elemento);
	
Ejemplo:

```C++
mivector.push_back(3);

//¿Como se imprime?

for (int i=0; i <=mivector.size(); i++)
{
	cout << mivector[i]<< endl;
}
```
___
 
## ¿Se puede viajar en el vector de otra manera?

Se puede recorrer el arreglo de una manera diferente, usando la asociación llamada “referencia” del arreglo con el operador : (dos puntos)

Ejemplo:

```C++
for (int elemento : mivector)
  {
    std::cout << elemento << std::endl;
  }
```
Nota: El tipo de variable puede ser cambiado a auto.	

vector es la una clase que contiene el contenedor vector y sus funciones. Se define dentro del <vector> archivo de encabezado. 

___

___

## push_back() – Inserta los elementos en un al final del vector.

```c++
// vectores
// formato nombre_vector.push_back(elemento_a_añadir);
vector<int> v1;
v1.push_back(45);
v1.push_back(32);
v1.push_back(23);
v1.push_back(79);
v1.push_back(12);
v1.push_back(4);
v1.push_back(67);
v1.push_back(22);
v1.push_back(54);
v1.push_back(10);
 imprime(v1);
```
Resultado:

![image](https://github.com/user-attachments/assets/f0f66414-9055-4588-b682-0cf110471c90)

___

## pop_back() – Se utiliza para eliminar elementos de un vector desde la parte posterior.

Ejemplo:

```c++
// formato nombre_vector.pop_back() , no lleva ningún parámetro en la función.

vector<int> v1;
v1.push_back(45);
v1.push_back(32);
v1.push_back(23);
v1.push_back(79);
v1.push_back(12);
v1.push_back(4);
v1.push_back(67);
v1.push_back(22);
v1.push_back(54);
v1.push_back(10);
imprime(v1);
v1.pop_back();
imprime(v1);
```
Resultado:

![image](https://github.com/user-attachments/assets/79f5658d-ace1-4874-83ad-2d025e278e89)

___

# Ejemplos

## Ejemplo 1: Declaración Básica y Agregado de Elementos (Línea de Tiempo de Keyframes)


### [Que es un keyframe?](https://youtu.be/seAx5WnCZPI?si=LEw118M-qgTvz0kf)

### Contexto en Animación: Una línea de tiempo de animación (Timeline) no siempre tiene eventos en cada fotograma. A veces solo necesitamos guardar los fotogramas clave (Keyframes) donde ocurre un cambio de pose.

```cplusplus

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 1. Declaración: Creamos un vector vacío para guardar enteros (fotogramas)
    vector<int> fotogramasClave;

    // 2. Inserción: Agregamos los fotogramas donde el personaje cambia de pose
    fotogramasClave.push_back(1);   // Pose inicial
    fotogramasClave.push_back(12);  // Salto
    fotogramasClave.push_back(24);  // Aterrizaje

    // 3. Salida Secuencial: Imprimimos el tamaño dinámico del vector
    cout << "Total de keyframes registrados: " << fotogramasClave.size() << endl;

}


```

### Explicación:
​
#### Sintaxis y Contenedores: 

* Usamos #include <vector> para importar la librería.
* Al declarar vector<int>, le decimos al compilador el tipo exacto de variable que almacenará.
​
#### Comportamiento Dinámico:

* A diferencia de un arreglo estático int arr[3], el vector nace vacío y crece dinámicamente usando la palabra reservada push_back().

___

## Ejemplo 2 Eliminación Dinámica (Gestión de un Sistema de Partículas)

### Contexto en Animación: Al crear un efecto visual (como fuego o humo), las partículas nacen (se agregan) y luego mueren cuando su opacidad llega a cero para liberar memoria.

```cplusplus

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Vector pre-llenado con la vida útil (opacidad) de 3 partículas
    vector<float> opacidadParticulas = {1.0f, 0.5f, 0.0f}; 

    // Estructura de Decisión: Verificamos si la última partícula "murió"
    if (opacidadParticulas.back() == 0.0f) {
        // Eliminamos la partícula muerta del final de la lista
        opacidadParticulas.pop_back(); 
        cout << "Particula eliminada. Memoria liberada." << endl;
    }

    cout << "Particulas activas en pantalla: " << opacidadParticulas.size() << endl;


}

```

### Explicación:
​
#### Tipos de Variables: 
* Usamos float porque la opacidad (Alpha) en la programación gráfica se suele medir con números fraccionarios de precisión simple (de 0.0 a 1.0) para mantener un bajo peso en memoria.
​
#### Operadores y Decisión: 
* Utilizamos el operador lógico de igualdad absoluta == dentro de la estructura condicional if para ramificar el código. La función pop_back() se encarga de destruir el último elemento dinámicamente.


___

## Ejemplo 3 : Ciclos y Mutación de Datos (Traslación de Vértices 2D)

### ​Contexto en Animación: Para mover una figura plana (un cuadrado, por ejemplo) a través de la pantalla, el motor necesita recorrer todos sus vértices y sumarles una velocidad (offset).

```cplusplus

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Coordenadas X locales de los vértices de un Sprite
    vector<float> verticesX = {10.5f, 20.5f, 20.5f, 10.5f};
    float velocidad = 5.0f;

    // Estructura Iterativa: Recorremos el vector para aplicar la traslación
    cout << "Nuevas posiciones en pantalla:" << endl;
    for (int i = 0; i < verticesX.size(); i++) {
        verticesX[i] += velocidad; // Operador de asignación compuesta
        cout << "Vertice " << i << ": " << verticesX[i] << "px" << endl;
    }

}

```

### Explicación:
​
#### Estructuras Iterativas: 
* Introducimos el ciclo for. Es un ciclo controlado ideal para recorrer rangos finitos (como los elementos de nuestro vector).

#### Operadores: 
* El operador de asignación compuesta += toma el valor de la coordenada local, le suma la velocidad y lo guarda en la misma variable de memoria virtual, actualizando la coordenada espacial absoluta de nuestro gráfico.


___


# P2 Ejercicios

## 1. Colisión contra un Muro (Cambio de Color)

### Contexto en Unity: Cuando un objeto toca un Collider, cambia su material o color (ej. de verde a rojo para indicar daño).
​
#### Escribe un programa que utilice un ciclo para evaluar la posición horizontal de tres objetos interactivos. Si la posición de un objeto es mayor o igual al límite físico de un muro, su color correspondiente debe cambiar de "Verde" a "Rojo".
​
### Convención de Variables a usar:

* vector<float> posicionesX {2.0f, 8.5f, 12.0f}
* vector<string> colores {"Verde", "Verde", "Verde"}
* float limiteMuro 10.0f
​
### Lógica en C++: Usamos dos vectores paralelos: uno para la posición en X y otro para el color. Con un ciclo for, revisamos las posiciones. Si la posición es mayor o igual al límite del muro (decisión if), cambiamos el color en el mismo índice. (if (posicionesX[i] >= limiteMuro) colores[i] = "Rojo";).

___

## 2. Gravedad y Aterrizaje (Límites de Suelo)
​
### Contexto en Unity: Un personaje con Rigidbody cae hasta que colisiona con el suelo, deteniendo su velocidad en Y.
​
### Simula la caída libre de tres objetos. Recorre sus alturas y réstales una fuerza de gravedad constante. Si el resultado provoca que un objeto traspase el nivel del piso (valores menores a cero), fuerza matemáticamente su posición para que aterrice exactamente en cero.
​
### Convención de Variables a usar:
* vector<float> posicionesY {10.0f, 1.5f, -2.0f}
* float gravedad 2.0f
​
### Lógica en C++: Recorremos un vector de posiciones en el eje Y restando un valor de "gravedad". Si la posición baja de cero (el suelo), la forzamos a quedarse en cero para evitar que el objeto caiga infinitamente al vacío. (if (posicionesY[i] <= 0.0f) posicionesY[i] = 0.0f;).


___

## 3. Zonas de Aceleración (Speed Boost)
​

### Contexto en Unity: Un vehículo entra en un área (Trigger) que duplica su velocidad, como en los juegos de carreras.
​
### Desarrolla un algoritmo que analice la ubicación espacial de un grupo de vehículos. Si un vehículo se encuentra dentro de un rango numérico estrictamente delimitado (entre un inicio y un fin), su velocidad actual debe multiplicarse por dos.
​
### Convención de Variables a usar:

* vector<float> posicionesX {5.0f, 15.0f, 25.0f}
* vector<float> velocidades {10.0f, 10.0f, 10.0f}
* float inicioZona 10.0f
* float finZona 20.0f
​
### Lógica en C++: Evaluamos si la posición actual de un vehículo está dentro de un rango numérico específico usando el operador lógico &&. Si es verdadero, multiplicamos su velocidad en el vector paralelo. (if (posicionesX[i] > inicioZona && posicionesX[i] < finZona) velocidades[i] *= 2.0f;).


___

## 4. Recolección de Monedas (Destrucción Lógica)
​
### Contexto en Unity: El jugador toca una moneda, esta desaparece de la escena y el contador de puntos aumenta.
​
### Implementa un sistema de recolección utilizando valores booleanos. Evalúa una lista de monedas; si el sistema detecta que una moneda sigue activa, debe cambiar su estado a inactiva y aumentar el contador global de puntaje del jugador.
​
### Convención de Variables a usar:

* vector<bool> monedasActivas {true, true, true}
* int puntaje 0
​
### Lógica en C++: Usamos un vector de booleanos para representar si las monedas están activas. Si el jugador pasa por el índice de una moneda activa, la vuelve falsa y suma puntos. (if (monedasActivas[i] == true) { monedasActivas[i] = false; puntaje++; }).

___

## 5. Efecto Pac-Man (Teletransporte en Bordes)
​
### Contexto en Unity: Cuando un personaje sale por el borde derecho de la pantalla, reaparece inmediatamente en el borde izquierdo.
​
### Crea una rutina que limite el avance infinito de los personajes. Compara la posición horizontal de cada uno; si esta sobrepasa el ancho total de la pantalla, reinicia su coordenada inmediatamente a cero para simular el teletransporte.
​
### Convención de Variables a usar:

* vector<float> posicionesX {100.0f, 790.0f, 850.0f}
* float anchoPantalla 800.0f
​
### Lógica en C++: Durante el ciclo de movimiento, comprobamos si la posición superó el límite máximo de la pantalla. De ser así, reiniciamos la variable a cero. (if (posicionesX[i] > anchoPantalla) posicionesX[i] = 0.0f;).

___

## 6. Animación de Crecimiento (Escalar hasta un Tope)
​
[Video sobre Particulas en Unity](https://www.youtube.com/watch?v=oPUxv-zClNA)

### Contexto en Unity: Una explosión o un escudo mágico crece gradualmente pero debe detenerse en un tamaño máximo para no cubrir toda la cámara.
​
### Codifica la expansión de diferentes efectos visuales. Suma gradualmente una velocidad de crecimiento a la escala actual de los objetos, asegurándote mediante una barrera de decisión que ningún objeto rebase la escala máxima permitida en el diseño del juego.
​
### Convención de Variables a usar:

* vector<float> escalas {1.0f, 2.8f, 5.0f}
* float escalaMaxima 0.5f
* float velocidadCrecimiento 3.0f
​
### Lógica en C++: Incrementamos el valor dentro del vector de escalas, pero usamos un if para asegurarnos de que la suma solo ocurra mientras el tamaño sea menor al límite permitido. (if (escalas[i] < escalaMaxima) escalas[i] += velocidadCrecimiento;).

___

## 7. Parpadeo de Luces (Toggle Boolean)
​
[Video sobre parpadeo de luces en Unity](https://www.youtube.com/watch?v=5K2uG7bVJAQ)

### Contexto en Unity: Luces de neón o faroles parpadeantes en un escenario nocturno que se encienden y apagan en cada fotograma.
​
### Diseña un sistema intermitente para elementos ambientales. Recorre una lista que controla el estado de encendido de varias luces e invierte su valor lógico en cada iteración para lograr un efecto de alternancia. Imprime el resultado.
​
### Convención de Variables a usar:

* vector<bool> lucesEncendidas {true, false, true}
​
### Lógica en C++: Recorremos un vector de booleanos e invertimos su estado actual usando el operador lógico NOT (!). (lucesEncendidas[i] = !lucesEncendidas[i];) 

___

## 8. Desgaste de Barra de Vida (Clamp)

### Contexto en Unity: Un enemigo recibe daño por fuego prolongado. Su vida baja, pero la interfaz gráfica (UI) no debe mostrar números negativos.
​
### Simula el desgaste de salud de un escuadrón enemigo aplicando una penalización de daño constante. Para evitar el colapso visual de las barras de salud, verifica que la vida resultante nunca descienda por debajo de cero; si lo hace, ajústala al valor nulo.
​
### Convención de Variables a usar:

* vector<float> vidaEnemigos {50.0f, 10.0f, 5.0f}
* float danoFuego 15.0f
​
### Lógica en C++: Restamos el daño a un vector de salud. Si la salud resultante es menor a cero, la fijamos en cero (comportamiento clásico de la función Clamp en motores gráficos). (if (saludEnemigos[i] < 0) saludEnemigos[i] = 0;).

___

## 9. Desactivar Objetos Lejanos (Culling Básico)
​
### Contexto en Unity: Para ahorrar memoria, los objetos que están demasiado lejos de la cámara se vuelven invisibles o inactivos.

[Ocluding Basico](https://www.youtube.com/watch?v=7bZ4OIA0wRQ)
​
### Optimiza los recursos del motor gráfico apagando los elementos lejanos. Evalúa la profundidad espacial (coordenada Z) de la lista de objetos; aquellos cuya distancia supere la capacidad de visión máxima de la cámara deberán cambiar su estado a ocultos.
​
### Convención de Variables a usar:

* vector<float> profundidadZ {20.0f, 150.0f, 80.0f}
* vector<bool> esVisible {true, true, true}
* float distanciaMaxima 100.0f
​
### Lógica en C++: Comparamos la posición Z de varios elementos. Si la distancia supera nuestro umbral de visión, marcamos un vector paralelo de visibilidad como falso. (if (profundidadZ[i] > distanciaMaxima) esVisible[i] = false;).

___

## 10. Seleccionar un Objeto (Hover)

### Contexto en Unity: El jugador pasa el mouse sobre un objeto del inventario y este se resalta, mientras los demás vuelven a su estado normal.
​
### Modela la selección dinámica en un menú de interfaz de usuario. Al recorrer la lista de botones disponibles, verifica si el iterador actual coincide con el índice que señala el cursor del usuario. Si coinciden, sobrescribe el estado del botón a "Resaltado"; de lo contrario, asegúrate de que permanezca o vuelva a su estado "Normal".
​
### Convención de Variables a usar:

* vector<string> estados {"Normal", "Normal", "Normal", "Normal"}
* int indiceMouse 2
​
### Lógica en C++: En un ciclo, comparamos el índice actual (que representaría la posición del mouse) con el vector de IDs. Si coinciden, marcamos "Resaltado", y si no (usando else), marcamos "Normal". (if (i == indiceMouse) estados[i] = "Resaltado"; else estados[i] = "Normal";).
