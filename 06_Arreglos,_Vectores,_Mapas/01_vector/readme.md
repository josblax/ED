# VECTOR CLASS

**La clase vector es un contenedor secuencial como la clase array.**

## Definicion
 * Consiste en espacios contiguos de memoria como los arreglos.
 * NO está limitado a tamaños fijos, al contrario, se puede cambiar el tamaño dinámicamente como se necesite para cambiar más elementos.
 * No necesitas especificar la capacidad inicial.

___

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
 
## ¿Se puede viajar en el arreglo de otra manera?

Se puede recorrer el arreglo de una manera diferente, usando la asociación llamada “referencia” del arreglo con el operador : (dos puntos)

Ejemplo:

```C++
for (int contador : mivector)
  {
    std::cout << contador << std::endl;
  }
```
Nota: El tipo de variable puede ser cambiado a auto.	

vector es la una clase que contiene el contenedor vector y sus funciones. Se define dentro del <vector> archivo de encabezado. 

# ITERADORES

Las funciones miembro de la clase std::vector proporcionan varias funcionalidades a los contenedores vectoriales. A continuación, se describen algunas funciones miembro de uso común:

## Iteradores:


### begin() – Devuelve un iterador que apunta al primer elemento del vector
### end() – Devuelve un iterador que apunta al elemento teórico que sigue al último elemento del vector

Ejemplo:

```C++
vector<int> v1;

    for (int i = 1; i <= 5; i++)
        v1.push_back(i);

    cout << "Salida de begin hasta end: " << endl;
    for (auto i = v1.begin(); i != v1.end(); ++i)
        cout << *i << " ";
```
___

### rbegin() – Devuelve un iterador que apunta al elemento teórico que sigue al último elemento del vector.
### rend() – Devuelve un iterador inverso que apunta al elemento teórico que precede al primer elemento del vector (considerado como extremo inverso)

Ejemplo: 

```cplusplus

vector<int> v1;

    for (int i = 1; i <= 5; i++)
        v1.push_back(i);

    cout << "Salida de rbegin hasta rend: " << endl;
    for (auto j = v1.rbegin(); j != v1.rend(); ++j)
        cout << *j << " ";

```

___


### cbegin() – Devuelve un iterador constante que apunta al primer elemento del vector.
### cend() – Devuelve un iterador constante que apunta al elemento teórico que sigue al último elemento del vector.

Ejemplo:

```C++
	vector<int> v1;

    for (int i = 1; i <= 5; i++)
        v1.push_back(i);

    
    cout << "Salida de cbegin hasta cend: " << endl;
    for (auto i = v1.cbegin(); i != v1.cend(); ++i)
        cout << *i << " ";

```
___

### crbegin() – Devuelve un iterador inverso constante que apunta al último elemento del vector (inicio inverso). Se mueve del último al primer elemento
### crend() – Devuelve un iterador inverso constante que apunta al elemento teórico que precede al primer elemento del vector (considerado como extremo inverso)

```C++
	vector<int> v1;

    for (int i = 1; i <= 5; i++)
        v1.push_back(i);

    cout << "Salida de crbegin hasta crend : " endl;
    for (auto j = v1.crbegin(); j != v1.crend(); ++j)
        cout << *j << " ";
   
```

___

