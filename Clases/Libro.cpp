#include <iostream>
#include <vector>
#include <string>
#include "Material.cpp"
using namespace std;

class Libro : public Material // herencia
{
	// Constructor
public:
	Libro(string id,
		string titulo,
		string genero,
		string tipo,
		int duracion,
		string region,
		vector<string> actores,
		vector<string> directores,
		int cantidad,
		bool referenciaLimitada) :
		Material(id, 
			titulo, 
			genero, 
			tipo, 
			duracion, 
			region, 
			actores, 
			directores, 
			cantidad, 
			referenciaLimitada) 
	{}
};
