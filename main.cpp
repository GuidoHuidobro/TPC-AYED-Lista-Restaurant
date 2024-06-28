#include <iostream>
#include<stdlib.h>
#include <conio.h>
#include<cstdlib>
#include "Lista.h"
#include "Cola.h"
#include "Pila.h"
#include "Restaurant.h"
#include "Vajilla.h"
#include "Bachero.h"

using namespace std;

void imprimirRestaurant(Restaurant restaurant){

     cout << "--------- Restaurant ---------- "<< endl;
      cout << "Nombre: " << getNombre(restaurant) << endl;
     cout << "Origen: " << getOrigen(restaurant) << endl;
     cout << "Estrellas: " << getEstrellas(restaurant) << endl;
     cout << endl;

}

void imprimirVajillas(Vajilla vajilla){

     cout << "--------- Vajilla ---------- "<< endl;
     cout << "Tipo: " << getTipo(vajilla)<< endl;
     cout << "Cantidad: " << getCantidad(vajilla)<< endl;
     cout << endl;
}

void imprimirBacheros(Bachero bachero){
   cout << "--------- Bachero ---------- "<< endl;
     cout << "Nombre " << getNombreBachero(bachero)<< endl;
     cout << "Edad: " << getEdad(bachero)<< endl;
      cout << endl;

}


/// FALTARIA: MODIFICAR,ELIMINAR,DESAPILAR,DESENCOLAR,MOSTRAR LA LISTA CON LAS COSAS AGREGADAS

int main()
{

    Lista restaurant;
    Restaurant* ptrRestaurant1 = new Restaurant;
    Restaurant* ptrRestaurant2 = new Restaurant;

    Pila pilaVajillas;
    Vajilla* ptrVajilla1 = new Vajilla;
    Vajilla* ptrVajilla2 = new Vajilla;
    Vajilla* ptrVajilla3 = new Vajilla;

    Cola colaBacheros;
    Bachero* ptrBachero1 = new Bachero;
    Bachero* ptrBachero2 = new Bachero;
    Bachero* ptrBachero3 = new Bachero;
    Bachero* ptrBachero4 = new Bachero;
    Bachero* ptrBachero5 = new Bachero;




    int opcion;
    bool repetir = true;

    do {
        system("cls");


        cout << "Menu de Opciones \n" << endl;
        cout << "1. Crear Lista,Crear Restaurant,Agregar Restaurant" << endl;
        cout << "2. Agregar vajilla a restaurant" << endl;
        cout << "3. Crear Y Encolar Bacheros" << endl;

        cout << "4. Mostrar Lista Restaurant" << endl;
        cout << "5. Mostrar Pila de Vajillas" << endl;
        cout << "6. Mostrar Cola de Bacheros" << endl;
        cout << "0. SALIR" << endl;




        cout << "\nIngrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                crearLista(restaurant);
                crearRestaurant(*ptrRestaurant1);
                setNombre(*ptrRestaurant1,"Don Nicola");
                setOrigen(*ptrRestaurant1, "Italiano");
                setEstrellas(*ptrRestaurant1, "3 Estrellas");

                crearRestaurant(*ptrRestaurant2);
                 setNombre(*ptrRestaurant2,"Las Palmas");
                setOrigen(*ptrRestaurant2, "Pizzeria");
                setEstrellas(*ptrRestaurant2, "2 Estrellas");
                adicionarPrincipio(restaurant, ptrRestaurant1);
               adicionarFinal(restaurant,ptrRestaurant2);
                cout << "\n Operacion Realizada con exito,presione una tecla para continuar" << endl;
                system("pause>nul"); // Pausa
                break;

                 case 2:
                 crearVajilla(*ptrVajilla1);
                 crearVajilla(*ptrVajilla2);
                 crearVajilla(*ptrVajilla3);
                setTipo(*ptrVajilla1,"cacerola");
                setCantidad(*ptrVajilla1, 5);
                 setTipo(*ptrVajilla2,"Plato");
                setCantidad(*ptrVajilla2, 17);
                setTipo(*ptrVajilla3,"Cubiertos");
                setCantidad(*ptrVajilla3, 45);
                agregarVajillaRestaurant(*ptrRestaurant1, ptrVajilla1);
               agregarVajillaRestaurant(*ptrRestaurant1, ptrVajilla2);
               agregarVajillaRestaurant(*ptrRestaurant1, ptrVajilla3);
                cout << "\n Vajilla Creada y agregada a la pila,presione una tecla para continuar" << endl;
                system("pause>nul"); // Pausa
                break;

                case 3:
                crearCola(colaBacheros);
                crearBachero(*ptrBachero1);
                 crearBachero(*ptrBachero2);
                 crearBachero(*ptrBachero3);
                 crearBachero(*ptrBachero4);
                 crearBachero(*ptrBachero5);
                setNombreBachero(*ptrBachero1,"Juanito");
                setEdad(*ptrBachero1, 27);
                setNombreBachero(*ptrBachero2,"Pepito");
                setEdad(*ptrBachero2, 25);
                setNombreBachero(*ptrBachero3,"Fulanito");
                setEdad(*ptrBachero3, 32);
                setNombreBachero(*ptrBachero4,"Menganito");
                setEdad(*ptrBachero4, 17);
                setNombreBachero(*ptrBachero5,"Josesito");
                setEdad(*ptrBachero5, 22);
                encolarBacheroARestaurant(*ptrRestaurant1,ptrBachero1);
                encolarBacheroARestaurant(*ptrRestaurant1,ptrBachero2);
                encolarBacheroARestaurant(*ptrRestaurant1,ptrBachero3);
                encolarBacheroARestaurant(*ptrRestaurant1,ptrBachero4);
                encolarBacheroARestaurant(*ptrRestaurant1,ptrBachero5);
                cout << "\n Operacion Realizada con exito,presione una tecla para continuar"<< endl;
                system("pause>nul"); // Pausa
                break;

                case 4:
                imprimirRestaurant(*ptrRestaurant1);
                imprimirRestaurant(*ptrRestaurant2);
                cout << "\n presione una tecla para continuar" << endl;
                system("pause>nul"); // Pausa
                break;

                case 5:
                imprimirVajillas(*ptrVajilla1);
                imprimirVajillas(*ptrVajilla2);
                imprimirVajillas(*ptrVajilla3);
                cout << "\n presione una tecla para continuar" << endl;
                system("pause>nul"); // Pausa
                break;

                case 6:
                imprimirBacheros(*ptrBachero1);
                imprimirBacheros(*ptrBachero2);
                imprimirBacheros(*ptrBachero3);
                imprimirBacheros(*ptrBachero4);
                imprimirBacheros(*ptrBachero5);
                cout << "\n presione una tecla para continuar" << endl;
                system("pause>nul");
                break;

                case 0:
            	repetir = false;
            	break;

        }
    } while(repetir);

    return 0;
}



