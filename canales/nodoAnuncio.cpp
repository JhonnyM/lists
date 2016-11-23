#include "nodoAnuncio.h"

NodoAnuncio::NodoAnuncio(){}

NodoAnuncio::NodoAnuncio(Anuncio dato ){
	this->dato = dato;
	siguiente = NULL;
}

NodoAnuncio::~NodoAnuncio(){
}

void NodoAnuncio::setSig(NodoAnuncio *n){
	siguiente = n;
}

void NodoAnuncio::setDato(Anuncio x){
	dato = x;
}

Anuncio NodoAnuncio::getDato(){
	return dato;
}

NodoAnuncio* NodoAnuncio::getSig(){
	return siguiente;
}
