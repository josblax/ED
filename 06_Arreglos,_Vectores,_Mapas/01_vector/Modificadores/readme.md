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

