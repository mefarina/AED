//Escribir un programa que use Pilas y Colas

struct Pila{
    Nodo* top = nullprt;
}

struct Queue{
    Nodo* head = nullprt;
}

int main() {
    Pila pila;
    Queue cola;

    push(pila, 5); //Pasa pila y valor, inserta al principio
    pop(pila); // Borra el primer valor de la pila

    queue(cola, 20); //Inserta valor 20 al final de la queue
    dequeue(cola); //Saca el valor del principio
}