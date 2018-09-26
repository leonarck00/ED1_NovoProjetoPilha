#ifndef PILHA_H
#define PILHA_H
#include "no.h"
#include <iostream>

class pilha
{
private:
    No* topo;
public:
    bool vazia()const;
    bool empilhar(Livro*);
    Livro* desempilhar();
    pilha();
};

#endif // PILHA_H
