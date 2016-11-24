#ifndef LISTAANUNCIOSCONTRATADOS_H_INCLUDED
#define LISTAANUNCIOSCONTRATADOS_H_INCLUDED
#include "anuncio.h"
#include "nodoAnuncio.h"
class ListaAnunciosContratados {
    public:
        ListaAnunciosContratados();
        void add(Anuncio x);
        void printList();
        void addInOrder(Anuncio x);
        bool findElement(Anuncio x);
        void setCostoTotal(double x);
        double getCostoTotal();
        NodoAnuncio* getActualValue();

    private:
        int size;
        double costoTotal = 0;
        NodoAnuncio * first; //Cabeza
};
#endif // LISTAANUNCIOSCONTRATADOS_H_INCLUDED
