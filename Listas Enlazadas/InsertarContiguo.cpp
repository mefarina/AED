#include <array>

struct Lista{
    std::array<double, 5> arreglo;
    unsigned posicion = 0; 
};

void insert(Lista& lista, unsigned index, double valor){
    std::array<double, 5> aux_a = 0;
    aux_a = lista.arreglo;
    
    lista.arreglo[index] = valor;
    lista.posicion++;
    
    for( ; index < 5 - 1; index++){
        lista.arreglo.at(index + 1) = aux_a.at(index); 
    }     
}
