#include "ColaEnteros.h"
#include "PilaEnteros.h"
#include <string>;
using namespace std;

class GestorOperaciones
{

private:
	PilaEnteros* tmpPila = new PilaEnteros();
	ColaEnteros* tmpCola = new ColaEnteros();

public:
	string pushPila(int pDato);
	string popPila();
	string insertarCola(int pDato);
	string eliminarCola();
	string imprimirPila();
	string imprimirCola();

	//Metodos extra
	string pasarColaPila();
	string pasarPilaCola();
};

