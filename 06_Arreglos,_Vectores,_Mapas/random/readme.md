# Numeros enteros aleatorios (random)


# Establecer una semilla.

* std::srand: Función generadora de números aleatorios y es parte de la biblioteca estandar (std) y esta definida en la biblioteca <cstdlib>
* std::time(nullptr). Obtiene el tiempo actual en segundos desde la fecha inicial 1 de enero 1970, y esta integrada en la librería <ctime>
* nullptr. Le indica al programa que este tiempo no se guardará en ningún sitio de memoria.

```c++
// Establecer una semilla en base al numero aleatorio
srand(time(nullptr));
```
# Como obtengo el número?
```c++
int num_aleatorio = rand()%10001;
cout << "Número aleatorio entre 0 y 10000: " << numero_aleatorio << endl;
```

# Numeros fraccionarios aleatorios.

# Establecer una semilla.

* std::srand: Función generadora de números aleatorios y es parte de la biblioteca estandar (std) y esta definida en la biblioteca <cstdlib>
* std::time(nullptr). Obtiene el tiempo actual en segundos desde la fecha inicial 1 de enero 1970, y esta integrada en la librería <ctime>
* nullptr. Le indica al programa que este tiempo no se guardará en ningún sitio de memoria.

```c++
// Establecer una semilla en base al numero aleatorio
srand(time(nullptr));
```
## Crear un generador de números aleatorios basado en el tiempo actual

* random_device. Es una clase que nos ayuda a crear números verdaderamente aleatorios o impredecibles, es parte de la biblioteca random

```c++
// Crear un generador de números aleatorios basado en el tiempo actual
random_device rd; // Dispositivo de entropía
mt19937 gen(rd()); // Generador de número aleatorio Mersenne Twister

```
