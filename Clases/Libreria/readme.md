# Proyecto Librería
Caso Librería. Considere la librería “El mundo de los libros” y elabore un programa en
C++ basado en clases y objetos, que ofrece libros, CD’s y películas en Blu-Ray, que
presta a sus usuarios. Todos los materiales de prestamo pueden tener los siguientes
datos:

1. [string] Identificador único #id, en el caso de libros se debe usar el código ISBN,
en el caso de los dvd’s y bluerays, se usará el código de barras.
Ejemplos:
* 9781546038399
* CSE370
* 503022700024

2. [string] Título, ejemplo “Zootopia”
3. [string] Genero, ejemplo “Comedia, Familia, animación.
4. [string] Tipo, “Película”, “CD Música”, “Videojuego”
5. [int][double][string] Duración. 108 minutos.
6. [string] Región. “México”
7. [string][arreglo/vector] Actores. “Jason Baterman”,“Ginnifer Goodwin”
8. [string][arreglo/vector] Directores. “Byron Howard”, “Rich Moore”
9. [int][double]Cantidad en librería. 10
10. [string][bool][char]Referencia limitada. [Si/No][true/false][S/N]

Ejemplo se anexa
Considere las variables necesarias para mantener la información del párrafo anterior,
incluyendo el inventario de los productos.

![image](https://github.com/user-attachments/assets/e4c2bd8d-af3d-4f8a-9cd7-05d810c033f7)

La librería mantiene copias de todo el material, este, puede ser prestado a sus usuarios.

Donde existen dos tipos de materiales. El primero es el de referencia limitada que puede ser prestado solo por 2 horas, y no puede ser retirado de las instalaciones; cualquier otro material puede ser prestado hasta por 2 semanas.

Para cada préstamo, se registra al usuario, además de la fecha de préstamo

El usuario puede tener los siguientes datos:
1. [string] Matricula #id, Usar un identificador alfa numerico que sea significativo y no repetitivo para al menos 15000 usuarios.
Ejemplos:
* 102782
* 305012345
2. [string] Nombre, ejemplo “Jose”
3. [string] AP , ejemplo “Blancas”
4. [struct] dirección, se compone de una estructura que tiene variables calle,numero, numero interno, fraccionamiento/colonia, municipio/alcaldía, país
5. [string] Teléfono, ejemplo “55-5256-98-09”
6. [int] días de préstamo.
7. [string] Tipo, “Película”, “CD Música”, “Videojuego”
8. [string][arreglo/vector] Identificador único #id, que se relaciona con la estructura anterior.
9. [string][bool][char]prestamo vencido?. [Si/No][true/false][S/N]
10. [bool] activo Identificador para saber si el usuario actual esta activo.

Para los usuarios mantiene la información de su nombre, dirección y teléfono en el registro de préstamo. Note que debe administrar los tiempos de tal manera que su programa “simule” que un préstamo ya está vencido

La librería hará un cargo por cada día que no se entregue el producto, y el cargo será de 10 pesos por día excedido, que se debe calcular en el momento de la devolución, que será pagado en la caja y entregara el comprobante al operador del sistema para quitar el adeudo, mientras no se liquide, no podrán prestar más productos, así que se
debe validar si el usuario puede solicitar material cuando esta con adeudo, y negar el
préstamo.

El sistema registra Uso de materiales por la categoría, donde periódicamente se revisa
esta información.

Considere o haga lo siguiente:
1. Elabore el diagrama de clases necesario para elaborar las tareas solicitadas,
2. ¿Qué variables, estructuras o clases usaría para considerar si un material es prestado o no?
3. ¿Como conectar las dos clases para que podamos actualizar el inventario, mientras el usuario tiene prestado el libro?
4. Considere privados solo los atributos de la clase, los métodos y el constructor deberán ser públicas.
5. Revise el documento de la practica #3 para ver como se guardan objetos en un vector.
6. ¿Como guardar toda la información en una estructura de clases, con los temas vistos en clase durante el cuatrimestre Crear un registro que contenga los datos necesarios del préstamo.
7. ¿Para el registro de los usuarios que estructura de datos podemos usar, con los temas vistos en clase?
8. Considerar un menú para su programa que considere los procesos principales. Elabore sobre los procesos principales que debe contener este programa.
9. Una vez definidos los procesos genere las funciones que representen las operaciones que hace este proceso.
10. Después de discutir con los administradores de la librería se ha decidido agregar la función de recompensas de librería que otorga incentivos de comida de la cafetería después de cada 3 libros prestados a un usuario, para incentivar la lectura. ¿Cómo se debe implementar esta función? Elabore como implementar
este proceso con lo elaborado.

Crear el programa en C++ que contenga los siguientes elementos:

1. Clases
2. Vectores y/o arreglos.
3. funciones
4. Estructuras
5. Datos de prueba suficientes, no solo un dato.
