#include "listaAnuncios.h"
#include "nodoAnuncio.h"
#include "anuncio.h"

ListaAnuncios::ListaAnuncios() {
    size = 0;
    first = 0; //NULL this is the head
}

void ListaAnuncios::add(Anuncio x){
    NodoAnuncio *nuevo = new NodoAnuncio(x);

    if(first == 0){
        first = nuevo;
    }else {
        nuevo->setSig(first);
        first = nuevo;
    }
    size += 1;
}

void ListaAnuncios::printList(){
    NodoAnuncio *aux;
    aux = first;
    Anuncio anuncio;
    while(aux) {
     anuncio = aux->getDato();
     cout << " Nombre Empresa: " << anuncio.getNombreEmpresa() << " Codigo Empresa: " << anuncio.getCodigoEmpresa() << " Codigo Anuncio: "<< anuncio.getCodigoAnuncio() << " Duracion: "<< anuncio.getTiempoDuracion() << " -> ";
     aux = aux->getSig();
    }
    cout << endl;
}

bool ListaAnuncios::findElement(Anuncio x){
    NodoAnuncio *aux;
    bool resultado = false;
    return resultado;
}

int ListaAnuncios::getSize(){
    return size;
}
/*
NodoAnuncio ListaAnuncios::getValue(){
    return first->dato;
}
*/
