#ifndef LISTAANUNCIOSCONTRATADOS_H_INCLUDED
#define LISTAANUNCIOSCONTRATADOS_H_INCLUDED
class ListaAnunciosContratados {
    public:
        ListaAnunciosContratados();
        void add(Anuncio x);
        void printList();
        void addInOrder(Anuncio x);
        bool findElement(Anuncio x);
        void actualizarCosto(ListaAnuncios anuncios, ListaCanales canales);

    private:
        int size;
        double costoTotal = 0;
        NodoAnuncio * first; //Cabeza
};
#endif // LISTAANUNCIOSCONTRATADOS_H_INCLUDED
