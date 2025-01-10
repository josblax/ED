# include "Usuario.h"

class Profesor : public Usuario 
{
private:
	string docenteId;
	string departamento;
public:
	// Constructor
	Profesor(string userId, string nombre, string AP, string direccion, string telefono, bool activo, vector<string> prestamos, 
		string docenteId, 
		string departamento)
		: Usuario(userId, nombre, AP, direccion, telefono, activo, prestamos), docenteId(docenteId),departamento(departamento) {}

	// Getters
	string getDocenteId() const { return docenteId; }
	string getDepartamento() const { return departamento; }

	// Setters
	void setDocenteId(const string& docenteId) { this->docenteId = docenteId; }
	void setDepartamento(const string& departamento) { this->departamento = departamento; }
};
