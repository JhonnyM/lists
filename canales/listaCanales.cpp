#include "listaCanales.h"
#include "nodoCanal.h"
#include "canal.h"
#include "listaAnunciosContratados.h"
ListaCanales::ListaCanales() {
    size = NULL;
    head = NULL; //NULL this is the head
}

void ListaCanales::add(Canal x){
    NodoCanal *nuevo = new NodoCanal(x); // Paso 1 se crea el nodo

    if(head == 0){
        head = nuevo;
    }else {
        nuevo->setSig(head); // se liga el nodo a la lista Paso 2
        head->setAnt(nuevo); // reacomodo de la lista
        head = nuevo; // Paso 4 se inserta el nuevo nodo
    }
    size += 1;
}
// metodo para borrar al inicio de la lista
void ListaCanales::destroy(){
    NodoCanal *aux;
    aux = head;
    aux->setSig(NULL);
    aux->setAnt(NULL);
}

void ListaCanales::printList(){
   NodoCanal * aux;
   ListaAnunciosContratados *auxListaAnunContr;
   Canal canal;
   aux = head;
   while(aux) {
     canal = aux->getData();
     auxListaAnunContr = aux->getAnunciosContratados();
     cout << " Nombre: " << canal.getNombre() << " Telefono: " << canal.getTelefono() << " Costo Minuto: "<< canal.getCostoMinuto() << " -> ";
     aux = aux->getSig();
   }
    cout << endl;
}
// Nos retorna un NodoCanal si el canal esta en la lista
NodoCanal* ListaCanales::findElement(Canal x){
    NodoCanal *aux = head;
    Canal canal;
    NodoCanal *result;
    while(aux){
        canal = aux->getData();
        if(canal.getCodigo() == x.getCodigo()){
            result = aux;
            break;
        }
    }
    return result;
}

void ListaCanales::addListaAnunciosToCanal(ListaAnunciosContratados y){
    ListaAnunciosContratados *aux = &y;
    if(head != NULL){
        head->setAnunciosContratados(aux);
        cout << "Anuncio agregado satisfactoriamente" << endl;
    } else {
        cout << "No se puede agregar a un nodo vacio" << endl;
    }
}

void ListaCanales::actualizarCosto(){
    NodoCanal * aux;
    ListaAnunciosContratados *auxListaAnunContr;
    aux = head;
    Anuncio anuncio;
    Canal canal;
    double costoAnuncio;
    double costoTotal = 0;
    // iteramos por los canales
    while(aux) {
     auxListaAnunContr = aux->getAnunciosContratados();
     //Necesitamos la cabeza de la lista para poder recorrerla
     NodoAnuncio *auxAnuncio = auxListaAnunContr->getActualValue();
     while(auxAnuncio){
        anuncio = auxAnuncio->getDato();
        canal = aux->getData();
        // Calcular las validaciones para porder actualizar el monto de la lista
        if(anuncio.getTiempoDuracion() < canal.getTiempoMinimoTransmision()){
            //calculamos el monto minimo a pagar
            costoAnuncio = canal.getTiempoMinimoTransmision() * canal.getCostoMinuto();
        } else if (anuncio.getTiempoDuracion() > canal.getTiempoMaximoTransmision()){
            // calculamos el monto a pagar si se pasa del tiempo maximo
            costoAnuncio = (anuncio.getTiempoDuracion() * canal.getCostoMinuto())*2;
        } else {
            // monton normal si no hay ninguna penalizacion
            costoAnuncio = anuncio.getTiempoDuracion() * canal.getCostoMinuto();
        }
        auxAnuncio = auxAnuncio->getSig();
     }
     costoTotal = costoTotal + costoAnuncio;
     aux = aux->getSig();
   }
    auxListaAnunContr->setCostoTotal(costoTotal);
}

double ListaCanales::montoAPagar(Canal canal, int tiempo){
    double monto;
    if(tiempo < canal.getTiempoMinimoTransmision()){
        monto = canal.getTiempoMinimoTransmision() * canal.getCostoMinimo();
    } else if (tiempo > canal.getTiempoMaximoTransmision()){
        monto = (tiempo * canal.getCostoMinuto())*2;
    } else {
        monto = tiempo * canal.getCostoMinuto();
    }
    return monto;
}

void ListaCanales::imprimeCanal(Canal x){
    // tenemos que buscar el canal
    NodoCanal *aux = findElement(x);
    ListaAnunciosContratados *auxListaAnuncios;
    if(aux != NULL){
        auxListaAnuncios = aux->getAnunciosContratados();
        NodoAnuncio *actualValue = auxListaAnuncios->getActualValue();
        //imprimir informacion del canal
        cout << "Informacion del Canal:" << endl;
        cout << "Nombre: " << x.getNombre() << endl;
        cout << "Informacion de los Anuncios contratados:" << endl;
        while(actualValue){
            Anuncio auxAnuncio = actualValue->getDato();
            cout << "Codigo del Anuncio:" << endl;
            cout << auxAnuncio.getCodigoAnuncio() << endl;
            cout << "Codigo de la Empresa:" << endl;
            cout << auxAnuncio.getCodigoEmpresa() << endl;
            cout << "Nombre de la Empresa:" << endl;
            cout << auxAnuncio.getNombreEmpresa() << endl;
            cout << "Nombre de la Empresa:" << endl;
            cout << auxAnuncio.getNombreEmpresa() << endl;
            cout << "Monto a pagar:" << endl;
            cout <<  montoAPagar(x,auxAnuncio.getTiempoDuracion()) << endl;
            actualValue = actualValue->getSig();
        }
    } else {
        cout << "Ese canal no es valido" << endl;
    }
}



