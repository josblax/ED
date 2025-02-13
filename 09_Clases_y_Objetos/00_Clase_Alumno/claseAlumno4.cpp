#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

// Globales
int numMaterias;

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
    vector<Materias> v2;

public:
    static void altaAlumno(vector<Alumno>& v1)
    {
        Alumno alumno;
        Materias mat;
        cout << "Nombre: ";
        cin >> alumno.nombreCompleto;
        cout << "Matricula: ";
        cin >> alumno.nc;
        cout << "Cuantas materias: ";
        cin >> numMaterias;
        for (int i = 0; i < numMaterias; i++)
        {
            cout << "Nombre Materia: ";
            cin >> mat.materia;
            cout << "Calificacion: ";
            cin >> mat.calificacion;
            alumno.v2.push_back(mat);
        }
        v1.push_back(alumno);
    }

    static void imprimeDatos(const vector<Alumno>& va)
    {
        cout << va.size() << endl;
        for (int i = 0; i < va.size(); i++)
        {
            cout << "================" << endl;
            cout << "nombre: " << va[i].nombreCompleto << endl;
            cout << "nc: " << va[i].nc << endl;
            for (int j = 0; j < va[i].v2.size(); j++)
            {
                cout << "materia: " << va[i].v2[j].materia << endl;
                cout << "calificacion: " << va[i].v2[j].calificacion << endl;
            }
            cout << "================" << endl;
        }
    }

    static void imprimeIndice(const vector<Alumno>& va, int index)
    {
        if (index >= 0 && index < va.size())
        {
            cout << "================" << endl;
            cout << "nombre: " << va[index].nombreCompleto << endl;
            cout << "nc: " << va[index].nc << endl;
            for (int j = 0; j < va[index].v2.size(); j++)
            {
                cout << "materia: " << va[index].v2[j].materia << endl;
                cout << "calificacion: " << va[index].v2[j].calificacion << endl;
            }
            cout << "================" << endl;
        }
        else
        {
            cout << "Indice fuera de rango." << endl;
        }
    }

    static void sortAlumnos(vector<Alumno>& va)
    {
        sort(va.begin(), va.end(), [](const Alumno& a, const Alumno& b) {
            return a.nombreCompleto < b.nombreCompleto;
            });
    }

    static void reverseAlumnos(vector<Alumno>& va)
    {
        reverse(va.begin(), va.end());
    }

    static void insertAlumno(vector<Alumno>& va, int index)
    {
        if (index >= 0 && index <= va.size())
        {
            Alumno alumno;
            Materias mat;
            cout << "Nombre: ";
            cin >> alumno.nombreCompleto;
            cout << "Matricula: ";
            cin >> alumno.nc;
            cout << "Cuantas materias: ";
            cin >> numMaterias;
            for (int i = 0; i < numMaterias; i++)
            {
                cout << "Nombre Materia: ";
                cin >> mat.materia;
                cout << "Calificacion: ";
                cin >> mat.calificacion;
                alumno.v2.push_back(mat);
            }
            va.insert(va.begin() + index, alumno);
        }
        else
        {
            cout << "Indice fuera de rango." << endl;
        }
    }

    static void eliminaUltimoAlumno(vector<Alumno>& va)
    {
        if (!va.empty())
        {
            va.pop_back();
        }
        else
        {
            cout << "La lista de alumnos está vacía." << endl;
        }
    }
};






int main()
{
    vector<Alumno> v1;
    int numAlumnos;
    cout << "Cuantos: ";
    cin >> numAlumnos;
    cout << "===========================" << endl;
    for (int i = 0; i < numAlumnos; i++)
    {
        Alumno::altaAlumno(v1);
    }

    Alumno::imprimeDatos(v1);
    cout << "===========================" << endl;
    
    cout << "Imprimir en base a un indice" << endl;
    int indice;
    cout << "Indice a imprimir: ";
    cin >> indice;
    Alumno::imprimeIndice(v1, indice);
    cout << "===========================" << endl;

    cout << "Alta según indice : " << endl;
    cout << "Indice para insertar nuevo alumno: ";
    cin >> indice;
    Alumno::insertAlumno(v1, indice);

    Alumno::imprimeDatos(v1);
    cout << "===========================" << endl;

    
    cout << "Ordena alumnos : " << endl;
   
    Alumno::sortAlumnos(v1);
    Alumno::imprimeDatos(v1);
    cout << "===========================" << endl;
    cout << "Reversa alumnos : " << endl;
    Alumno::reverseAlumnos(v1);
    Alumno::imprimeDatos(v1);
    cout << "===========================" << endl;
    
    cout << "Remueve el ultimo alumno : " << endl;
    
    Alumno::eliminaUltimoAlumno(v1);
   
    Alumno::imprimeDatos(v1);
}
