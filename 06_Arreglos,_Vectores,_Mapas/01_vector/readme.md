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

# Modificadores

> Para estos ejemplos se usará una función para imprimir los vectores, se anexa el código.

___

Código:

```c++
void imprime(vector<int> v)
{
    for (auto elemento : v)
    {
        cout << elemento << " , ";
    }
    cout << endl;
}
```
___

## assign() – Asigna un nuevo valor a los elementos vectoriales reemplazando los antiguos.
parametros --> void assign(size_type count, const T& value)
```c++
vector<int> v1;
//llenar el vector con 0, cinco veces
v1.assign(5, 0);
imprime(v1);
```
Resultado:

![image](https://github.com/user-attachments/assets/c7c0f9b3-cc3a-44e2-a966-ae93070cef81)

### Ejemplo práctico de la funcion assign()

Ejercicio:

Asignar valores directamente de un arreglo a un vector, total o parcialmente.

```c++
// vectores
 vector<int> v1;
//llenar el vector con el arreglo abajo declarado
 int arreglo[10]{ 45,32,23,79,12,4,67,22,54,10 };

 v1.assign(arreglo, arreglo + 10);
 imprime(v1);
```
Resultado:

![image](https://github.com/user-attachments/assets/f0f66414-9055-4588-b682-0cf110471c90)

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

## insert() – Inserta nuevos elementos después del elemento en la posición especificada.

```c++
// inserta al principio en la posición posterior a 8 en el vector
// formato vector.insert(iterador+posicion,valor)

v1.insert(v1.begin()+7, 33);
imprime(v1);
```
Resultado:

![image](https://github.com/user-attachments/assets/c79f9766-3f70-4ed3-a747-30f78fb4a774)

### Porque tengo que poner la función .begin() a la posición?

> Algunas funciones se valen de iteradores para determinar la posición de inicio y final de un vector, a partir de ahí uno puede posicionar sumando el número de indice donde quieres pocisionar un valor.
>
> Funciones de acceso  son:
> * .begin() Se posiciona al inicio del vector.
> * .end() Se posiciona al final del vector

Ejemplo:

```c++
// El iterador se crea de la siguiente manera, usando la función insert con un iterador, que se //declaran de tipo auto. El resultado es exactamente el mismo.

cout << "usando la funcion insert() e iterador:" << endl;
auto it = v1.begin() + 7;
v1.insert(it, 33);
imprime(v1);
```

___

## erase() – Se utiliza para eliminar elementos de un contenedor de la posición o rango especificado. Tambien usa iteradores, puede usar dos parámetros para eliminar en base un rango y el indice hasta donde quieres.

Ejemplo:

```c++
// borra el primer elemento del vector
v.erase(v.begin());
imprime(v);

```
Respuesta:

![image](https://github.com/user-attachments/assets/11edc638-9ccf-4af3-a88a-280bc0fcee28)


> Que pasa si quiero borrar un rango?
>
> Solo añade un segundo parámetro, con la finalización, esta puede hacerce con un número de posiciones determinado del inicio del vector

Ejemplo:

```c++
// borra del primer elemento al 3ro del vector
v1.erase(v1.begin(), v1.begin()+3);
imprime(v1);
```
___

## swap() – Se utiliza para intercambiar el contenido de un vector con otro vector del mismo tipo. Los tamaños pueden diferir.

Ejemplo:
```c++
// swap entre dos vectores
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    v1.swap(v2);
    imprime(v1);
    imprime(v2);
```

Resultado:

![image](https://github.com/user-attachments/assets/d161ea4b-601b-485b-b7ff-a2c859294e7f)

___

## clear() – Se utiliza para eliminar todos los elementos del contenedor vectorial.

```c++
 // borrar completamente el vector
v1.clear();
imprime(v1);
```
___



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

## Sort

La función std::sort() de la librería <algorithm> reordena los elementos de un vector en orden ascendente, actuando directamente sobre él.

### ¿Cómo se utiliza?

Primero, necesitas incluir la librería adecuada:

```C++

#include <algorithm>
#include <vector>


sort(vector.begin(), vector.end());
```

> vector.begin() → apunta al primer elemento
  vector.end() → apunta al “final” (posición siguiente al último elemento

Si quieres ordenarlo al revéz

sort(notas.begin(), notas.end(), greater<int>());
___
