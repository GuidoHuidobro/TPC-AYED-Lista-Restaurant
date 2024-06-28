#ifndef RESTAURANT_H_INCLUDED
#define RESTAURANT_H_INCLUDED
#include <cstdlib>
#include <iostream>
#include <string>
#include "Pila.h"
#include "Vajilla.h"
#include "Bachero.h"

using namespace std;

#ifndef NULL
#define NULL      0
#endif

typedef struct {

    string Nombre;
    string Origen;
    string Estrellas;
    Pila vajillas;
    Cola bacheros;
} Restaurant;

void crearRestaurant(Restaurant &restaurant);
void setNombre(Restaurant &restaurant, string dato);
void setOrigen(Restaurant &restaurant, string dato);
void setEstrellas(Restaurant &restaurant, string dato);


void agregarVajillaRestaurant(Restaurant &restaurant, Vajilla* ptrVajilla);
void encolarBacheroARestaurant(Restaurant &restaurant, Bachero* ptrBachero);

string getNombre(Restaurant &restaurant);
string getOrigen(Restaurant &restaurant);
string getEstrellas(Restaurant &restaurant);


Vajilla sacarVajillaRestaurant(Restaurant &restaurant);
Vajilla getVajillaRestaurant(Restaurant &restaurant);
void eliminarRestaurant(Restaurant &restaurant);
bool tieneVajilla(Restaurant &restaurant);


#endif // RESTAURANT_H_INCLUDED
