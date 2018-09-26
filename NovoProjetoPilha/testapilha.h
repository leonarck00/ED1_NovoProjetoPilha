#ifndef PILHATEST_H
#define PILHATEST_H
#include "pilha.h"
#include <iostream>

class testaPilha
{
private:
    pilha obj;
public:
    testaPilha();
    void menu();
    Livro* criaLivro();
    void mostraPilha();
};

#endif // PILHATEST_H
