#include <string>
# include "Usuario.h"

class Estudiante : public Usuario {
private:
    string matricula;
    string carrera;

public:
    // Constructor
    Estudiante(string userId, string nombre, string AP, string direccion, string telefono, bool activo, vector<string> prestamos, string matricula, string carrera)
        : Usuario(userId, nombre, AP, direccion, telefono, activo, prestamos), matricula(matricula), carrera(carrera) {}

    // Getters 
    string getMatricula() const { return matricula; }
    string getCarrera() const { return carrera; }
    // Setters
    void setMatricula(const string& matricula) { this->matricula; }
    void setCarrera(const string& carrera) { this->carrera = carrera; }
};
