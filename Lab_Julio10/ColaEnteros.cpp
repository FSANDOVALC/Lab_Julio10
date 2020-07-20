#include "ColaEnteros.h"

ColaEnteros::ColaEnteros()
{
	this->longitud = 0;
	this->frente = NULL;
	this->final = NULL;
}

int ColaEnteros::getLongitud()
{
	return this->longitud;
}

void ColaEnteros::setLongitud(int pL)
{
	this->longitud = pL;
}

void ColaEnteros::insertarElemento(int pElemento)
{
	Nodo* nuevo = new Nodo(pElemento);
	if (this->esVacia()) {
		frente = nuevo;
		final = nuevo;
	}
	else {
		final->setSiguiente(nuevo);
		final = nuevo;
	}
	longitud++;
}

bool ColaEnteros::eliminarElemento()
{
	Nodo* aux;
	if (!(this->esVacia())) {
		aux = frente;
		frente = frente->getSiguiente();
		longitud--;
		delete aux;
		return true;
	}
	else {
		return false;
	}
}

int ColaEnteros::eliminarElementoReturn()
{
	Nodo* aux;
	int dato;
	if (!(this->esVacia())) {
		aux = frente;
		dato = aux->getDato();
		frente = frente->getSiguiente();
		longitud--;
		delete aux;
		return dato;
	}
	else {
		return -999;
	}
}

bool ColaEnteros::eliminarElementoPos(int pPos)
{
	Nodo* aux = this->frente;
	int pos = 0;
	do {
		if (pPos == 0) {
			frente = aux->getSiguiente();
			//delete aux; //revisar
				return true;
		}
		else if (pPos >= 1) {
			if(pPos = pos) {
				//Delete
				return true;
			}
			else {
				//Sumar al contador de posicion
				pos++;
			}
		}
	} while (aux->getSiguiente()!=NULL);
}

bool ColaEnteros::esVacia()
{
	if (this->longitud == 0) {
		return true;
	}
	else {
		return false;
	}
}

string ColaEnteros::imprimir()
{
	Nodo* aux = frente;
	string cola = "Datos de Cola\n";
	while (aux != NULL) {
		cola += "Dato: " + to_string(aux->getDato()) + "\n";
		aux = aux->getSiguiente();
	}
	return cola;
}
