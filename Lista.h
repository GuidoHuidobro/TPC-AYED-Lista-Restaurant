#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#ifndef NULL
#define NULL      0
#endif

enum ResultadoComparacion {
  MAYOR,
  IGUAL,
  MENOR
};

typedef void* PtrDato;

struct NodoLista {
    PtrDato ptrDato;
    NodoLista* sgte;
};

typedef NodoLista* PtrNodoLista;
typedef ResultadoComparacion (*PFComparacion)(PtrDato , PtrDato);

struct Lista{
    PtrNodoLista primero;
    PFComparacion compara;
};

void crearLista(Lista &lista);
PtrNodoLista finLista();
bool listaVacia(Lista &lista);
PtrNodoLista fin();
PtrNodoLista primero(Lista &lista);
PtrNodoLista siguiente(Lista &lista, PtrNodoLista ptrNodo);
PtrNodoLista anterior(Lista &lista, PtrNodoLista ptrNodo);
PtrNodoLista ultimo(Lista &lista);
PtrNodoLista adicionarPrincipio(Lista &lista, PtrDato ptrDato);
PtrNodoLista adicionarDespues(Lista &lista, PtrDato ptrDato, PtrNodoLista ptrNodo);
PtrNodoLista adicionarFinal(Lista &lista, PtrDato ptrDato);
PtrNodoLista adicionarAntes(Lista &lista, PtrDato ptrDato, PtrNodoLista ptrNodo);

void colocarDato(Lista &lista, PtrDato ptrDato, PtrNodoLista ptrNodo);
void obtenerDato(Lista &lista, PtrDato &ptrDato, PtrNodoLista ptrNodo);
void eliminarNodo(Lista &lista, PtrNodoLista ptrNodo);
void eliminarNodoPrimero(Lista &lista);
void eliminarNodoUltimo(Lista &lista);
void eliminarLista(Lista &lista);
PtrNodoLista localizarDato(Lista &lista , PtrDato ptrDato);
PtrNodoLista insertarDato(Lista &lista, PtrDato ptrDato);
void eliminarDato(Lista &lista, PtrDato ptrDato);
void reordenar(Lista &lista);
int longitud(Lista &lista);


#endif // LISTA_H_INCLUDED
