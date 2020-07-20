// Lab_Julio10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "PilaEnteros.h"
#include "ColaEnteros.h"
#include "GestorOperaciones.h"

using namespace std;

int main()
{

    GestorOperaciones tmpGestor;
    
    //Operaciones Pila
    cout<<  tmpGestor.pushPila(1);
    cout << tmpGestor.pushPila(2);
    cout << tmpGestor.pushPila(3);
    cout << tmpGestor.imprimirPila();
    cout << tmpGestor.popPila();
    cout << tmpGestor.imprimirPila();

    cout << tmpGestor.insertarCola(50);
    cout << tmpGestor.insertarCola(60);
    cout << tmpGestor.insertarCola(70);
    cout << tmpGestor.imprimirCola();
    cout << tmpGestor.eliminarCola();
    cout << tmpGestor.imprimirCola();

    //Pasar un numero de la Cola a la Pila
    cout << tmpGestor.pasarColaPila();
    cout << tmpGestor.imprimirPila();
    cout << tmpGestor.imprimirCola();

    //Pasar un numero de la Pila a la Cola
    cout << tmpGestor.pasarPilaCola();
    cout << tmpGestor.imprimirPila();
    cout << tmpGestor.imprimirCola();

}

