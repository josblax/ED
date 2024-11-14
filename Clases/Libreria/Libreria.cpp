// Libreria.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
#include <string>
#include "Material.h"
#include "Libro.cpp"
#include "Musica.cpp"
#include "Pelicula.cpp"

using namespace std;


    
int main()
{
    // Libro Constructor
    cout << "===================================================================" << endl;
    vector<string> autores = { "Gabriel Garcia Marquez" };
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
    vector<string> canciones = { "Springtime, ", "The Returner, ", "All Without Within"};
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
    vector<string> nuevasCanciones = {"Nueva Cancion1", "Nueva Cancion2"}; 
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
    vector<string> actores = { "Jason Baterman, ", "Ginnifer Goodwin" }; 
    vector<string> directores = { "Rich Moore"}; 
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
    vector<string> newActores = {"Otro actor1", "Otro Actor2"}; 
    pelicula.setActores(newActores); 
    vector<string> newDirectores = {"Otro Director"}; 
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
}
