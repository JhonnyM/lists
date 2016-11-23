#ifndef NODOANUNCIO_H_INCLUDED
#define NODOANUNCIO_H_INCLUDED
#include "anuncio.h"
class NodoAnuncio{
    public:
        NodoAnuncio();
        NodoAnuncio(Anuncio x);
        ~NodoAnuncio();
        void setDato(Anuncio x);
        Anuncio getDato();
        void setSig(NodoAnuncio *n);
        NodoAnuncio* getSig();
    private:
        Anuncio dato;
        NodoAnuncio *siguiente;
};
#endif // NODOANUNCIO_H_INCLUDED
