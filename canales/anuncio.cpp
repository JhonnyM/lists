#include "anuncio.h"

void Anuncio::setCodigoAnuncio(string codigo){
    this->codigoAnuncio = codigo;
}

void Anuncio::setCodigoEmpresa(string codigo){
    this->codigoEmpresa = codigo;
}

void Anuncio::setNombreEmpresa(string nombre){
    this->nombreEmpresa = nombre;
}

void Anuncio::setTiempoDuracion(string tiempo){
    this->tiempoDuracion = tiempo;
}

string Anuncio::getCodigoEmpresa(){
    return codigoEmpresa;
};

string Anuncio::getNombreEmpresa(){
    return nombreEmpresa;
};

string Anuncio::getCodigoAnuncio(){
    return codigoAnuncio;
};

string Anuncio::getTiempoDuracion(){
    return tiempoDuracion;
};
