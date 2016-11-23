#ifndef NODOANUNCIOCONTRATADO_H_INCLUDED
#define NODOANUNCIOCONTRATADO_H_INCLUDED
class NodoAnuncioContratado{
    public:
        NodoAnuncioContratado();
        NodoAnuncioContratado(AnuncioContratado x);
        ~NodoAnuncioContratado();
        void setDato(AnuncioContratado x);
        AnuncioContratado getDato();
        void setSig(NodoAnuncioContratado *n);
        NodoAnuncioContratado* getSig();



    private:
        AnuncioContratado dato;
        NodoAnuncioContratado *siguiente;
};


#endif // NODOANUNCIOCONTRATADO_H_INCLUDED
