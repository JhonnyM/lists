#include <iostream>
#include "canal.h"
#include "anuncio.h"
#include "listaAnuncios.cpp"
#include "listaCanales.cpp"
#include "listaAnunciosContratados.cpp"
using namespace std;

int main()
{
    Canal canal6;
    canal6.setNombre("Canal 6");
    canal6.setTelefono("2270-23-67");
    canal6.setCostoMinimo(576.55);

    Canal canal7;
    canal7.setNombre("Teletica");
    canal7.setTelefono("2932-15-16");
    canal7.setCostoMinimo(250);

    Anuncio anuncio;
    anuncio.setCodigoAnuncio("POOO11888");
    anuncio.setCodigoEmpresa("AVA1357");
    anuncio.setNombreEmpresa("Avantica");
    anuncio.setTiempoDuracion(65);

    Anuncio anuncio2;
    anuncio2.setCodigoAnuncio("DS1687445");
    anuncio2.setCodigoEmpresa("GAP2577");
    anuncio2.setNombreEmpresa("GAP");
    anuncio2.setTiempoDuracion(15);

    ListaAnuncios anuncios;
    ListaCanales canales;
    ListaAnunciosContratados anunciosContrados;

    canales.add(canal6);
    canales.add(canal7);

    anuncios.add(anuncio);
    anuncios.add(anuncio2);

    anunciosContrados.add(anuncio2);
    // Agregamos una lista de Anuncios contratados al Canal
    canales.addListaAnunciosToCanal(anunciosContrados);

    cout << "Informacion del canal: " << "Nombre: "<< canal6.getNombre() << " Telefono: " << canal6.getTelefono() << endl;
    cout << "Informacion del anuncio: " << "Nombre: "<< anuncio.getNombreEmpresa() << " Codigo: " << anuncio.getCodigoAnuncio() << endl;
    cout << "-----------------------------------" << endl;
    cout << "Lista de canales: " << endl;
    canales.printList();
    cout << "-----------------------------------" << endl;
    cout << "Lista de anuncios: " << endl;
    anuncios.printList();
    cout << "-----------------------------------" << endl;
    cout << "Lista de anuncios contratados: " << endl;
    anunciosContrados.printList();
    cout << "-----------------------------------" << endl;
    cout << "Metodo imprime canal: " << endl;
    // revisar este metodo me esta danto un problema de memoria
    // hay que agregar una validacion y verificar si la lista de los anuncios contratados esta vacia
    canales.imprimeCanal(canal6);
}
