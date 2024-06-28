#ifndef VAJILLA_H_INCLUDED
#define VAJILLA_H_INCLUDED
#include <iostream>
#include <string>
#include "Bachero.h"
#include "Cola.h"
using namespace std;


#ifndef NULL
#define NULL      0
#endif

// EQUIPAJE ES UNA LISTA
typedef struct{
        string Tipo;
        int Cantidad;
        Cola bacheros;
        } Vajilla;

void crearVajilla(Vajilla &vajilla);

void setTipo(Vajilla &vajilla, string dato);
void setCantidad(Vajilla &vajilla, int dato);


string getTipo(Vajilla &vajilla);
int getCantidad(Vajilla &vajilla);

void eliminarVajilla(Vajilla &vajilla);



#endif // VAJILLA_H_INCLUDED
