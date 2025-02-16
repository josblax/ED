// ConsoleApplication21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Globales
int numMaterias;

//class
class Materias
{
public:
    string materia;
    double calificacion;
};

class Alumno
{
public:
    string nombreCompleto;
    int nc;
    vector <Materias> v2;
    // funciones o metodos
public:
    static void altaAlumno(vector<Alumno>& v1)
    {
        Alumno alumno;
        Materias mat;
        cout << "Nombre : ";
        cin >> alumno.nombreCompleto;
        cout << "Matricula : ";
        cin >> alumno.nc;
        cout << "Cuantas materias : ";
        cin >> numMaterias;
        for (int i = 0; i < numMaterias; i++)
        {
            cout << "Nombre Materia : ";
            cin >> mat.materia;
            cout << "Calificacion : ";
            cin >> mat.calificacion;
            alumno.v2.push_back(mat);
        }
        v1.push_back(alumno);
    }

    static void imprimeDatos(vector<Alumno> va)
    {
        cout << va.size() << endl;
        for (int i = 0; i < va.size(); i++)
        {

            cout << "================" << endl;
            cout << "nombre : " << va[i].nombreCompleto << endl;
            cout << "nc : " << va[i].nc << endl;
            for (int j = 0; j <= va[i].v2.size() - 1; j++)
            {
                cout << "materia : " <<
                    va[i].v2[j].materia << endl;
                cout << "calificacion : " <<
                    va[i].v2[j].calificacion << endl;
            }
            cout << "================" << endl;
        }
    }

    static void eliminaUltimoAlumno(vector<Alumno>& v1) 
    {
        if (!v1.empty()) 
        {
            v1.pop_back();
        }
        else 
        {
            cout << "La lista de alumnos esta vacía " 
                << endl;
        }
    }

    static void insertaAlumno(vector<Alumno>& v1, int index) 
    {
        Alumno alumno;
        Materias mat;
        cout << "Nombre : ";
        cin >> alumno.nombreCompleto;
        cout << "Matricula : ";
        cin >> alumno.nc;
        cout << "Cuantas materias : ";
        cin >> numMaterias;
        for (int i = 0; i < numMaterias; i++)
        {
            cout << "Nombre Materia : ";
            cin >> mat.materia;
            cout << "Calificacion : ";
            cin >> mat.calificacion;
            alumno.v2.push_back(mat);
        }
        v1.insert(v1.begin() + index, alumno);
    }

    static void reversaAlumnos(vector<Alumno>& v1) 
    {
        reverse(v1.begin(), v1.end());
    }
};
int main()
{
    vector<Alumno> v1;
    int numAlumnos;
    cout << "Cuantos : ";
    cin >> numAlumnos;
    for (int i = 0; i < numAlumnos; i++)
    {
        Alumno::altaAlumno(v1);
    }
    Alumno::imprimeDatos(v1);
    cout << "====================" << endl;
    cout << "Operacion pop_back()" << endl;
    Alumno::eliminaUltimoAlumno(v1);
    Alumno::imprimeDatos(v1);
    cout << "====================" << endl;
    cout << "Operacion insertaAlumno()" << endl;
    // Inserta un alumno en el indice solicitado
    int indice;
    cout << "Dame el indice de ingreso : ";
    cin >> indice;
    Alumno::insertaAlumno(v1, indice);
    Alumno::imprimeDatos(v1);
    cout << "====================" << endl;
    cout << "Operacion reversaAlumnos()" << endl;
    Alumno::reversaAlumnos(v1);
    Alumno::imprimeDatos(v1);
}
