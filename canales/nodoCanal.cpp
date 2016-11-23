#include "nodoCanal.h"

NodoCanal::NodoCanal(){}

NodoCanal::NodoCanal(Canal dato ){
	this->dato = dato;
	siguiente = NULL;
}

NodoCanal::~NodoCanal(){
}

void NodoCanal::setSig(NodoCanal *n){
	siguiente = n;
}

void NodoCanal::setAnt(NodoCanal *n){
	anterior = n;
}

void NodoCanal::setDato(Canal x){
	dato = x;
}

Canal NodoCanal::getData(){
	return dato;
}

NodoCanal* NodoCanal::getSig(){
	return siguiente;
}

NodoCanal* NodoCanal::getAnt(){
	return anterior;
}
