#include "listaCanales.h"
#include "nodoCanal.h"
#include "canal.h"

ListaCanales::ListaCanales() {
    size = NULL;
    head = NULL; //NULL this is the head
}

void ListaCanales::add(Canal x){
    NodoCanal *nuevo = new NodoCanal(x); // Paso 1 se crea el nodo

    if(head == 0){
        head = nuevo;
    }else {
        nuevo->setSig(head); // se liga el nodo a la lista Paso 2
        head->setAnt(nuevo); // reacomodo de la lista
        head = nuevo; // Paso 4 se inserta el nuevo nodo
    }
    size += 1;
}
// metodo para borrar al nicio de la lista
void ListaCanales::destroy(){
    NodoCanal *aux;
    aux = head;
    aux->setSig(NULL);
    aux->setAnt(NULL);
}

void ListaCanales::printList(){
   NodoCanal * aux;
   Canal canal;
   aux = head;
   while(aux) {
     canal = aux->getData();
     cout << " Nombre: " << canal.getNombre() << " Telefono: " << canal.getTelefono() << " Costo Minuto: "<< canal.getCostoMinuto() << " -> ";
     aux = aux->getSig();
   }
    cout << endl;
}

bool ListaCanales::findElement(Canal x){
    NodoCanal *aux;
    bool resultado = false;
    return resultado;
}

