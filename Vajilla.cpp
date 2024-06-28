#include "Vajilla.h"

void crearVajilla(Vajilla &vajilla)
{
   vajilla.Tipo = " ";
   vajilla.Cantidad= 0 ;

}

void setTipo(Vajilla &vajilla, string dato)
{
    vajilla.Tipo = dato;
}
void setCantidad(Vajilla &vajilla, int dato){ vajilla.Cantidad= dato;}


string getTipo(Vajilla &vajilla){return vajilla.Tipo;}
int getCantidad(Vajilla &vajilla){return vajilla.Cantidad;}


void eliminarVajilla(Vajilla &vajilla)
{

}

