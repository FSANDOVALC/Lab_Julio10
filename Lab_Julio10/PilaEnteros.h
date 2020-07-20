#pragma once
#include "Nodo.h"
#include <string>
#include <iostream>
using namespace std;

class PilaEnteros
{

private:
	int longitud;
	Nodo* tope;

public:
	PilaEnteros();
	~PilaEnteros();
	int getLongitud();
	void setLongitud(int l);
	Nodo* getTope();
	void setTope(Nodo* nodo);
	bool esVacia();

	//Metodos
	bool pushElemento(int pElemento);
	bool popElemento();
	int popElementoReturn();
	string imprimir();

};

