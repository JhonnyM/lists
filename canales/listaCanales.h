#ifndef LISTACANALES_H_INCLUDED
#define LISTACANALES_H_INCLUDED
#include "nodoCanal.h"
class ListaCanales {
    public:
        ListaCanales();
        void add(Canal x);
        void printList();
        bool findElement(Canal x);
        void destroy();

    private:
        int size;
        NodoCanal * head; //Cabeza
};

#endif // LISTACANALES_H_INCLUDED
