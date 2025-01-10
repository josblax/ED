// Libreria.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
#include <string>
#include "Material.h"
#include "Usuario.h"
#include "Libro.cpp"
#include "Musica.cpp"
#include "Pelicula.cpp"
#include "Profesor.cpp"
#include "Estudiante.cpp"
#include "Lista.cpp"

using namespace std;



int main()
{
    vector<Material*> inventario;
    // Inclusión de Lista Ligada
    LL<Material*> inventario2;
    vector<string> canciones = { "Springtime, ", "The Returner, ", "All Without Within" };
    vector<string> autores = { "Gabriel Garcia Marquez" };
    vector<string> actores = { "Jason Baterman, ", "Ginnifer Goodwin" };
    vector<string> directores = { "Rich Moore" };
    inventario2.agregaInicio(new Libro("ID123", "Cien A#os de soledad", "Realismo Magico", "Libro", "Argentina", 10, true, 1923, "9786070728792", 464, autores, "Editorial Diana")); 
    inventario2.agregaInicio(new Musica("CD001", "The Returner", "Folk Funk Soul", "Musica", "US", 2, true, 2023, "Allison Russell", "The Returner", canciones)); 
    inventario2.agregaInicio(new Pelicula("ID001", "Zootopia", "Comedia, Familia, Animacion", "Película", "México", 2, false, 2014, 108, actores, directores)); 
    // Mostrar inventario 
    cout << "Inventario de Lista de Materiales:" << endl; 
    inventario2.imprimirLista();
    cout << endl;
    cout << "*******************************************" << endl;
    // Termina inclusión Ligada

    // Libro Constructor
    cout << "===================================================================" << endl;
    
    Libro libro("ID123", "Cien A#os de soledad", "Realismo Magico", "Libro", "Argentina", 10, true, 1923, "9786070728792", 464, autores, "Editorial Diana");
    // Accesando Informacion con Getters
    cout << "ID: " << libro.getId() << endl;
    cout << "Titulo: " << libro.getTitulo() << endl;
    cout << "Genero: " << libro.getGenero() << endl;
    cout << "ISBN: " << libro.getIsbn() << endl;
    cout << "Numero de Paginas: " << libro.getNumeroPaginas() << endl;
    // Modificando informacion con setters
    libro.setIsbn("NUEVOISBN1234567890");
    libro.setNumeroPaginas(400);
    // Accesando informacion actualizada
    cout << "Actualizado ISBN: " << libro.getIsbn() << endl;
    cout << "Actualizado Numero de Paginas: " << libro.getNumeroPaginas();
    cout << endl;
    cout << "===================================================================" << endl;
    //Musica Constructor
   
    Musica musica("CD001", "The Returner", "Folk Funk Soul", "Musica", "US", 2, true, 2023, "Allison Russell", "The Returner", canciones);
    // Accesando informacion Musica 
    cout << "Artista: " << musica.getArtista() << endl;
    cout << "Album: " << musica.getAlbum() << endl;
    cout << "Canciones: ";
    for (const auto& cancion : musica.getCanciones())
    {
        cout << cancion << " ";
    }
    cout << endl;
    // Modificacion Musica usando setters 
    musica.setArtista("Nuevo Artista");
    musica.setAlbum("Nuevo Album");
    vector<string> nuevasCanciones = { "Nueva Cancion1", "Nueva Cancion2" };
    musica.setCanciones(nuevasCanciones);
    // Accessing updated information 
    cout << "Actualizado Artista: " << musica.getArtista() << endl;
    cout << "Actualizado Album: " << musica.getAlbum() << endl;
    cout << "Actualizado Canciones: ";
    for (const auto& cancion : musica.getCanciones())
    {
        cout << cancion << " ";
    }
    cout << endl;
    // Pelicula Constructor
    cout << "===================================================================" << endl;
    
    Pelicula pelicula("ID001", "Zootopia", "Comedia, Familia, Animacion", "Película", "México", 2, false, 2014, 108, actores, directores);
    // Accesando informacion usando getters 
    cout << "ID: " << pelicula.getId() << endl;
    cout << "Titulo: " << pelicula.getTitulo() << endl;
    cout << "Genero: " << pelicula.getGenero() << endl;
    cout << "Duracion: " << pelicula.getDuracion() << " minutes" << endl;
    cout << "Actores: ";
    for (const auto& actor : pelicula.getActores())
    {
        cout << actor << " ";
    }
    cout << endl;
    cout << "Directores: ";
    for (const auto& director : pelicula.getDirectores())
    {
        cout << director << " ";
    } cout << endl;
    // Modficando informacion con setters
    pelicula.setDuracion(130);
    vector<string> newActores = { "Otro actor1", "Otro Actor2" };
    pelicula.setActores(newActores);
    vector<string> newDirectores = { "Otro Director" };
    pelicula.setDirectores(newDirectores);
    //Accesando informacion actualizada 
    cout << "Actualizado Duracion: " << pelicula.getDuracion() << " minutes" << endl;
    cout << "Actualizado Actores: ";
    for (const auto& actor : pelicula.getActores())
    {
        cout << actor << " ";
    }
    cout << endl;
    cout << "Actualizado Directores: ";
    for (const auto& director : pelicula.getDirectores())
    {
        cout << director << " ";
    }
    cout << endl;
    cout << "===================================================================" << endl;

    // Ejemplo datos por Profesor
    vector<string> prestamosProfesor = { "Libro1", "Libro2" };
    Profesor profesor("P001", "Juan", "Pueblo ", "Calle Conocida 323", "55-44-22-33-44", true, prestamosProfesor, "102782","Sistemas");
    cout << "Profesor: " << profesor.getNombre() << " " << profesor.getAP() << "Num Docente: "<< profesor.getDocenteId() << ", Departamento: " << profesor.getDepartamento() << endl;
    //Ejemplo de datos por Estudiante
    vector<string> prestamosEstudiante = { "Libro3", "Libro4" };
    Estudiante estudiante("E001", "Jose", "Lopez", "Calzada de los misterios", "55-59-87-62", true, prestamosEstudiante, "30012345","ISC");
    cout << "Estudiante: " << estudiante.getNombre() << " " << estudiante.getAP() << ", Carrera: " << estudiante.getCarrera() << endl;

    inventario.push_back(new Libro("ID123", "Cien A#os de soledad", "Realismo Magico", "Libro", "Argentina", 10, true, 1923, "9786070728792", 464, autores, "Editorial Diana"));
    inventario.push_back(new Musica("CD001", "The Returner", "Folk Funk Soul", "Musica", "US", 2, true, 2023, "Allison Russell", "The Returner", canciones));
    inventario.push_back(new Pelicula("ID001", "Zootopia", "Comedia, Familia, Animacion", "Película", "México", 2, false, 2014, 108, actores, directores));
    cout << "----------------------------------------" << endl;
    for (auto& material : inventario) 
    {
        cout << "Polimorfismo :" << endl;
        material->mostrarInfo();
        cout << "----------------------------------------" << endl;
    }
}
