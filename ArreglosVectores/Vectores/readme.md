# Vectores

## VECTOR CLASS

 ## La clase vector es un contenedor secuencial como la clase array.

 * Consiste en espacios contiguos de memoria como los arreglos.
 * NO está limitado a tamaños fijos, al contrario, se puede cambiar el tamaño dinámicamente como se necesite para cambiar más elementos.
 * No necesitas especificar la capacidad inicial.

¿Se anexa alguna librería?

#include <vector>

¿Como se declara?

vector <tipo_variable > nombre_vector;

```C++
vector<int> mivector;
```
vector<int> mivector;

¿Como se añaden elementos?

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
 
¿Se puede viajar en el arreglo de otra manera?

Se puede recorrer el arreglo de una manera diferente, usando la asociación llamada “referencia” del arreglo con el operador : (dos puntos)
```C++
for (int contador : mivector)
  {
    std::cout << contador << std::endl;
  }
```
Nota: El tipo de variable puede ser cambiado a auto.	

vector es la una clase que contiene el contenedor vector y sus funciones. Se define dentro del <vector> archivo de encabezado. 


