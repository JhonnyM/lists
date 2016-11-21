#ifndef ANUNCIO_H_INCLUDED
#define ANUNCIO_H_INCLUDED
class Anuncio{
    private:
        string codigoEmpresa;
        string nombreEmpresa;
        string codigoAnuncio;
        string tiempoDuracion;

    public:
        string getCodigoEmpresa();
        string getNombreEmpresa();
        string getCodigoAnuncio();
        string getTiempoDuracion();

        void setCodigoEmpresa(string codigo);
        void setNombreEmpresa(string nombre);
        void setCodigoAnuncio(string codigo);
        void setTiempoDuracion(string tiempo);


};


#endif // ANUNCIO_H_INCLUDED
