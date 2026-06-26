# Análisis del Código Cubos Paso a Paso

1. Importación y Estructura Base

```C#
using UnityEngine;

public class Cubos : MonoBehaviour
```

* using UnityEngine;: Importa la librería principal del motor de Unity, dándonos acceso a clases fundamentales como GameObject, Vector3 y Time.

* public class Cubos : MonoBehaviour: Declara nuestra clase. Al heredar de MonoBehaviour, este script se convierte en un Componente que puede ser adjuntado a cualquier objeto dentro de la escena de Unity.

___

* 2. Variables de Configuración e Interfaz (Inspector)
 
  ```C#
[Header("Configuración de Generación")]
public int cantidadCubos = 5;
public float distanciaEntreCubos = 2.0f;
public Vector3 escalaCubo = new Vector3(1f, 1.5f, 0.5f);

[Header("Animación")]
public float velocidadCarrusel = 50.0f;
[Tooltip("Velocidad a la que cada cubo girará sobre sí mismo")]
public float velocidadGiroIndividual = 150.0f;
  ```

* Atributos [Header] y [Tooltip]: Organizan visualmente las variables en el Inspector de Unity y añaden descripciones de ayuda.

* Variables Públicas: Permiten modificar la cantidad de cubos, la distancia, la forma (escala) y las velocidades directamente desde el editor de Unity sin tener que recompilar el código.

___

3. Estructuras de Datos y Referencias Internas

```C#
void Start()
{
    contenedor = new GameObject("Contenedor_De_Cubos");
    contenedor.transform.position = new Vector3(0, 3, 10);
    arregloDeCubos = new GameObject[cantidadCubos];
    // ...
```

* contenedor: Servirá como la "carpeta" o Nodo Padre (Objeto Vacío) para agrupar los cubos.

* arregloDeCubos: Es un Array estático. Actúa como una lista de tamaño fijo en la memoria RAM donde guardaremos la referencia exacta a cada cubo generado para poder animarlo posteriormente.

___

4. Método Start(): Inicialización (Se ejecuta una vez)

```C#
void Start()
{
    contenedor = new GameObject("Contenedor_De_Cubos");
    contenedor.transform.position = new Vector3(0, 3, 10);
    arregloDeCubos = new GameObject[cantidadCubos];
    // ...
```

* Creación del Padre: Se instancia un objeto vacío desde cero utilizando new GameObject() y se posiciona en las coordenadas globales (0, 3, 10).

* Inicialización del Arreglo: Se le indica a la memoria que reserve los espacios exactos (cantidadCubos) para almacenar los GameObjects.

___

 El Ciclo de Generación (Ciclo For):

```C#
for (int i = 0; i < cantidadCubos; i++)
    {
        GameObject nuevoCubo = GameObject.CreatePrimitive(PrimitiveType.Cube);
        nuevoCubo.transform.SetParent(contenedor.transform);
        nuevoCubo.transform.localPosition = new Vector3(i * distanciaEntreCubos, 0, 0);
        nuevoCubo.transform.localScale = escalaCubo;
        Destroy(nuevoCubo.GetComponent<Collider>());
        
        Renderer cuboRenderer = nuevoCubo.GetComponent<Renderer>();
        if (cuboRenderer != null)
        {
            cuboRenderer.material.color = Random.ColorHSV();
        }
        
        arregloDeCubos[i] = nuevoCubo;
    }
}

```

## Dentro del ciclo for, por cada iteración se realizan los siguientes pasos:

* Instanciación: Se crea un cubo primitivo 3D.

* Jerarquía (SetParent): Se emparenta el nuevo cubo al contenedor.

* Posición y Escala: Se desplaza en el eje X multiplicando el índice i por la distanciaEntreCubos (evitando que se encimen). Se le aplica la escala personalizada.

* Optimización (Destroy): Se elimina el componente Collider nativo de los cubos para ahorrar cálculos de físicas, ya que en este script solo tienen un propósito visual.

* Estilo Visual: Se accede al componente Renderer y se le asigna un color completamente aleatorio usando Random.ColorHSV().

* Almacenamiento: Finalmente, el cubo generado se guarda en la posición i del arregloDeCubos para no perder su referencia.

___

5. Método Update(): Animación (Se ejecuta cada fotograma)

```C#
void Update()
{
    // 1. ROTACIÓN DEL PADRE (El Carrusel)
    if (contenedor != null)
    {
        contenedor.transform.Rotate(Vector3.forward * velocidadCarrusel * Time.deltaTime);
    }
```

* Giro Global: Se rota el objeto contenedor sobre el eje Z (Vector3.forward). Como todos los cubos son sus hijos, girarán alrededor del centro del contenedor, creando un efecto de carrusel. Se multiplica por Time.deltaTime para que la rotación sea fluida e independiente de los FPS de la computadora.

```C#
// 2. ROTACIÓN INDIVIDUAL DE LOS HIJOS
    for (int i = 0; i < arregloDeCubos.Length; i++)
    {
        if (arregloDeCubos[i] != null)
        {
            arregloDeCubos[i].transform.Rotate(new Vector3(1, 1, 0) * velocidadGiroIndividual * Time.deltaTime);
        }
    }
}
```

* Giro Local: Usando otro ciclo for, el script recorre el arreglo leyendo cada cubo guardado.

* Valida que el objeto no haya sido destruido (!= null).

* Aplica una rotación sobre los ejes X e Y (new Vector3(1, 1, 0)) utilizando la velocidad individual.


___

## Instrucciones de Uso en Unity

* Crea un nuevo script en C# dentro de tu carpeta Assets y nómbralo Cubos.

* Escribe el código completo dentro del script.

* En tu escena de Unity, crea un Objeto Vacío (Click derecho en Hierarchy > Create Empty) y nómbralo "GameManager" o "Generador".

* Arrastra el script Cubos.cs hacia ese objeto.

* Selecciona el objeto y configura las variables desde el Inspector (Cantidad de cubos, escala y velocidades) a tu gusto.

* Presiona el botón de Play y observa la simulación en tiempo real.
