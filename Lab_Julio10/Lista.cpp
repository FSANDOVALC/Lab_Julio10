#include "Lista.h"
#include<string>

Lista::Lista()
{
	this->cabeza = NULL;
	this->largo = 0;
}

bool Lista::agregarAlInicio(int pDato)
{
	Nodo* tmpNodo = new Nodo();
	tmpNodo->setDato(pDato);
	if (getCabeza() == NULL) {
		setCabeza(tmpNodo);
	}
	else {
		tmpNodo->setSiguiente(getCabeza());
		setCabeza(tmpNodo);
	}
	largo++;
	return true;
}

string Lista::recorrerLista()
{
	string rslt = "";
	if (getCabeza() == NULL) {
		rslt = "Lista vacia";
	}
	else {
		Nodo* aux = getCabeza();
		int contador = 1;

		//Recorre lista mientras que el nodo siguiente no sea NULL
		do {
			rslt += "Dato: " + to_string(contador) + " = " + to_string(aux->getDato()) + "\n";
			aux = aux->getSiguiente();
			contador++;
		} while (aux->getSiguiente() != NULL);
	}
	return rslt;
}

Nodo* Lista::getCabeza()
{
	return this->cabeza;
}

void Lista::setCabeza(Nodo* pNodo)
{
	this->cabeza = pNodo;
}

int Lista::getLargo()
{
	return this->largo;
}

void Lista::setLargo(int pLargo)
{
	this->largo = pLargo;
}