#include <stddef.h>
#include "Nodo.h"

Nodo::Nodo() {
    this->ant = NULL;
    this->prox = NULL;
}

Nodo::Nodo(const Nodo& orig) {
}

Nodo::~Nodo() {
}

Nodo* Nodo::GetAnt() const {
    return ant;
}

void Nodo::SetAnt(Nodo* ant) {
    this->ant = ant;
}

Produto Nodo::GetItem() const {
    return item;
}

void Nodo::SetItem(Produto item) {
    this->item = item;
}

Nodo* Nodo::GetProx() const {
    return prox;
}

void Nodo::SetProx(Nodo* prox) {
    this->prox = prox;
}