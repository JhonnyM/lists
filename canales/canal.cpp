#include "canal.h"

string Canal::getCodigo(){
    return codigo;
}

double Canal::getCostoMinuto() {
    return costoMinuto;
}

double Canal::getCostoMinimo() {
    return costoMinimo;
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

void Canal::setCostoMinimo(double costo) {
    this->costoMinimo = costo;
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



