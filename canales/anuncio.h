#ifndef ANUNCIO_H_INCLUDED
#define ANUNCIO_H_INCLUDED
#include <iostream>
using namespace std;
class Anuncio{
    private:
        string codigoEmpresa;
        string nombreEmpresa;
        string codigoAnuncio;
        int tiempoDuracion; //en minutos

    public:
        string getCodigoEmpresa();
        string getNombreEmpresa();
        string getCodigoAnuncio();
        int getTiempoDuracion();

        void setCodigoEmpresa(string codigo);
        void setNombreEmpresa(string nombre);
        void setCodigoAnuncio(string codigo);
        void setTiempoDuracion(int tiempo);


};
#endif // ANUNCIO_H_INCLUDED
