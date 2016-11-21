#ifndef CANAL_H_INCLUDED
#define CANAL_H_INCLUDED
class Canal {
    private:
        string codigo;
        string nombre;
        string telefono;
        string tiempoMaximoTransmision;
        string tiempoMinimoTransmision;
        double costoMinuto;
        Node* anuncios Contratados;

    public:
        string getCodigo();
        string getNombre();
        string getTelefono();
        string getTiempoMaximoTransmision();
        string getTiempoMinimoTransmision();
        double getCostoMinuto();

        void setCodigo(string codigo);
        void setNombre(string nombre);
        void setTelefono(string telefono);
        void setTiempoMaximoTransmision(string tiempo);
        void setTiempoMinimoTransmision(string tiempo);
        void setCostoMinuto(double costo);


};


#endif // CANAL_H_INCLUDED
