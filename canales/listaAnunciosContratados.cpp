#include "listaAnunciosContratados.h"
#include "nodoAnuncio.h"
#include "anuncio.h"

ListaAnunciosContratados::ListaAnunciosContratados() {
    size = 0;
    first = 0; //NULL this is the head
}

void ListaAnunciosContratados::add(Anuncio x){
    NodoAnuncio *nuevo = new NodoAnuncio(x);

    if(first == 0){
        first = nuevo;
    }else {
        nuevo->setSig(first);
        first = nuevo;
    }
    size += 1;
}

void ListaAnunciosContratados::printList(){
    NodoAnuncio * aux;
    aux = first;
    Anuncio anuncio;
    while(aux) {
     anuncio = aux->getDato();
     cout << " Nombre Empresa: " << anuncio.getNombreEmpresa() << " Codigo Empresa: " << anuncio.getCodigoEmpresa() << " Codigo Anuncio: "<< anuncio.getCodigoAnuncio() << " Duracion: "<< anuncio.getTiempoDuracion() << " -> ";
     aux = aux->getSig();
    }
    cout << endl;
}

bool ListaAnunciosContratados::findElement(Anuncio x){
    NodoAnuncio *aux;
    bool resultado = false;
    return resultado;
}

void ListaAnunciosContratados::actualizarCosto(ListaAnuncios *anuncios, ListaCanales *canales){
    //validar el monto a cobrar por el tiempo
    ListaAnuncios *aux = anuncios;
    ListaCanales *auxCanales;

    double montoAnuncio;
    int tiempoTotal;
    NodoAnuncio nodoAux;
    Anuncio anuncio;
    //recorremos la lista de anuncios para ver el tiempo y calcular el monto
    while(aux != NULL){
        nodoAux = aux->getValue();
        anuncio = nodoAux->getDato();
        tiempoTotal = tiempoTotal + anuncio->getTiempoDuracion(); // calculamos el tiempo total de los anuncios hay que agregar validaciones
    }


}

