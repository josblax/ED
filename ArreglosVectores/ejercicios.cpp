/* Ejercicio #1
Realice el programa en C++ que solicite un número e 
imprima el numero multiplicado por 10 y esto lo seguirá 
haciendo hasta que el usuario ingrese un cero. 
Utilice el arreglo preconstruido.
*/
void ej1() 
{
	int numeros[TAMANO];
	int numero, indice=0;
    while (indice < TAMANO) {
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> numero;

        if (numero == 0) {
            break;
        }
        numeros[indice++] = numero;
    }

}
/* Ejercicio #2
Realice el programa en C++ que encuentre el mayor 
elemento de un arreglo de tipo entero. 
Utilice el arreglo preconstruido
*/
void ej2() 
{
    int numero[10]{ 34,23,94,53,16,27,5,25,42,82 };
    int mayor = -1;
    for (int i = 0; i <= 9; i++) 
    {
        if (numero[i] > mayor) 
        {
            mayor = numero[i];
        }
    }
    cout << "El numero mayor es : " << mayor << endl;
}
/* Ejercicio #3
Realice el programa en C++ que encuentre los tres 
mayores elementos de un arreglo de 1000 elementos 
generados de forma aleatoria de tipo entero. 
Utilice el arreglo preconstruido.

*/
void ej3()
{
    int numeros[TAMANO];
    int numero, primero, segundo, tercero, temp = 0;
    // inicializar la semilla 
    srand(time(NULL));

    for (int i = 0; i <= TAMANO; i++) 
    {
        numeros[i] = rand() % 101;
    }
    primero = numeros[0];
    segundo = numeros[1];
    tercero = numeros[2];
    if (primero < segundo) 
    {
        int temp = primero;
        primero = segundo;
        segundo = temp;
    }
    if (primero < tercero) 
    {
        int temp = primero;
        primero = tercero;
        tercero = temp;
    }
    if (segundo < tercero) 
    {
        int temp = segundo;
        segundo = tercero;
        tercero = temp;
    }

    // Encontrar los tres mayores elementos
    for (int i = 3; i < TAMANO; i++) {
        if (numeros[i] > primero) 
        {
            tercero = segundo;
            segundo = primero;
            primero = numeros[i];
        }
        else if (numeros[i] > segundo) 
        {
            tercero = segundo;
            segundo = numeros[i];
        }
        else if (numeros[i] > tercero) 
        {
            tercero = numeros[i];
        }
    }

    cout << "Los tres mayores elementos son: " << primero << ", " << segundo << ", " << tercero << endl;
}
/* Ejercicio #5
Realice el programa en C++ que encuentre el segundo 
menor elemento de un arreglo de 1000 elementos de 
tipo double de forma aleatoria. 
Utilice el arreglo preconstruido.

*/
void ej5() 
{
    double numeros[TAMANO];
    int numero, primero, segundo, temp = 0;
    // inicializar la semilla 
    srand(time(NULL));

    for (int i = 0; i <= TAMANO; i++)
    {
        numeros[i] = double(rand() / RAND_MAX* 1000.0);
    }
    primero = numeros[0];
    segundo = numeros[1];
    
    if (primero > segundo)
    {
        int temp = primero;
        primero = segundo;
        segundo = temp;
    }
    

    // Encontrar los dos menores elementos
    for (int i = 3; i < TAMANO; i++) {
        if (numeros[i] < primero)
        {
            segundo = primero;
            primero = numeros[i];
        }
        
    }

    cout << "Segundo menor elemento es: " << segundo << endl;
}

/* Ejercicio #6
* Realice el programa en C++ que encuentre el elemento 
que más se repita en un arreglo. Eñ arreglo debe ser de
1000 elementos de tipo double de forma aleatoria. 
Utilice el arreglo preconstruido y Unorderer Map.
*/

void ej6()
{
    double numeros[TAMANO];
    srand(static_cast<unsigned int>(time(NULL)));

    for (int i = 0; i <= TAMANO; i++)
    {
        numeros[i] = double(rand() / RAND_MAX * 1000.0);
    }


    unordered_map<double, int> frecuencia;

    for (int i = 0; i < TAMANO; ++i) {
        frecuencia[numeros[i]]++;
    }
}

/* Ejercicio #8
Realice el programa en C++ que encuentre el elemento 
que más se repita en un vector de 1000 elementos de 
tipo entero de forma aleatoria. Que separe los elementos
pares e impares en dos vectores. 
Utilice tres vectores
*/

    void ej8() 
    {
        vector<int> numeros;
        vector<int> pares;
        vector<int> nones;

        srand(time(0));

        for (int i = 0; i < TAMANO; ++i) {
            numeros[i] = std::rand() % 1000; 
        }

        unordered_map<int, int> frecuencia;

        for (int i = 0; i < TAMANO; ++i) {
            frecuencia[numeros[i]]++;

            if (numeros[i] % 2 == 0) {
                pares.push_back(numeros[i]);
            }
            else {
                nones.push_back(numeros[i]);
            }
        }
    }
  /* Ejercicio #9
  Realice el programa en C++ que invierta los valores 
  de un arreglo de 10 elementos de tipo entero de forma 
  aleatoria. Utilice el arreglo preconstruido
  */

    void ej9() 
    {
        int numeros[10]{ 1,2,3,4,5,6,7,8,9,10 };

        // Invierte los valores del arreglo
        for (int i = 0; i < 10 / 2; ++i) {
            int temp = numeros[i];
            numeros[i] = numeros[10 - 1 - i];
            numeros[10 - 1 - i] = temp;
        }
    }

#endif
