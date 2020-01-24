#include "Nodo.h"

struct Lista {
    Nodo* primero = nullptr;   
};

void Insert(Lista&, unsigned, int);
void Remove(Lista&, unsigned);
