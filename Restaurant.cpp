#include "Restaurant.h"
#include "Pila.h"

void crearRestaurant(Restaurant &restaurant){

   restaurant.Nombre="";
   restaurant.Origen="";
   restaurant.Estrellas="";

    crearPila(restaurant.vajillas);
}
void setNombre(Restaurant &restaurant, string dato){restaurant.Nombre = dato;}
void setOrigen(Restaurant &restaurant, string dato){restaurant.Origen  = dato;}
void setEstrellas(Restaurant &restaurant, string dato){restaurant.Estrellas = dato;}


void agregarVajillaRestaurant(Restaurant &restaurant, Vajilla* ptrVajilla){agregar(restaurant.vajillas, ptrVajilla);}
void encolarBacheroARestaurant(Restaurant &restaurant, Bachero* ptrBachero){encolar(restaurant.bacheros, ptrBachero);}

string getNombre(Restaurant &restaurant){return restaurant.Nombre ;}
string getOrigen(Restaurant &restaurant){return restaurant.Origen ;}
string getEstrellas(Restaurant &restaurant){return restaurant.Estrellas ;}


Vajilla sacarVajillaRestaurant(Restaurant &restaurant){return *((Vajilla*)sacar(restaurant.vajillas));}
Vajilla getVajillaRestaurant(Restaurant &restaurant){return *((Vajilla *)(cima(restaurant.vajillas)->ptrDato));}

void eliminarRestaurant(Restaurant &restaurant){
 while(!pilaVacia(restaurant.vajillas)){

      Restaurant* ptrRestaurant = (Restaurant*) sacar(restaurant.vajillas);
       eliminarRestaurant(*ptrRestaurant);

       delete ptrRestaurant;
     }
}
bool tieneVajilla(Restaurant &restaurant){return !pilaVacia(restaurant.vajillas);}
