#ifndef NODOCANAL_H_INCLUDED
#define NODOCANAL_H_INCLUDED
#include "canal.h"

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



    private:
        Canal dato;
        NodoCanal *siguiente;
        NodoCanal *anterior;
};


#endif // NODOCANAL_H_INCLUDED
