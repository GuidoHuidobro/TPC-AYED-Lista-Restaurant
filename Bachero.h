#ifndef BACHERO_H_INCLUDED
#define BACHERO_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

#ifndef NULL
#define NULL      0
#endif


typedef struct{
        string NombreBachero;
        int Edad;

        } Bachero;

void crearBachero(Bachero &bachero);

void setNombreBachero(Bachero &bachero, string dato);
void setEdad(Bachero &bachero, int dato);

string getNombreBachero(Bachero &bachero);
int getEdad(Bachero &bachero);

void eliminarBachero(Bachero &bachero);


#endif // BACHERO_H_INCLUDED
