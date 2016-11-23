#ifndef ANUNCIOCONTRATADO_H_INCLUDED
#define ANUNCIOCONTRATADO_H_INCLUDED
class AnuncioContratado{
    private:
        double costoTotal = 0;
        string codigoAnuncio;
        // Necesito agregar un puntero al nodo del anuncio en la lista de los Anuncios
        // Tal vez por medio de los codigos del anuncio
    public:
        void setCostoTotal(double costoTotal);
        double getCostoTotal();
        void actualizarCobro(ListaAnuncios anucios, ListaCanales canales); // Metodo para poder realizar el calculo de los montos por medio del tiempo

};


#endif // ANUNCIOCONTRATADO_H_INCLUDED
