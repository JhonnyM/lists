#include "nodoAnuncioContratado.h"

NodoAnuncioContratado::NodoAnuncioContratado(){}

NodoAnuncioContratado::NodoAnuncioContratado(AnuncioContratado dato ){
	this->dato = dato;
	siguiente = NULL;
}

NodoAnuncioContratado::~NodoAnuncioContratado(){
}

void NodoAnuncioContratado::setSig(NodoAnuncioContratado *n){
	siguiente = n;
}

void NodoAnuncioContratado::setAnt(NodoAnuncioContratado *n){
	anterior = n;
}

void NodoAnuncioContratado::setDato(AnuncioContratado x){
	dato = x;
}

AnuncioContratado NodoAnuncioContratado::getDato(){
	return dato;
}

NodoAnuncioContratado* NodoAnuncioContratado::getSig(){
	return siguiente;
}

NodoAnuncioContratado* NodoAnuncioContratado::getAnt(){
	return anterior;
}
