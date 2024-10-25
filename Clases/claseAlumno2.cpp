#include <vector>
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
        for (int i = 0; i <= va.size(); i++) 
        {
            cout << "================" << endl;
            cout << "nombre : " << va[i].nombreCompleto << endl;
            cout << "nc : " << va[i].nc << endl;
            for (int j = 0; j <= va[i].v2.size(); j++) 
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
