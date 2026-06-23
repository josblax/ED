```C++
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cctype>

using namespace std;
//==========================================
// Definicion de la clase trabajador
//==========================================
class Trabajador
{
private:
    // Atributos encapsulados (privados)
    string nombres;
    string apellidos;
    int antiguedad;
    int edad;
    char genero;
public:
    //Constructor con parámetros Puede haber mas de un constructor
    Trabajador(string nom, string ape, int ant, int ed, char gen) 
    {
        this->nombres = nom;
        this->apellidos = ape;
        this->antiguedad = ant;
        this->edad = ed;
        this->genero = toupper(gen);
    }
//getter() Métodos de acceso público // obtener / imprimir información
    string getNombres() {   return this->nombres;    }
    string getApellidos() { return this->apellidos; }
    int getAntiguedad() { return this->edad; }
    int getEdad() { return this->edad; }
    char getGenero() { return this->genero; }
};

//=============================================
// Prototipos de funciones de control es la primera linea linea de la funcion y termina en ;
//=============================================

void agregarTrabajador(vector<Trabajador>& trabajadores); // & es una dirección de memoria
void imprimirTrabajadores(vector<Trabajador>& trabajadores);
void buscarTrabajador(vector<Trabajador>& trabajadores);
void masJoven(vector<Trabajador>& trabajadores);
void mayorAntiguedad(vector<Trabajador>& trabajadores);
void cantidadDeMujeres(vector<Trabajador>& trabajadores);
//=============================================
// Función Principal (Menú)
//=============================================
int main()
{
    vector<Trabajador> trabajadores; // vector trabajadores
    int opcion;
    do 
    {
        system("cls"); // Pone la pantalla sin información
        cout << "===========================================" << endl;
        cout << "SISTEMA DINAMICO DE CONTROL DE TRABAJADORES" << endl;
        cout << "===========================================" << endl;
        cout << "Registros actuales en memoria : " << trabajadores.size() << endl;
        cout << "";
        cout << "--------------------------------------------" << endl;
        cout << "1. Instanciar y Agregar Trabajador (push_back)" << endl;
        cout << "2. Mostrar todos los trabajadores" << endl;
        cout << "3. Buscar un trabajador por nombre" << endl;
        cout << "4. Identificar el trabajador mas joven" << endl;
        cout << "5. Identificar el trabajador mas antiguo" << endl;
        cout << "6. Contabilizar trabajadores del genero femenino" << endl;
        cout << "7. Finalizar Sistema" << endl;
        cin >> opcion;

        switch (opcion) 
        {
        case 1: agregarTrabajador(trabajadores); break;
        case 2: imprimirTrabajadores(trabajadores); break;
        case 3: buscarTrabajador(trabajadores); break;
        case 4: masJoven(trabajadores); break;
        case 5: mayorAntiguedad(trabajadores); break;
        case 6: cantidadDeMujeres(trabajadores); break;
        case 7: cout << "Saliendo del sistema" << endl; break;
        default: cout << "Opcion Invalida" << endl; break;
        }

        cout << "";
        system("pause");

    } while (opcion != 7);
}



void agregarTrabajador(vector<Trabajador>& trabajadores) 
{
    // variables temporales o locales
    string nom, ape;
    int ant, ed;
    char gen;
    cout << "Registrando nuevo trabajador " << endl;
    cin.ignore(); // Limpia el buffer por si algo tiene la memoria
    cout << "Escribe los nombres: ";
    getline(cin, nom); // getline sirve para recibir varios de un nombre
    cout << "Escribe los apellidos: ";
    getline(cin, ape); // getline sirve para recibir varios de un nombre
    cout << "Escribe la antiguedad en annios: ";
    cin >> ant;
    cout << "Escribe la edad: ";
    cin >> ed;
    cout << "Escribe el genero (F/M): ";
    cin >> gen;
    trabajadores.push_back(Trabajador(nom, ape, ant, ed, gen));
}

void imprimirTrabajadores(vector<Trabajador>& trabajadores) 
{
    cout << "Lista de Trabajadores " << endl;
    if (trabajadores.empty()) 
    {
        cout << "No hay trabajadores " << endl;
        return; // Finalizar la función
    }

    for (int i = 0; i < trabajadores.size(); i++) 
    {
        cout << "Trabajador " << (i + 1) << ": " << trabajadores[i].getNombres() <<
            " " << trabajadores[i].getApellidos() << " Edad : " << trabajadores[i].getEdad() <<
            " Antiguedad : " << trabajadores[i].getAntiguedad() << " Genero : " <<
            trabajadores[i].getGenero() << endl;
    }
}

void buscarTrabajador(vector<Trabajador>& trabajadores) 
{

}
void masJoven(vector<Trabajador>& trabajadores) 
{

}

void mayorAntiguedad(vector<Trabajador>& trabajadores) 
{

}

void cantidadDeMujeres(vector<Trabajador>& trabajadores) 
{

}
```
