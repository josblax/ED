# ITERADORES

Las funciones miembro de la clase std::vector proporcionan varias funcionalidades a los contenedores vectoriales. A continuación, se describen algunas funciones miembro de uso común:

Iteradores:
* begin() – Devuelve un iterador que apunta al primer elemento del vector
* end() – Devuelve un iterador que apunta al elemento teórico que sigue al último elemento del vector
* rbegin() – Devuelve un iterador que apunta al elemento teórico que sigue al último elemento del vector.
* rend() – Devuelve un iterador inverso que apunta al elemento teórico que precede al primer elemento del vector (considerado como extremo inverso)
* cbegin() – Devuelve un iterador constante que apunta al primer elemento del vector.
* cend() – Devuelve un iterador constante que apunta al elemento teórico que sigue al último elemento del vector.
* crbegin() – Devuelve un iterador inverso constante que apunta al último elemento del vector (inicio inverso). Se mueve del último al primer elemento
* crend() – Devuelve un iterador inverso constante que apunta al elemento teórico que precede al primer elemento del vector (considerado como extremo inverso)


```
vector<int> v1;

    for (int i = 1; i <= 5; i++)
        v1.push_back(i);

    cout << "Salida de begin hasta end: " << endl;
    for (auto i = v1.begin(); i != v1.end(); ++i)
        cout << *i << " ";

    cout << "Salida de cbegin hasta cend: " << endl;
    for (auto i = v1.cbegin(); i != v1.cend(); ++i)
        cout << *i << " ";

    cout << "Salida de rbegin hasta rend: " << endl;
    for (auto j = v1.rbegin(); j != v1.rend(); ++j)
        cout << *j << " ";

    cout << "Salida de crbegin hasta crend : " endl;
    for (auto j = v1.crbegin(); j != v1.crend(); ++j)
        cout << *j << " ";
}

```
 
