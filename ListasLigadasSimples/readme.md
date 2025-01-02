# Listas Simplemente Ligadas

## Que es una LL simple?

Una Lista Ligada Simple es una secuencia de items (desde datos simples hasta estructuras complejas) unidos uno a otro. La estructura base para guardar información se denomina **Nodo** que contiene la información y un apuntador al siguiente **Nodo**, este apuntador al primer **Nodo** se denomina _head_ o _cabecera_ que siempre nos indicara el inicio de la lista, dentro de la estructura apuntará a la dirección donde se encuentra el siguiente **Nodo** o apuntará a **NULL**

## Estructura Nodo

Un nodo tiene al menos dos componentes:

* Nodo:
    * Dato o Estructura de Datos: Cualquier tipo de dato primitivo o estructura.
    * Apuntador: Es una dirección de memoria que apunta al siguiente nodo de la lista.
* Cabecera o Head: Es un apuntador que **SIEMPRE** apunta al primer nodo de la lista. En caso de no tener un nodo esta será una lista vacía que apunta a **NULL**  o **nullptr**

### Declaración de la clase Nodo 

```Cplusplus
class Nodo
{
// Declaración
public:
    int dato;
    Nodo* siguiente;
// Constuctor
public:
    Nodo(int dato)
    {
        this->dato = dato;
        this->siguiente = NULL;
    }
};
```

## Declaracipn Lista Ligada Simple LL

```Cplusplus
class ListaLigada
{

    Nodo* head;

public:
    ListaLigada()
    {
        head = NULL;
        cout << "Creacion de apuntador tipo nodo" << endl;
        cout << "Valor de head " << head << endl;

    }

public:
    void insertaNodo(int dato)
    {
        
        // Crear un nuevo nodo
        Nodo* nuevoNodo = new Nodo(dato);
        // Checar si la lista esta vacia
        if (head == NULL)
        {
            head = nuevoNodo;
            cout << "Valor de head inserta nodo inicial -->" 
                << nuevoNodo->datos << endl;
            cout << "Valor de la direccion head " << head << endl;
            return;
        }

        // viajar sobre la lista
        Nodo* temp = head;
        cout << "Valor de la direccion temp " << temp << endl;
        int i = 1;
        cout << "Valor de la direccion temp->siguiente " << temp->siguiente << endl;
        while (temp->siguiente != NULL)
        {
            
            temp = temp->siguiente;
            i = i + 1;
        }
        cout << "Valor de head inserta un nodo pos("<< i+1 << ") --> " << nuevoNodo->datos << endl;
        temp->siguiente = nuevoNodo;
        cout << "Valor de la direccion temp->siguiente " << temp->siguiente << endl;
    }

    void obtener(int indice) 
    {
        
        if (head == NULL) 
        {
            cout << "Lista Vacia " << endl;
            return;
        }
        Nodo* temp = head;
        int i = 1;
        while (i != indice && temp->siguiente!=NULL) 
        {
            temp = temp->siguiente;
            i++;
        }
        if (temp->siguiente != NULL) 
        {
            cout << "Valor en el indice " << i << " es " << temp->datos << endl;
        }

    }

    void imprimeLista()
    {
        Nodo* temp = head;

        if (head == NULL)
        {
            cout << "Lista Vacia no se puede imprimir nada" << endl;
            return;
        }

        while (temp != NULL)
        {
            cout << temp->datos << " , ";
            temp = temp->siguiente;
        }
        cout << endl;
    }

    int tamanoLista()
    {
        Nodo* temp = head;
        int contador = 0;
        while (temp != NULL)
        {

            temp = temp->siguiente;
            contador++;
        }

        return contador;
    }
    void find(int num) 
    {
        Nodo* temp = head;
        bool encontrado = false;
        while (temp != NULL)
        {
            if (temp->datos == num) 
            {
                encontrado = true;
                cout << "Elemento encontrado" << endl;
                return;
            }
            if (temp->siguiente == NULL && !encontrado) 
            {
                cout << "Elemento no encontrado" << endl;
                return;
            }
            temp = temp->siguiente;
            
        }
    }
    void eliminaNodo(int nodoaBorrar)
    {
        Nodo* temp0 = head;
        Nodo* temp1 = NULL;
        int contador = 0;

        if (temp0 == NULL)
        {
            cout << "Lista vacía no se puede eliminar nada" << endl;
            return;
        }
        else
        {
            while (temp0 != NULL)
            {

                temp0 = temp0->siguiente;
                contador++;
            }
            cout << "contador " << contador << endl;
            if (contador > nodoaBorrar)
            {

                temp0 = head;
                temp1 = NULL;

                if (nodoaBorrar == 1)
                {
                    // Borrar el primer elemento
                    head = head->siguiente;
                    delete temp0;
                    return;
                }
                cout << "Valor nodoaBorrar " << nodoaBorrar << endl;
                while (nodoaBorrar > 1)
                {
                    temp1 = temp0;
                    temp0 = temp0->siguiente;
                    nodoaBorrar--;
                    cout << "Valor nodoaBorrar " << nodoaBorrar << endl;
                }

                cout << nodoaBorrar << endl;
                cout << "temp0 datos " << temp0->datos << endl;
                cout << "temp1 datos " << temp1->datos << endl;
                cout << "temp0 datos siguiente " << temp0->siguiente->datos << endl;
                temp1->siguiente = temp0->siguiente;
                cout << "temp1 datos " << temp1->siguiente->datos << endl;
                cout << "temp0 datos " << temp0->datos << endl;
                delete temp0;




            }
        }
    }

    void begin() 
    {
        // Obtener el valor del inicio de la lista
        Nodo* temp = head;
        if (head == NULL) 
        {
            cout << "vacio" << endl;
            return;
        }
        else 
        {
            cout << "El primer elemento en la posicion 1 es "<< temp->datos << endl;
        }
    }
    void borrarNodoInicio() 
    {
        if (head == NULL) 
        {
            cout << "Lista Vacía " << endl;
            return;
        }
        if (head != NULL && head->siguiente == NULL) 
        {
            head = NULL;
            cout << "Lista Vacía " << endl;
            return;
        }
        else 
        {
            head = head->siguiente;
            return;
        }
    }
    void shrink_to_fit() 
    {

    }

    void reserve(int n) 
    {
        for (int i = 0; i <= n - 1; i++) 
        {
            Nodo* nodo = new Nodo();
        }
    }
    void insertaInicio(int dato) 
    {
        Nodo* nuevoNodo = new Nodo(dato);
        if (head == NULL)
        {
            head = nuevoNodo;
            cout << "Valor de head inserta nodo inicial -->"
                << nuevoNodo->datos << endl;
            return;
        }
        Nodo* temp = head;
        head = nuevoNodo;
        nuevoNodo->siguiente = temp;
        

        
    }
    void resize() 
    {

    }

    void sort() 
    {

    }
    bool empty(Nodo* ptr) 
    {
        if (head == NULL) 
        {
            return 1;
        } 
        return 0;
    }
    void end() 
    {
        int i = 1;
        Nodo* temp = head;
        vacio = empty(temp);
        if (vacio)
        {
            cout << "vacio" << endl;
            return;
        }
        while (temp->siguiente != NULL)
        {

            temp = temp->siguiente;
            i = i + 1;
        }
        cout << "El ultimo elemento en la posicion " << i << " es "<< temp->datos << endl;

    }

};
```
