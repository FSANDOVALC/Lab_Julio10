#include "GestorOperaciones.h"

string GestorOperaciones::pushPila(int pDato)
{
    bool result;
    string texto;
    result = tmpPila->pushElemento(pDato);

    if (result) {
        texto = "El numero "+ to_string(pDato) +" fue agregado a la pila\n";
    }
    else {
        texto = "El numero no pudo ser agregado a la pila\n";
    }
    return texto;
}

string GestorOperaciones::popPila()
{
    bool result;
    string texto;
    result = tmpPila->popElemento();

    if (result) {
        texto = "El elemento del top de la pila fue borrado\n";
    }
    else {
        texto = "El elemento del top de la pila no fue borrado\n";
    }
    return texto;
}

string GestorOperaciones::insertarCola(int pDato)
{
    string texto = "El numero " + to_string(pDato) + " fue agregado a la cola\n";
    tmpCola->insertarElemento(pDato);
    return texto;
}

string GestorOperaciones::eliminarCola()
{
    bool result;
    string texto;
    result = tmpCola->eliminarElemento();

    if (result) {
        texto = "El primer elemento de la cola fue borrado\n";
    }
    else {
        texto = "El primer elemento de la cola no fue borrado\n";
    }
    return texto;
}

string GestorOperaciones::imprimirPila()
{
    return tmpPila->imprimir();
}

string GestorOperaciones::imprimirCola()
{
    return tmpCola->imprimir();
}

string GestorOperaciones::pasarColaPila()
{
    string txt;
    int datoBorrado = tmpCola->eliminarElementoReturn();
    tmpPila->pushElemento(datoBorrado);
    txt = "Se borro el numero " + to_string(datoBorrado) + " de la Cola y se agrego a la Pila\n";
    return txt;
}

string GestorOperaciones::pasarPilaCola()
{
    string txt;
    int datoBorrado = tmpPila->popElementoReturn();
    tmpCola->insertarElemento(datoBorrado);
    txt = "Se borro el numero " + to_string(datoBorrado) + " de la Pila y se agrego a la Cola\n";
    return txt;
}
