#include <iostream>
#include <vector>
#include <string>
#include "Material.h"
using namespace std;

class Musica :public Material
{
private:
	string artista;
	string album;
	vector<string> canciones;

public:
	Musica(string id, string titulo, string genero, string tipo, string region, int cantidad, bool referenciaLimitada, int annio,
		string artista,
		string album,
		vector<string> canciones) : Material(id, titulo, genero, tipo, region, cantidad, referenciaLimitada, annio),
		album(album), canciones(canciones), artista(artista) {}
	// Getters 
	string getArtista() const { return artista; }
	string getAlbum() const { return album; }
	vector<string> getCanciones() const { return canciones; }
	// Setters 
	void setArtista(const string& artista) { this->artista = artista; }
	void setAlbum(const string& album) { this->album = album; }
	void setCanciones(const vector<string>& canciones) { this->canciones = canciones; }

	//Override
	void mostrarInfo() const override
	{
		Material::mostrarInfo();
		cout << "Artista: " << artista << endl;
		cout << "Album: " << album << endl;
	}
};
