# Funciones prototipo y definiciones de una función.

* Una función es un bloque de código que podemos usar cuando es necesario dentro de la ejecución de un programa.
* Una función en C++ se define arriba de la función main(), pero es más común crear una función prototipo **arriba** de la función main(), y definir la función, es decir, el código necesario de la función **debajo** de la función main().

## Declaración de Funciones.
En C++ una función debe ser declarada _arriba_ de la función main(), en otros lenguajes la función puede estar arriba o debajo de la función main(), pero, en C++ solo puede estar arriba, si deseamos poner nuestras funciones por debajo de la función, se debe usar la declaración de la función prototipo.

## Función prototipo. Es la cabecera o primera línea de una función, seguido de un punto y coma.

### Declaración de la función prototipo:
_tipo_retorno_ nombreFuncion( Lista_Declaracion_Parametros );


## Mi primera función.
El ejercicio de hoy implica una serie de ejercicios que muestran algunas de las características de las funciones de C++, los ejercicios se dividen en dos categorías:

* En la primera parte, comenzaremos explorando la naturaleza de los parámetros de función y qué reglas rigen la relación entre los parámetros y sus argumentos.
* También examinaremos los diferentes tipos de parámetros disponibles en C ++.

> RECUERDA. Un **parámetro** es cuando defines en la lista de parámetros, tanto en la función prototipo, como en la definición de la función. 
Por el contrario, un argumento se define en la función, cuando esta es llamada y se asignan valores a los a la función dentro de los paréntesis ya sea como constantes o variables.

* En la segunda parte, examinaremos la relación entre las definiciones que aparecen en diferentes funciones, y algunas de las reglas de alcance en C++.

## Parte I: Mecanismos de paso de parámetros

La forma general de un encabezado de función de C++ es:

   ***ReturnType*** **nombreFuncion**( Lista_Declaracion_Parametros )


> La instrucción ***return*** es un componente que define el tipo de retorno del resultado que devuelve la función que se declara en la cabecera de la función.

***Lista_Declaracion_Parametros*** Es una secuencia opcional de una o más declaraciones de parámetros separadas por comas, cada una de las cuales tiene la forma:

\**<tipo_variable>**  **nombre_parámetro***
