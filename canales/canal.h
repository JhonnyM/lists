#ifndef CANAL_H_INCLUDED
#define CANAL_H_INCLUDED
#include <iostream>
using namespace std;
class Canal {
    private:
        string codigo;
        string nombre;
        string telefono;
        string tiempoMaximoTransmision;
        string tiempoMinimoTransmision;
        double costoMinuto;
        double costoMinimo;
    public:
        string getCodigo();
        string getNombre();
        string getTelefono();
        string getTiempoMaximoTransmision();
        string getTiempoMinimoTransmision();
        double getCostoMinuto();
        double getCostoMinimo();

        void setCodigo(string codigo);
        void setNombre(string nombre);
        void setTelefono(string telefono);
        void setTiempoMaximoTransmision(string tiempo);
        void setTiempoMinimoTransmision(string tiempo);
        void setCostoMinuto(double costo);
        void setCostoMinimo(double costo);


};


#endif // CANAL_H_INCLUDED
