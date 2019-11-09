#include "LDEncadeadaProd.h"
#include <stddef.h>

LDEncadeadaProd::LDEncadeadaProd() {
    this->head = NULL;
    this->quant = 0;
}

LDEncadeadaProd::LDEncadeadaProd(const LDEncadeadaProd& orig) {
    this->head = orig.GetHead();
    this->quant = orig.GetQuant();
}

LDEncadeadaProd::~LDEncadeadaProd() {
}

Nodo* LDEncadeadaProd::getElemento(int n){
    Nodo* c = head;
    int i=1;
    while(i <= n-1 && c->GetProx() != NULL){
        c = c->GetProx();
        i++;
    }
    if(i == n){
        return c;
    }else{
        return NULL;
    }
}

void LDEncadeadaProd::inserir(Produto p){
    Nodo* novo = new Nodo();
    novo->SetAnt(NULL);
    novo->SetItem(p);
    
    head->SetAnt(novo);
    novo->SetProx(head);
    head = novo;
    
    this->quant++;
}

void LDEncadeadaProd::inserir(Produto p, int posicao){
    Nodo* novo = new Nodo();
    novo->SetItem(p);
    
    Nodo* n = getElemento(posicao);
    Nodo* atras = n->GetAnt();
    
    novo->SetProx(n);
    n->SetAnt(novo);
    
    novo->SetAnt(atras);
    atras->SetProx(novo);
    
    this->quant++;
}

void LDEncadeadaProd::remover(){
    head = head->GetProx();
    head->SetAnt(NULL);
    
    this->quant--;
}

void LDEncadeadaProd::remover(int posicao){
    Nodo* sai = getElemento(posicao);
    Nodo* proxSai = sai->GetProx();
    Nodo* antSai = sai->GetAnt();
    
    proxSai->SetAnt(antSai);
    antSai->SetProx(proxSai);
    
    this->quant--;
}

Nodo* LDEncadeadaProd::GetHead() const {
    return head;
}

void LDEncadeadaProd::SetHead(Nodo* head) {
    this->head = head;
}

int LDEncadeadaProd::GetQuant() const {
    return quant;
}

void LDEncadeadaProd::SetQuant(int quant) {
    this->quant = quant;
}
