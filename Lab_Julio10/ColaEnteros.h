#pragma once
#include "Nodo.h"
#include <string>
#include <iostream>
using namespace std;

class ColaEnteros
{

private:
	int longitud;
	Nodo* frente;
	Nodo* final;

public:
	ColaEnteros();

	int getLongitud();
	void setLongitud(int pL);
	void insertarElemento(int pElemento);
	bool eliminarElemento();
	int eliminarElementoReturn();
	bool eliminarElementoPos(int pPos);

	bool esVacia();
	string imprimir();

};

