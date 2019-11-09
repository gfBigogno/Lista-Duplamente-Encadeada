#include "Produto.h"

Produto::Produto() {
    this->id = -1;
    this->preco = 0.0;
    this->custo = 0.0;
    this->estoque = -1;
}

Produto::Produto(int id, double preco, double custo, int estoque){
    this->id = id;
    this->preco = preco;
    this->custo = custo;
    this->estoque = estoque;
}

Produto::Produto(const Produto& orig) {
    this->id = orig.GetId();
    this->preco = orig.GetPreco();
    this->custo = orig.GetCusto();
    this->estoque = orig.GetEstoque();
}

Produto::~Produto() {
}

void Produto::SetEstoque(int estoque) {
    this->estoque = estoque;
}

int Produto::GetEstoque() const {
    return estoque;
}

void Produto::SetCusto(double custo) {
    this->custo = custo;
}

double Produto::GetCusto() const {
    return custo;
}

void Produto::SetPreco(double preco) {
    this->preco = preco;
}

double Produto::GetPreco() const {
    return preco;
}

void Produto::SetId(int id) {
    this->id = id;
}

int Produto::GetId() const {
    return id;
}

