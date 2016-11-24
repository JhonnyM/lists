#ifndef LISTAANUNCIOS_H_INCLUDED
#define LISTAANUNCIOS_H_INCLUDED
#include "nodoAnuncio.h"
class ListaAnuncios {
    public:
        ListaAnuncios();
        void add(Anuncio x);
        void printList();
        bool findElement(Anuncio x);
        int getSize();
        NodoAnuncio getValue();
        //implementar para poder ver la lista de anuncios a vender
    private:
        int size;
        NodoAnuncio * first; //Cabeza
};
#endif // LISTAANUNCIOS_H_INCLUDED
