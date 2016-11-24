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

void ListaAnunciosContratados::setCostoTotal(double costoTotal){
    this->costoTotal = costoTotal;
}

double ListaAnunciosContratados::getCostoTotal(){
    return costoTotal;
}

NodoAnuncio* ListaAnunciosContratados::getActualValue(){
    return first;
}
// Creo que esto tiene que ir en la parte de la lista de los canales
/*
void ListaAnunciosContratados::actualizarCosto(ListaAnuncios *anuncios, ListaCanales *canales){
    //validar el monto a cobrar por el tiempo
    ListaAnuncios *aux = anuncios;
    ListaCanales *auxCanales = canales;

    double montoAnuncio;
    int tiempoTotal;
    NodoAnuncio nodoAuxAnun;
    NodoCanal nodoAuxCanal;
    Anuncio anuncio;
    Canal canal;
    // recorremos la lista de canales
    while(auxCanales != NULL){
        nodoAuxCanal = auxCanales->getValue();
        canal = nodoAuxCanal->getData();
        //recorremos la lista de anuncios para ver el tiempo y calcular el monto
        while(aux != NULL){
            nodoAuxAnun = aux->getValue();
            anuncio = nodoAuxAnun->getDato();
            // calculamos el tiempo total de los anuncios hay que agregar validaciones
            tiempoTotal = tiempoTotal + anuncio->getTiempoDuracion();
        }
        auxCanales->
    }



}
*/
