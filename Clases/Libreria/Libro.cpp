#include <iostream>
#include <vector>
#include <string>
#include "Material.h"
using namespace std;

class Libro:public Material 
{
private:
	string isbn;
	int numeroPaginas;
	vector<string> autores;
	string editorial;
	
public:
	// Constructor
	Libro(string id, string titulo, string genero, string tipo, string region, int cantidad, bool referenciaLimitada, int annio,
		string isbn,
		int numeroPaginas,
		vector<string> autores,
		string editorial
		) 
		: Material(id, titulo, genero, tipo, region, cantidad, referenciaLimitada, annio),
		isbn(isbn), 
		numeroPaginas(numeroPaginas), 
		autores(autores), 
		editorial(editorial)
		{}
	// Getters
	   string getIsbn() const { return isbn; } 
	   int getNumeroPaginas() const { return numeroPaginas; } 
	   vector<string> getAutores() const { return autores; } 
	   string getEditorial() const { return editorial; } 
	   int getAnnioPublicacion() const { return annio; } 
	   // Setters 
	   void setIsbn(const string& isbn) { this->isbn = isbn; } 
	   void setNumeroPaginas(int numeroPaginas) { this->numeroPaginas = numeroPaginas; }
	   void setAutores(const vector<string>& autores) { this->autores = autores; } 
	   void setEditorial(const string& editorial) { this->editorial = editorial; } 
	   void setAnnioPublicacion(int annio) {this->annio = annio;}
};
