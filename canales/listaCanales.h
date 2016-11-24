#ifndef LISTACANALES_H_INCLUDED
#define LISTACANALES_H_INCLUDED
#include "nodoCanal.h"
class ListaCanales {
    public:
        ListaCanales();
        void add(Canal x);
        void printList();
        NodoCanal* findElement(Canal x);
        void destroy();
        NodoCanal getValue();
        void addListaAnunciosToCanal(ListaAnunciosContratados y);
        void actualizarCosto();
        void imprimeCanal(Canal x);
        double montoAPagar(Canal canal, int tiempo);

    private:
        int size;
        NodoCanal * head; //Cabeza
};

#endif // LISTACANALES_H_INCLUDED
