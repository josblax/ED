#include "Material.h"
using namespace std;

class Pelicula :public Material
{
private:
	int duracion;
	vector<string> actores;
	vector<string> directores;

public:
	Pelicula(string id, string titulo, string genero, string tipo, string region, int cantidad, bool referenciaLimitada, int annio,
		int duracion,
		vector<string> actores,
		vector<string> directores) 
		: Material(id, titulo, genero, tipo, region, cantidad, referenciaLimitada, annio),
		duracion(duracion),
		actores(actores),
		directores(directores)
	{}
	// Getters 
	int getDuracion() const { return duracion; }
	vector<string> getActores() const { return actores; }
	vector<string> getDirectores() const { return directores; }
	// Setters 
	void setDuracion(const int  duracion) { this->duracion = duracion; }
	void setActores(const vector<string>& actores) { this->actores = actores; }
	void setDirectores(const vector<string>& directores) { this->directores = directores; }
};
