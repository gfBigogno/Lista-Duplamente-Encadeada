#ifndef NODO_H
#define NODO_H

#include "Produto.h"

class Nodo {
public:
    Nodo();
    Nodo(const Nodo& orig);
    virtual ~Nodo();
    
    Nodo* GetAnt() const;
    void SetAnt(Nodo* ant);
    Produto GetItem() const;
    void SetItem(Produto item);
    Nodo* GetProx() const;
    void SetProx(Nodo* prox);
    
private:
    Nodo* ant;
    Nodo* prox;
    Produto item;
};

#endif /* NODO_H */

