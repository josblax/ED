#include <iostream>
using namespace std;
// Structs
struct Alumno
{
public:
    int cuenta;
    string nombre;
    string ap;
public:
   /*
   Los metodos estaticos son usados cuando no se usan sin la creación de una instancia
   */
    static void altaAlumno() 
    {
        Alumno objeto;
        cout << "# de cuenta ";
        cin >> objeto.cuenta;
        cout << endl;
        cout << "nombre : ";
        cin >> objeto.nombre;
        cout << "ap : ";
        cin >> objeto.ap;
        imprimeDatos(objeto);
    }

    static void imprimeDatos(Alumno objeto) 
    {
        cout << "Nombre : " 
            << objeto.nombre 
            << endl;
        cout << "cuenta : "
            << objeto.cuenta
            << endl;
    }
    
};

int main()
{
    Alumno::altaAlumno();
}
