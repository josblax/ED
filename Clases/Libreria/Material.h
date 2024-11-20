#ifndef MATERIAL_H
#define MATERIAL_H

#include <string>
using namespace std;

class Material {
protected:
    string id;
    string titulo;
    string genero;
    string tipo;
    string region;
    int cantidad;
    bool referenciaLimitada;
    int annio;

public:
    // Constructor
    Material(string id, string titulo, string genero, string tipo, string region, int cantidad, bool referenciaLimitada, int annio)
        : id(id), titulo(titulo), genero(genero), tipo(tipo), region(region), cantidad(cantidad), referenciaLimitada(referenciaLimitada), annio(annio) {}

    // Getters
    string getId() const { return id; }
    string getTitulo() const { return titulo; }
    string getGenero() const { return genero; }
    string getTipo() const { return tipo; }
    string getRegion() const { return region; }
    int getCantidad() const { return cantidad; }
    bool getReferenciaLimitada() const { return referenciaLimitada; }
    int getannio() const { return annio; }

    // Setters
    void setId(const string& id) { this->id = id; }
    void setTitulo(const string& titulo) { this->titulo = titulo; }
    void setGenero(const string& genero) { this->genero = genero; }
    void setTipo(const string& tipo) { this->tipo = tipo; }
    void setRegion(const string& region) { this->region = region; }
    void setCantidad(int cantidad) { this->cantidad = cantidad; }
    void setReferenciaLimitada(bool referenciaLimitada) { this->referenciaLimitada = referenciaLimitada; }
    void setAnnio(int annio) { this->annio = annio; }
};

#endif
#pragma once
