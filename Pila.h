#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

#ifndef NULL
#define NULL      0
#endif

typedef void* PtrDato;

struct NodoPila {
    PtrDato ptrDato; // dato almacenado
    NodoPila* sgte; // puntero al siguiente
};

typedef NodoPila* PtrNodoPila;

struct Pila{
    PtrNodoPila primero;      // puntero al primer nodo de la pila
};

void crearPila(Pila &pila);
PtrNodoPila finPila();
bool pilaVacia(Pila &pila);
PtrNodoPila cima(Pila &pila);
PtrNodoPila agregar(Pila &pila, PtrDato ptrDato);
PtrDato sacar(Pila &pila);
void eliminarPila(Pila &pila);



#endif // PILA_H_INCLUDED
