#ifndef LDENCADEADAPROD_H
#define LDENCADEADAPROD_H

#include "Nodo.h"

class LDEncadeadaProd {
public:
    LDEncadeadaProd();
    LDEncadeadaProd(const LDEncadeadaProd& orig);
    virtual ~LDEncadeadaProd();
    
    void inserir(Produto p);
    void remover();
    
    void inserir(Produto p, int posicao);
    void remover(int posicao);
    
    Nodo* getElemento(int n);
    
    Nodo* GetHead() const;
    void SetHead(Nodo* head);
    int GetQuant() const;
    void SetQuant(int quant);

private:
    int quant;
    Nodo* head;
};

#endif /* LDENCADEADAPROD_H */

