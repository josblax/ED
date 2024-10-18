#ifndef Header_H
#define Header_H
#include <iostream>
#include <vector>
using namespace std;
// variable global
const int TAMANO = 10;

void ej1()
{
    int numeros[TAMANO];
    int numero, indice = 0;
    while (indice < TAMANO) {
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> numero;

        if (numero == 0) {
            break;
        }
        numeros[indice++] = numero;
    }

}

#endif // !Header_H

