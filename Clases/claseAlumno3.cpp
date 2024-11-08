// ConsoleApplication21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
using namespace std;
// Globales
int numMaterias;

//class
class Materias 
{
private:
    string materia;
    double calificacion;
public:
// Getters Para obtener los valores del objeto
    string getMateria() const 
    {
        return materia;
    }
    double getCalificacion() const
    {
        return calificacion;
    }
//Setters poner información en el objeto
    void setMateria(const string& mat) 
    {
        this->materia = mat;
    }
    void setCalificacion(double calificacion) 
    {
        this->calificacion = calificacion;
    }
};

class Alumno 
{
private:
    string nombreCompleto;
    int nc;
    vector <Materias> v2;
// funciones o metodos
public:
    //Getters
    string getNombreCompleto() const 
    {
        return nombreCompleto;
    }
    int getNc() const 
    {
        return nc;
    }
    vector<Materias> getMaterias() const 
    {
        return v2;
    }
    // Setters
    void setNombreCompleto(const string& nombreCompleto)  
    {
        this->nombreCompleto = nombreCompleto;
    }
    void setNc(int nc) 
    {
        this->nc = nc;
    }
    void setMaterias(const vector<Materias>& materias) 
    {
        this->v2 = materias;
    }

    static void altaAlumno(vector<Alumno> &v1) 
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
            for (int j = 0; j <= va[i].v2.size()-1; j++) 
            {
                cout << "materia : " <<
                    va[i].v2[j].materia << endl;
                cout << "calificacion : " <<
                    va[i].v2[j].calificacion << endl;
            }
            cout << "================" << endl;
        }
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
}

