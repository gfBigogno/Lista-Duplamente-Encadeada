#ifndef PRODUTO_H
#define PRODUTO_H

class Produto {
public:
    Produto();
    Produto(int id, double preco, double custo, int estoque);
    Produto(const Produto& orig);
    virtual ~Produto();
    void copiar(Produto p);

    void preencher();
    void imprimir();

    void SetEstoque(int estoque);
    int GetEstoque() const;
    void SetCusto(double custo);
    double GetCusto() const;
    void SetPreco(double preco);
    double GetPreco() const;
    void SetId(int id);
    int GetId() const;
private:
    int id;
    double preco;
    double custo;
    int estoque;
};

#endif /* PRODUTO_H */

