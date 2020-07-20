#pragma once
#include "Nodo.h"
#include <stddef.h>
#include <string>
using namespace std;
class Lista
{

private:
	Nodo* cabeza;
	int largo;

public:
	Lista();
	bool agregarAlInicio(int pDato);
	string recorrerLista();

	//Getter and setters
	Nodo* getCabeza();
	void setCabeza(Nodo* pNodo);
	int getLargo();
	void setLargo(int pLargo);
};



