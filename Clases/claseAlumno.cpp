#include <iostream>
using namespace std;

// class
class Alumno 
{
public:
	//atributos
	int numCuenta;
	string nombreCompleto;
	int materiasCursadas;
	int materiasCursando;
	int materiasPorCursar;
	//constructor
public:
	Alumno() 
	{
		this->numCuenta = 0;
		this->nombreCompleto = "";
	}
	Alumno(int nc, string nombre)
	{
		this->numCuenta = nc;
		this->nombreCompleto = nombre;
	}
	// getters
	int getNumCuenta() 
	{
		return this->numCuenta;
	}
	string getNombre() 
	{
		return this->nombreCompleto;
	}
};

int main()
{
	
}

