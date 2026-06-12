# Guía Manual: Creación y Configuración de un Cubo en Unity


## Conceptos Clave (El Vocabulario de Unity)

Antes de empezar, debes familiarizarte con los componentes que forman cualquier elemento en tu videojuego:

1. **GameObject (Objeto de Juego)**: Es el contenedor principal. Por sí solo, un GameObject no hace nada; es como una carpeta vacía. Todo en tu escena (cámaras, luces, personajes) es un GameObject.

2. **Transform:** Es el componente matemático obligatorio de todo GameObject. Guarda tres vectores (Vector3) fundamentales: Posición (dónde está), Rotación (hacia dónde mira) y Escala (qué tamaño tiene) en los ejes X, Y, Z.

3. **Jerarquía (Hierarchy)**: Es la ventana que muestra todos tus objetos en forma de árbol (Estructura de Datos). Un objeto puede ser "Hijo" de un objeto "Padre". Si el Padre se mueve, el Hijo se mueve con él.

4. **Mesh Filter (Filtro de Malla):** Es el componente que le dice a la computadora qué forma geométrica 3D tiene el objeto (en este caso, un cubo).

5. **Mesh Renderer (Renderizador de Malla):** Es el "pintor". Toma la forma geométrica y la dibuja en tu monitor usando la tarjeta gráfica. Sin este componente, el objeto sería invisible.

6. **Collider (Colisionador):** Es un escudo invisible que define los límites físicos del objeto. Le dice al motor de físicas cuándo este objeto choca con otro.

7. **Material:** Es el archivo que define cómo reacciona la luz sobre el objeto (su color, brillo, textura, etc.).

## Paso a Paso: Recreando el Script Manualmente

### Paso 1: Crear el "Controlador" (El Objeto Padre)


* Ve a la ventana Hierarchy (generalmente a la izquierda).
* Haz clic derecho en un espacio vacío y selecciona Create Empty (Crear Vacío).
* Selecciona el nuevo objeto. En la ventana Inspector (a la derecha), cambia su nombre en la parte superior a Controlador_Cubo.
* En el componente Transform, busca la fila Position y cambia el valor de Y a 3. (Dejar X y Z en 0).

### Paso 2: Crear la Geometría (El Cubo)

* Vuelve a hacer clic derecho en la ventana Hierarchy.
* Selecciona 3D Object > Cube (Objeto 3D > Cubo).
* Verás que aparece un cubo en tu escena. Cámbiale el nombre a Cubo_Visual en el Inspector.

### Paso 3: Configurar la Jerarquía (Emparentar)

* Para que el cubo gire o se mueva cuando el controlador lo haga, debemos conectarlos.
* En la ventana Hierarchy, haz clic izquierdo sobre Cubo_Visual y mantén el botón presionado.
* Arrástralo y suéltalo exactamente encima de Controlador_Cubo.
* Verás que Cubo_Visual ahora aparece ligeramente indentado (metido hacia la derecha) debajo de Controlador_Cubo. Esto significa que ahora es su Hijo.

### Paso 4: Ajustar el Transform (Posición Local y Escala)

* Ahora que es un hijo, sus coordenadas son relativas a su padre.
* Selecciona Cubo_Visual.
* En el componente Transform, asegúrate de que Position esté en 0, 0, 0. Esto lo centra perfectamente dentro de su padre.
* Para darle la forma aplanada (como indicaba el script), ve a la fila Scale (Escala) y cambia los valores a: X = 1, Y = 1, Z = 1.

### Paso 5: Optimización (Eliminar el Collider)


* Con Cubo_Visual seleccionado, mira la ventana Inspector.
* Busca el componente llamado Box Collider (tiene un ícono verde).
* Haz clic en el ícono de los tres puntos verticales (⋮) en la esquina superior derecha de ese componente.
* Selecciona Remove Component (Eliminar Componente).

### Paso 6: Aplicar Color (Creación de Material)

* Por defecto, Unity crea objetos grises o blancos. Para darle un color azul cielo tenue, debemos crear un material.
* Ve a la ventana Project (generalmente en la parte inferior, donde están tus carpetas de archivos).
* Haz clic derecho en un espacio vacío dentro de tu carpeta "Assets", selecciona Create > Material.
* Nombra este nuevo archivo como Material_AzulCielo.
* Selecciona tu nuevo material. En la ventana Inspector, busca un cuadro de color blanco al lado de la palabra Albedo (este es el color base)

