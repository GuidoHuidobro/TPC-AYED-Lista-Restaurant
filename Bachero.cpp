#include "Bachero.h"

void crearBachero(Bachero &bachero)
{
    bachero.NombreBachero = "";
    bachero.Edad = 0;


}

void setNombreBachero(Bachero &bachero, string dato)
{
    bachero.NombreBachero = dato;
}
void setEdad(Bachero &bachero, int dato){ bachero.Edad= dato;}


string getNombreBachero(Bachero &bachero){return bachero.NombreBachero;}
int getEdad(Bachero &bachero){return bachero.Edad;}


void eliminarBachero(Bachero &bachero)
{

}
