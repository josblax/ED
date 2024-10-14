# Clases y Objetos

## ¿Cuál es el propósito del SW?
•	Ejecutar tareas y cálculos complejos
•	Reducir dicha complejidad
•	Reducir intervención humana
•	Reducir errores
•	Hacer tareas monótonas.

## Los objetos en el mundo real son por naturaleza complejos: 
•	Órganos y estructuras en seres vivos.
•	Sistemas que se encuentran en la naturaleza, Ríos, Océanos, Bosques, Ecosistemas, Clima etc.

## Esto aplica al SW también:
•	Sistemas de Bases de Datos
•	Sistemas Financieros
•	Control de tráfico aéreo.

Esta complejidad es demasiado grande para ser entendida por una sola persona.
La complejidad nunca puede ser eliminada, pero puede reducirse.

¿Porque el SW es complejo?

Debida a la naturaleza y dominio es complejo.
* Por ejemplo, Sistemas Bancarios, Sistemas Financieros, Sistemas de Abastecimiento, Sistemas de Comercialización.
* Esta complejidad se transfiere al SW.
* Existen requerimientos no funcionales como rendimiento, costo, ejecución y actuación de dichos sistemas.

## El SW es complejo porque…
* Comunicación entre personas (usuarios y desarrolladores)
* Poca educación en lo que el SW es capaz y no de ejecutar.
* El usuario o el programador no tienen buenas habilidades de comunicación.
* Los programadores esperan las mayores especificaciones posibles.
* Los usuarios necesitan “probar” antes de mejorar su expectativa de lo que el SW puede hacer.
* Los cambios pueden ser difíciles de incorporar.

## El SW es impredecible…
* SW corre con componentes discretos.
* La solución puede tener muchas variantes, y uso de memoria y recursos.
* En numero muy grande de eventos y estados.
* Normalmente mostrada en términos combinatorios (probabilidad y estadística)
* Interacción entre muchos componentes

# UML Diagrama de clases.

**Unified Modeling Language (UML) [Lenguaje Unificado de Modelado].**

* Nos ayuda a modelar nuestras clases durante el diseño.

Una notación de clase es una representación gráfica se usa para representar la clase y sus relaciones en el modelado de orientado-objetos.

<p align="center">
<img src="https://github.com/josblax/ED/blob/main/imagenes/clase.jpg" alt="Layout app" width="200" height="200">
</p>


## Clase. 
El nombre de la clase se define en la parte alta del rectángulo normalmente es centrada y en negritas.

## Atributos. 
También conocidos como propiedades o campos, representa los elementos de datos de la clase.

## Métodos ó funciones. 
También conocidos como Funciones u operaciones, representa el comportamiento o funcionalidad de la clase. Se enumeran en el tercer compartimiento del rectángulo de la clase e incluye la visibilidad (público o privado), tipo de retorno y tipo de datos de cada atributo.

## Representación de visibilidad

+ para el público (visible para todas las clases)
- privado (visible solo dentro de la clase)
# protegido (visible solo para subclases)
~ para paquetes o visibilidad por default (visible solo para las clases dentro del mismo paquete)

## Dirección de los parámetros.

En los diagramas de clase, la dirección de los parámetros se refiere a la indicación del flujo de la información entre clases, si es un parámetro de entrada, de salida o de ambos.

## in (input):
* Un parámetro de entrada es obtenido desde el objeto que llama a la función(cliente) al objeto llamado(servidor) durante el método de la invocación.
* Es representado mediante una flecha con magnitud hacia la clase que recibe.
out (ortput):
* Un parámetro de salida es un pasado desde el objeto que llama (server) de regreso a la clase que llamo (cliente) después de que el método ha sido ejecutado.
* Es representado mediante una flecha con la magnitud apuntando hacia afuera de la clase que recibió.

## inout (entrada y salida):
* Sirve como entrada y salida se maneja en ambos sentidos
* La representación es doble flecha.
 

Ejemplo:




