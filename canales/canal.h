#ifndef CANAL_H_INCLUDED
#define CANAL_H_INCLUDED
#include <iostream>
using namespace std;
class Canal {
    private:
        string codigo;
        string nombre;
        string telefono;
        int tiempoMaximoTransmision;
        int tiempoMinimoTransmision;
        double costoMinuto;
        double costoMinimo;
    public:
        string getCodigo();
        string getNombre();
        string getTelefono();
        int getTiempoMaximoTransmision();
        int getTiempoMinimoTransmision();
        double getCostoMinuto();
        double getCostoMinimo();

        void setCodigo(string codigo);
        void setNombre(string nombre);
        void setTelefono(string telefono);
        void setTiempoMaximoTransmision(int tiempo);
        void setTiempoMinimoTransmision(int tiempo);
        void setCostoMinuto(double costo);
        void setCostoMinimo(double costo);


};


#endif // CANAL_H_INCLUDED