Haz clic en el cuadro blanco. Se abrirá una rueda de colores. Selecciona un tono azul claro/celeste (Si prefieres usar código Hexadecimal, puedes escribir #87CEFA en la casilla "Hex").

Finalmente, haz clic izquierdo sobre tu Material_AzulCielo en la ventana Project, arrástralo y suéltalo directamente sobre tu Cubo_Visual (ya sea en la vista 3D o en la jerarquía).

### Paso 7 Modificación del Fotograma Clave (Keyframe)

* Selecciona tu objeto: En la ventana Hierarchy, haz clic sobre tu cubo para que Unity sepa qué animación cargar.
* Abre la ventana de Animación: Presiona Ctrl+6 (Windows) o Cmd+6 (Mac) para ver la línea de tiempo.
* Ubica el cabezal de tiempo: Haz clic en la regla superior de la línea de tiempo para mover la línea blanca vertical exactamente hasta la marca de 1:00 (justo encima de donde está tu rombo o fotograma clave actual).
* Activa la grabación: Haz clic en el botón rojo circular (Record) en la esquina superior izquierda de la ventana de animación. Al hacerlo, notarás que la línea de tiempo se tiñe de rojo, indicando que estás en modo de sobreescritura.
* Cambia el valor: Tienes dos formas de aplicar el número negativo:
* Desde el Inspector: Ve a la ventana Inspector, busca el componente Transform, y en la fila de Rotation, cambia el valor de Y a -360.
* Desde la Animación: En la lista del lado izquierdo de la ventana de animación, despliega las propiedades de Transform, busca Rotation.y, haz clic directamente sobre el número 360 y escribe -360.
* Guarda los cambios: Vuelve a hacer clic en el botón rojo circular para detener la grabación y salir del modo de edición.


## Objetivo Principal del Script

### El objetivo de este código es actuar como un "Constructor Automatizado". En lugar de armar el objeto manualmente haciendo clics en Unity, este script se encarga de:

* Mover el objeto invisible (el controlador) a una altura específica en el cielo.

* Crear un cubo geométrico 3D desde cero y conectarlo al controlador.

* Pintarlo de un color azul cielo específico.

* Hacerlo girar de manera continua y fluida en cuanto arranca el juego.

### Explicación del Código Paso a Paso

1. **La Estructura Base**

```C#
using UnityEngine;

public class Cylinder : MonoBehaviour
```

* **using UnityEngine;:** Es como pedir prestada una caja de herramientas. Le dice al código que usaremos las funciones matemáticas y gráficas exclusivas de Unity.

* **public class Cylinder : MonoBehaviour:** Aquí nombramos nuestro script (Cylinder). MonoBehaviour significa que este script está autorizado para ser arrastrado como un componente a un GameObject dentro del entorno gráfico de Unity.

2. **Variables de Configuración (El Menú del Inspector)**

```C#
 [Header("Configuración")]
    public float velocidadDeRotacion = 100.0f;
    public Vector3 escalaCubo = new Vector3(1f, 1f, 1f);
    private GameObject cubo;
    [Tooltip("El color hexadecimal estilo 'Mario' para la moneda.")]
     public string colorCubo = "#87CEFA";
```

#### Explicacion

* **[Header(...)] y [Tooltip(...)]:** Son etiquetas decorativas. Ayudan a que el Inspector de Unity se vea organizado y agregan pequeños textos de ayuda para los diseñadores del juego.

**public float:** Al ser public, esta variable se vuelve visible en Unity para cambiar la velocidad sin tocar el código. float significa que acepta números con decimales.

**Vector3:** Es una estructura de datos que guarda tres valores espaciales: X (Ancho), Y (Alto), Z (Profundidad). Aquí define el tamaño del objeto.

**private GameObject:** Esta variable es private (oculta en Unity). Es una memoria interna del script que recordará al cubo geométrico que vamos a crear en código.

**string:** Es un tipo de dato para guardar texto. Aquí guarda un código de color Hexadecimal (Azul cielo).


3. **El Método Start() (La Configuración Inicial)**

Este bloque de código solo se ejecuta una única vez, exactamente en el instante en que el objeto nace en la pantalla.

```C#
void Start()
    {
        this.transform.position = Vector3.up * 5;
```
* **this.transform.position:** Modifica la posición del objeto vacío que contiene este script.

* **Vector3.up * 5:** Es el equivalente matemático a (0, 5, 0). Mueve el objeto 5 metros hacia arriba en el mundo 3D.

```C#
        cubo = GameObject.CreatePrimitive(PrimitiveType.Cube);
        cubo.transform.SetParent(this.transform);
```

* **CreatePrimitive:** Es una fábrica de Unity. Aquí le ordenamos crear un modelo geométrico de tipo Cube (Cubo) y lo guardamos en la memoria monedaVisual.

* **SetParent:** Sistema de Jerarquía. Convierte a nuestro nuevo cubo visual en Hijo del controlador invisible. Si el padre se mueve o rota, el hijo lo obedece.

___
> El Concepto de this (Este objeto)
En Unity, para que un script (como tu clase Cylinder) pueda hacer algo, es un requisito obligatorio arrastrarlo y asignarlo a un GameObject que ya exista en tu ventana de Hierarchy (Jerarquía). Un script no puede flotar en la nada; necesita un "cuerpo" físico o virtual donde vivir.

> Cuando preparaste tu escena para probar este código, tuviste que haber creado un objeto vacío en Unity y arrastrarle este script. Ese objeto vacío que tú creaste manualmente es el Padre.

En el código, cuando llegamos a la línea de la jerarquía:

```C#
cubo.transform.SetParent(this.transform);
```

La palabra clave fundamental aquí es **this** (que en programación orientada a objetos significa "esta instancia" o "yo mismo").

this: Se refiere al propio script.

this.transform: Le dice a la computadora: "Busca las coordenadas y la entidad física del GameObject al que estoy pegado".

#### Comparación: Proceso Manual vs. Script

En el proceso manual: Tú creaste al Padre (**Controlador_Cubo**), luego creaste al Hijo (**Cubo_Visual**), y finalmente con el mouse arrastraste al hijo dentro del padre. Tuviste que hacer los tres pasos.

En el proceso con Script: Tú creas al Padre manualmente en Unity y le metes el script como si fuera su "cerebro". Cuando le das a Play, el cerebro (el código) fabrica al Hijo de la nada (CreatePrimitive(Cube)) y le da la orden: "Oye, métete dentro del cuerpo en el que yo estoy viviendo" (SetParent(this.transform)).

___

```C#
        cubo.transform.localPosition = Vector3.zero; 
        cubo.transform.localScale = escalaMoneda;
        Destroy(monedaVisual.GetComponent<Collider>());
```

* **localPosition:** Posiciona al hijo exactamente en el centro (0,0,0) relativo de su nuevo padre.

* **localScale:** Aplica la escala o el tamaño que configuramos arriba al cubo.

* **Destroy(...Collider):** Los colliders son escudos físicos para calcular choques. Como el objeto es solo decorativo, lo destruimos para ahorrar memoria de la computadora.

4. **La Sección de Renderizado (Aplicando Color)**

```C#
Renderer cuboRenderizado = cubo.GetComponent<Renderer>();
```

* **GetComponent<Renderer>()**: Busca al "pintor" del objeto. El Renderer es el componente gráfico responsable de que podamos ver el objeto en pantalla.

```C#
if (monedaRenderer != null)
        {
            Color colorCubo;
            if (ColorUtility.TryParseHtmlString(colorCubo, out colorCubo))
            {
                cuboRenderizado.material.color = colorCubo;
            }
```

* **ColorUtility.TryParseHtmlString:** Toma nuestro texto ("#87CEFA") y lo traduce a matemáticas de color que la tarjeta gráfica pueda entender.

* **cuboRenderizado.material.color = colorCubo;:** Aplica el color azul directamente a la pintura del objeto.

5. **Los Métodos Update (Animación Continua)**

A diferencia de Start(), los métodos tipo Update se ejecutan una y otra vez en un bucle infinito (muchas veces por segundo, como los cuadros de una película).

```C#
    void Update()
    {
        this.transform.Rotate(Vector3.up * -velocidadDeRotacion * Time.deltaTime);
    }
```

* **this.transform.Rotate:** Ordena al objeto girar matemáticamente. Al girar al padre, el cubo hijo gira con él.

**Vector3.up:** Le indica que pivote sobre el Eje Y (como un trompo sobre una mesa).

**Time.deltaTime:** *¡Concepto Vital!* Multiplicar por este valor sincroniza la rotación con el reloj real de la vida, evitando que el cubo gire demasiado rápido si tu computadora es muy potente, o demasiado lento si tu computadora es vieja. Hace que el movimiento sea fluido.

### Cuales son los fps por default de los metodos update?

Representa uno de los conceptos más importantes que debes comprender sobre la arquitectura de Unity y los motores gráficos en general.

Para responder de forma directa: Los métodos Update() y LateUpdate() no tienen un FPS (Frames Per Second) por defecto. A continuación, se explica cómo funciona la gestión del tiempo en los diferentes métodos de actualización dentro de Unity.

### Métodos Dependientes del Fotograma (Update y LateUpdate)**

Estos métodos se ejecutan exactamente una vez por cada fotograma renderizado. Su frecuencia depende completamente del poder de procesamiento de la computadora (o consola/móvil) y de la complejidad matemática y visual de tu escena.

* **Computadora muy potente:** Puede procesar tu escena muy rápido, ejecutando el Update() a 144 FPS (144 veces por segundo).

* **Computadora antigua (o escena muy pesada):** Tardará más en calcular todo, ejecutando el Update() a 30 FPS (30 veces por segundo).

### ¿Por qué usamos Time.deltaTime?

Como el Update() no tiene un límite fijo, si le dices a un cubo que avance "1 metro por Update", en la computadora potente avanzará 144 metros en un segundo, y en la vieja solo 30 metros. Al multiplicar por Time.deltaTime (que mide el tiempo que pasó entre un cuadro y otro), normalizamos el movimiento para que avance a la misma velocidad real en cualquier hardware.

### ¿Se puede limitar el FPS de Update()?

Sí, aunque por defecto corra tan rápido como pueda, puedes forzar al motor gráfico a respetar un límite de fotogramas mediante código. Esto es muy útil en juegos para móviles para evitar que la batería se agote rápidamente.

Si quisieras fijar el juego entero a 60 FPS, puedes incluir esta instrucción en tu método Start():

```C#
Application.targetFrameRate = 60;
```

> Nota: Esta instrucción funcionará siempre y cuando no tengas activada la Sincronización Vertical (VSync) en la configuración de calidad del motor gráfico, ya que el VSync obligará a Unity a igualar la tasa de refresco de tu monitor.
