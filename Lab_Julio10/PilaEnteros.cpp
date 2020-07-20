#include "PilaEnteros.h"

PilaEnteros::PilaEnteros()
{
	this->longitud = 0;
	this->tope = NULL;
}

PilaEnteros::~PilaEnteros()
{

}

int PilaEnteros::getLongitud()
{
	return this->longitud;
}

void PilaEnteros::setLongitud(int l)
{
	this->longitud = l;
}

Nodo* PilaEnteros::getTope()
{
	return this->tope;
}

void PilaEnteros::setTope(Nodo* nodo)
{
	this->tope = nodo;
}

bool PilaEnteros::esVacia()
{
	if (this->getLongitud() == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool PilaEnteros::pushElemento(int pElemento)
{
	Nodo* nuevo = new Nodo(pElemento);
	if (nuevo == NULL) {
		return false;
	}
	else {
		if (this->esVacia()) {
			tope = nuevo;
		}
		else {
			nuevo->setSiguiente(tope);
			tope = nuevo;
		}
		longitud++;
		return true;
	}
}

bool PilaEnteros::popElemento()
{
	Nodo* aux;
	if (!(this->esVacia())) {
		aux = tope;
		tope = tope->getSiguiente();
		longitud--;
		delete aux;
		return true;
	}
	else {
		return false;
	}
}

int PilaEnteros::popElementoReturn()
{
	Nodo* aux;
	int dato;
	if (!(this->esVacia())) {
		aux = tope;
		dato = aux->getDato();
		tope = tope->getSiguiente();
		longitud--;
		delete aux;
		return dato;
	}
	else {
		return -999;
	}
}

string PilaEnteros::imprimir()
{
	Nodo* aux = tope;
	string pila = "Datos de Pila\n";
	while (aux != NULL) {
		pila += "Dato: " + to_string(aux->getDato()) + "\n";
		aux = aux->getSiguiente();
	}
	return pila;
}
