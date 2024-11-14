// ConsoleApplication20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
	// setters
	void setNumCuenta(int nc) 
	{
		this->numCuenta = nc;
	}
	void setNombreCompleto(string nombre) 
	{
		this->nombreCompleto = nombre;
	}
	void setMateriasCursando(int materiasCursando)
	{
		this->materiasCursando = materiasCursando;
	}
	void setMateriasCursadas(int materiasCursadas)
	{
		this->materiasCursadas = materiasCursadas;
	}
	void setmateriasPorCursar(int materiasPorCursar)
	{
		this->materiasPorCursar = materiasPorCursar;
	}
	int getMateriasCursando()
	{
		return materiasCursando;
	}
	int getMateriasCursadas() const
	{
		return materiasCursadas;
	}
	int getMateriasPorCursar() const
	{
		return materiasPorCursar;
	}

};

int main()
{
	Alumno jose;
	jose.setNombreCompleto("Juan Pueblo");
	jose.setNumCuenta(123456);
	jose.setMateriasCursadas(35);
	jose.setMateriasCursando(5);
	jose.setmateriasPorCursar(35);
	cout << jose.getNombre() << endl;
	cout << jose.getNumCuenta() << endl;
}
