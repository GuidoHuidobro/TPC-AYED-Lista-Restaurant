#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

#ifndef NULL
#define NULL      0
#endif
typedef void* PtrDato;

struct NodoCola {
    PtrDato ptrDato; // dato almacenado
    NodoCola* sgte; // puntero al siguiente
};

typedef NodoCola* PtrNodoCola;

struct Cola{
    PtrNodoCola primero;      // puntero al primer nodo de la pila
    PtrNodoCola ultimo;       // puntero al ultimo nodo de la pila
};

void crearCola(Cola &cola);
PtrNodoCola finCola();
bool colaVacia(Cola &cola);
PtrNodoCola colaFrente(Cola &cola);
PtrNodoCola colaFin(Cola &cola);
PtrNodoCola encolar(Cola &cola, PtrDato ptrDato);
PtrDato desencolar(Cola &cola);
void eliminarCola(Cola &cola);


#endif // COLA_H_INCLUDED
