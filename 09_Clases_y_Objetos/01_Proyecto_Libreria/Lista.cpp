#include <iostream>
#include "Nodo.cpp"
template <typename T>
class LL
{
public:
	Nodo<T>* head;
public:
	LL()
	{
		head = NULL;
	}

	void agregaInicio(T dato)
	{
		Nodo<T>* nuevoNodo = new Nodo<T>(dato);
		if (!head) {
			head = nuevoNodo;
		}
		else {
			Nodo<T>* temp = head;
			while (temp->siguiente) {
				temp = temp->siguiente;
			}
			temp->siguiente = nuevoNodo;
		}
	}

	void imprimirLista() const {
		Nodo<T>* temp = head; 
		while (temp != NULL) 
		{ temp->dato->mostrarInfo(); 
		 temp = temp->siguiente; 
		} 
		cout << "NULL" << endl;

	}
};
