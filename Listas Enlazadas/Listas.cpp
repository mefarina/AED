#include "Listas.h"

struct Nodo{
    int dato;
    Nodo* next;
};

void Insert(Lista& lista, unsigned index, int valor){
        Nodo* actual = lista.primero;
        Nodo* anterior = new Nodo;
        Nodo* nuevoNodo = nullptr;      

        for(int i = 0; i <= index; i++){
            actual = anterior;
            actual = actual -> next;
        }

        nuevoNodo -> dato = valor;
        nuevoNodo -> next = actual;
        anterior -> next = nuevoNodo;
}