Elementos de capacidad:

* size() – Devuelve el número de elementos del vector.
* max_size() – Devuelve el número máximo de elementos que puede contener el vector.
* capacity() – Devuelve el tamaño del espacio de almacenamiento asignado actualmente al vector expresado como número de elementos.
* resize(n) – Cambia el tamaño del contenedor para que contenga 'n' elementos.
* empty() – Devuelve si el contenedor está vacío.
* shrink_to_fit() – Reduce la capacidad del contenedor para adaptarse a su tamaño y destruye todos los elementos más allá de la capacidad.
* reserve() – Solicita que la capacidad del vector sea al menos suficiente para contener n elementos.

 ```C++
vector<int> v1;
 
    for (int i = 1; i <= 5; i++)
        v1.push_back(i);
 
    cout << "Tamaño : " << v1.size();
    cout << "\nCapacidad : " << v1.capacity();
    cout << "\nTamaño maximo : " << v1.max_size();
 
    // cambiar el tamaño del vector a 4
    v1.resize(4);
 
    // imprime el tamaño del vector que fue cambiado con la función resize()
    cout << "\nTamaño : " << v1.size();
 
    // checa si el vector es vacío o no
    if (v1.empty() == false)
        cout << "El vector no esta vacío" << endl;
    else
        cout << "\nVector vacío";
 
    // Disminuye el tamaño del vector
    v1.shrink_to_fit();
    cout << "\nSon los elementos del vector: ";
    for (auto it = v1.begin(); it != v1.end(); it++)
        cout << *it << " ";

 ```
