# Algoritmo Alumno clase 2

Algoritmo para registro y visualización de alumnos y sus materias
1. Declarar estructuras y variables
  •	Definir una clase Materias con:
    o	materia: nombre de la materia (string)
    o	calificacion: calificación (double)
  •	Definir una clase Alumno con:
    o	nombreCompleto: nombre del alumno (string)
    o	nc: número de control (int)
    o	v2: vector que almacena objetos tipo Materias
  •	Declarar la variable global numMaterias para indicar cuántas materias tiene cada alumno.
2. Función altaAlumno(vector &v1)
  •	Crear un objeto Alumno temporal llamado alumno.
  •	Solicitar al usuario:
    o	Nombre del alumno → guardar en alumno.nombreCompleto.
    o	Matrícula (número de control) → guardar en alumno.nc.
    o	Número de materias que cursa → guardar en numMaterias.
  •	Para cada materia (repetir numMaterias veces):
    o	Solicitar nombre de la materia → guardar en mat.materia.
    o	Solicitar calificación → guardar en mat.calificacion.
    o	Agregar mat al vector alumno.v2.
  •	Agregar el objeto alumno al vector general v1.
3. Función imprimeDatos(vector va)
  •	Mostrar el número total de alumnos almacenados (va.size()).
  •	Para cada alumno en el vector va:
  •	Imprimir separador visual ================.
  •	Mostrar nombre y número de control (nombreCompleto, nc).
  •	Para cada materia en v2:
    o	Imprimir nombre de la materia y su calificación.
   •	Imprimir otro separador ================.
4. Función main()
  •	Declarar vector de alumnos v1.
  •	Solicitar al usuario la cantidad de alumnos a registrar.
  •	Repetir esa cantidad de veces:
    o	Invocar altaAlumno(v1) para agregar un alumno al vector.
  •	Al finalizar, invocar imprimeDatos(v1) para mostrar los datos de todos los alumnos registrados.


