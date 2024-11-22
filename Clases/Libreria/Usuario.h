#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <vector>
using namespace std;

class Usuario 
{
protected:
    string userId;
    string nombre;
    string AP; 
    string AM;
    string direccion;
    string telefono;
    bool activo;
    vector<string> prestamos; 
public:
    // Constructor
    Usuario(string userId, string nombre, string AP, string direccion, string telefono, bool activo, vector<string> prestamos)
        : userId(userId), nombre(nombre), AP(AP), direccion(direccion), telefono(telefono), activo(activo), prestamos(prestamos) 
    {}
    // Getters
    string getUserId() const { return userId; }
    string getNombre() const { return nombre; }
    string getAP() const { return AP; }
    string getDireccion() const { return direccion; }
    string getTelefono() const { return telefono; }
    bool isActivo() const { return activo; }
    vector<string> getPrestamos() const { return prestamos; }

    // Setters
    void setUserId(const string& userId) { this->userId = userId; }
    void setNombre(const string& nombre) { this->nombre = nombre; }
    void setAP(const string& AP) { this->AP = AP; }
    void setDireccion(const string& direccion) { this->direccion = direccion; }
    void setTelefono(const string& telefono) { this->telefono = telefono; }
    void setActivo(bool activo) { this->activo = activo; }
    void setPrestamos(const vector<string>& prestamos) { this->prestamos = prestamos; }

};



#endif // !USUARIO_H
#pragma once
