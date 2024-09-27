// size() devuelve el numero de elementos de un vector

vector<int> v1;
cout << "Tamano del vector : "<<v1.size() << endl;
// añade del 0 al 4
for (int i = 0; i <= 4; i++) 
{
	v1.push_back(i);
}
cout << "Tamano del vector : " << v1.size() << endl;
imprime(v1);
v1.push_back(550);
imprime(v1);
// max_size(). Devuelve el numero maximo de 
// elementos que puede contener un vector.
cout << "Tamano Maxima del vector "
	<< v1.max_size() << endl;
// capacity().Devuelve el tamaño del espacio 
// de almacenamiento asignado actualmente 
// al vector expresado como número de elementos.
cout << "Capacidad : " << v1.capacity() << endl;
system("pause");
system("cls");

// resize(n). Cambia el tamño del contenedor a 
// n elementos

cout << "Cambiar el tamaño del vector a 4" << endl;
v1.resize(4);
imprime(v1);

vector<int> v2;
cout << v2.empty() << endl;

// shrink_to_fit(). Reduce la capacidad del vector
// para adaptarse a su tamaño y destruye el resto de 
// elementos
v1.shrink_to_fit();
imprime(v1);
