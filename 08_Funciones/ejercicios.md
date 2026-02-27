1. 	Declara y define una función llamada saludar() que imprima “Hola, mundo” sin recibir parámetros ni retornar valores.
2. 	Escribe una función cuadrado() que reciba un número entero como parámetro y retorne su cuadrado.
3. 	Crea un programa que llame a la función mostrarMensaje()  desde  y muestre un texto en pantalla.
4. 	Define el prototipo de una función sumar()  que reciba dos enteros y retorne un entero. Luego implementa su definición.
5. 	Escribe una función multiplicar() que reciba dos números flotantes y retorne el resultado de su multiplicación.
6. 	Escribe solo la declaración (prototipo) de una función  calcularIVA() que reciba un precio y retorne el IVA.
7. 	Define la función  calcularIVA() que fue declarada previamente, incluyendo su lógica de cálculo.
8. 	Explica con código la diferencia entre declarar una función antes del main()  y definirla después.
9. 	Implementa una función mostrarMenu() sin parámetros ni retorno que imprima un menú de opciones.
10. Crea una función esPar()  que reciba un entero y retorne  si es par,  si no.
11. Diseña una función sumarLista() que reciba un arreglo de enteros y retorne la suma total.
12. Escribe una función convertirTemperatura()  que convierta grados Celsius a Fahrenheit usando parámetros.
13. Escribe una función duplicarValor()  que reciba un entero por valor y lo duplique dentro de la función. ¿Qué sucede con el valor original?
14. Escribe una función  duplicarReferencia() que reciba un entero por referencia y lo duplique. ¿Qué sucede con el valor original?
15. Crea un programa que compare el comportamiento de pasar parámetros por valor y por referencia usando dos funciones distintas.
16. Implementa una función recursiva factorial() que calcule el factorial de un número entero.
17. Escribe una función recursiva fibonacci()  que retorne el n-ésimo número de la serie de Fibonacci.
18. Modifica la función fibonacci()  para que imprima los primeros n términos de la serie.
19. Define dos funciones mostrar() con el mismo nombre: una que reciba un entero y otra que reciba una cadena. Ambas deben imprimir el valor recibido.
20. Crea una función calcularArea() sobrecargada: una versión para calcular el área de un círculo (recibe radio) y otra para un rectángulo (recibe base y altura).


## Retroalimentación

1. El Concepto de Abstracción y Modularidad

* Muchos alumnos ven las funciones como una "obligación de la rúbrica" y no como una herramienta de diseño.

* El síntoma: Escriben todo dentro del main y luego intentan "extraer" partes a funciones, o crean funciones que dependen de variables globales.

> Área de oportunidad: Reforzar la responsabilidad única. Una función debe hacer una sola cosa. Si una función imprime, calcula y pide datos al mismo tiempo, está mal diseñada.

2. Paso de Parámetros: Valor vs. Referencia
* Esta es, sin duda, la brecha más grande en la comprensión de la memoria.

* El síntoma: Usan paso por valor para funciones que deberían modificar el dato original (como un incrementar) y se sorprenden cuando el valor en el main no cambia.

> Área de oportunidad: El uso del operador &. Es vital que visualicen que el paso por valor crea una copia (gasto de memoria), mientras que la referencia es un alias al dato original.

3. Anatomía de la Función: Prototipos y Definiciones

* Existe una confusión recurrente entre declarar, definir e invocar.

* El síntoma: Definir funciones dentro del main, olvidar el punto y coma en el prototipo, o intentar usar la palabra reservada del tipo (int, void) al momento de llamar a la función.

> Área de oportunidad: Flujo de compilación. Explicar que el compilador lee de arriba hacia abajo y necesita el "contrato" (prototipo) antes de ver la ejecución.

4. Tipos de Retorno y el Flujo de Control

* El síntoma: Funciones declaradas como int que no tienen un return, o funciones void que intentan devolver valores. Otro error común es poner código (como un cout) después de un return, sin entender que el retorno finaliza la ejecución de la función.

> Área de oportunidad: La "promesa" del tipo de retorno. Si prometes un int, debes entregar un int al final de cada camino lógico.

5. Ámbito de las Variables (Scope)

* El síntoma: Intentar usar una variable declarada en el main dentro de una función sin pasarla como parámetro, o declarar variables con el mismo nombre en diferentes ámbitos y confundir sus valores.

> Área de oportunidad: Visualización del Stack (Pila de llamadas). Los alumnos deben entender que cuando una función termina, sus variables locales "mueren".

6. Sobrecarga de Funciones (Polimorfismo Básico)

* El síntoma: Crear nombres diferentes para la misma acción (ej. sumarInt, sumarFloat) en lugar de usar el mismo nombre con diferentes firmas.

> Área de oportunidad: Entender que la firma de la función no es solo el nombre, sino la combinación de nombre + parámetros.

