# Lista Doblemente Ligada

## Clase Nodo

```Cplusplus
class Nodo
{
public:
    int dato;
    Nodo* siguiente;
    Nodo* anterior;
public:
    Nodo(int dato)
    {
        this->dato = dato;
        this->siguiente = NULL;
        this->anterior = NULL;
    }
};
```

## Clase ListaDoble

```Cplusplus
class ListaDoble
{
public:
    Nodo* head;
    Nodo* tail;
public:
    ListaDoble()
    {
        head = NULL;
        tail = NULL;
        //cout << "Lista creada" << endl;
        //cout << head << endl;
        //cout << tail << endl;
    }

    void insertaInicio(int dato)
    {
        Nodo* nuevoNodo = new Nodo(dato);
        if (head == NULL && tail == NULL)
        {
            head = nuevoNodo;
            tail = nuevoNodo;
        }
        else
        {
            Nodo* temp = head;
            head = nuevoNodo;
            nuevoNodo->siguiente = temp;
            nuevoNodo = temp->anterior;
            return;
        }
    }

    void insertaFin(int dato) 
    {
        Nodo* nuevoNodo = new Nodo(dato);
        Nodo* temp = tail;
        if (tail == NULL) 
        {
            head = nuevoNodo;
            tail = nuevoNodo;
            return;
        }
        else 
        {
            if (temp->anterior == NULL) 
            {
                tail = nuevoNodo;
                tail->anterior = temp;
                temp->siguiente = nuevoNodo;
                return;
            }
            else 
            {
                while (temp->siguiente != NULL) 
                {
                    temp = temp->siguiente;
                }
                tail = nuevoNodo;
                tail->anterior = temp;
                temp->siguiente = nuevoNodo;
            }
        }
    }

    void imprimeLista()
    {
        Nodo* temp = head;
        if (head == NULL)
        {
            cout << "Lista vacia" << endl;
            return;
        }
        while (temp != NULL)
        {
            cout << temp->dato << " ,";
            temp = temp->siguiente;
        }
        cout << endl;
    }
};

 void eliminaInicio() 
 {
     if (head == NULL) 
     {
         cout << "Lista Vacía " << endl;
         return;
     }
     Nodo* temp = head;
     if (temp->siguiente == NULL) 
     {
         head = NULL;
         tail = NULL;
         cout << "Valor de nodo a borrar " << temp->dato << endl;
         delete temp;
         return;
     }
     else 
     {
         head = temp->siguiente;
         temp->siguiente->anterior = NULL;
         cout << "Valor de nodo a borrar " << temp->dato << endl;
         delete temp;
     }
 }

 void eliminaFin() 
 {
     if (head == NULL)
     {
         cout << "Lista Vacía " << endl;
         return;
     }
     Nodo* temp = head;
     if (temp->siguiente == NULL and temp->anterior == NULL)
     {
         head = NULL;
         tail = NULL;
         cout << "Valor de nodo a borrar " << temp->dato << endl;
         delete temp;
         return;
     }
     else 
     {
         Nodo* temp = head;
         Nodo* temp1 = head;
         // mientras el apuntador no es  NULL,
         while (temp->siguiente != NULL)
         {
             temp1 = temp;
             temp = temp->siguiente;

         }
         cout << "temp1 : " << temp1->dato << endl;
         cout << "temp : " << temp->dato << endl;
         
     }
 }
```
