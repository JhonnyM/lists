#ifndef NODOCANAL_H_INCLUDED
#define NODOCANAL_H_INCLUDED
#include "canal.h"
#include "listaAnunciosContratados.h"
class NodoCanal{
    public:
        NodoCanal();
        NodoCanal(Canal x);
        ~NodoCanal();
        void setDato(Canal x);
        Canal getData();
        void setSig(NodoCanal *n);
        void setAnt(NodoCanal *n);
        NodoCanal* getSig();
        NodoCanal* getAnt();
        ListaAnunciosContratados* getAnunciosContratados();
        void setAnunciosContratados(ListaAnunciosContratados *n);


    private:
        Canal dato;
        NodoCanal *siguiente;
        NodoCanal *anterior;
        ListaAnunciosContratados *anunciosContratados;
};


#endif // NODOCANAL_H_INCLUDED
