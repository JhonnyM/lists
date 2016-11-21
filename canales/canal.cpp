#include "canal.h"

string Canal::getCodigo(){
    return codigo;
}

double Canal::getCostoMinuto() {
    return costoMinuto;
}

string Canal::getNombre() {
    return nombre;
}

string Canal::getTelefono() {
    return telefono;
}

string Canal::getTiempoMaximoTransmision() {
    return tiempoMaximoTransmision;
}

string Canal::getTiempoMinimoTransmision() {
    return tiempoMinimoTransmision;
}

void Canal::setCodigo(string codigo) {
    this->codigo = codigo;
}

void Canal::setCostoMinuto(double costo) {
    this->costoMinuto = costo;
}

void Canal::setNombre(string nombre) {
    this->nombre = nombre;
}

void Canal::setNombre(string nombre) {
    this->nombre = nombre;
}

void Canal::setTelefono(string telefono) {
    this->telefono = telefono;
}

void Canal::setTiempoMaximoTransmision(string tiempo){
    this->tiempoMaximoTransmision = tiempo;
}

void Canal::setTiempoMinimoTransmision(string tiempo){
    this->tiempoMinimoTransmision = tiempo;
}

void Canal:: (string tiempo){
    this->tiempoMaximoTransmision = tiempo;
}



