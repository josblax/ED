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
