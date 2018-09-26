#include "pilha.h"

pilha::pilha()
{
    topo = 0;
}
bool pilha::vazia()const{ // verificar se esta vazia
    if(topo == 0){
        return true;
    }
    return false;
}
bool pilha::empilhar(Livro* aux){ // colocar elemento na pilha
    if(aux == 0){ // caso nao existe livro
        return false;
    }
    // caso existe
    No* ptr = No::montaNo(aux);
    ptr->setProximo(topo);
    topo = ptr;
    return true;
}

Livro* pilha::desempilhar(){ // retirar elemento na pilha
    if(vazia() ){ // verificar se livro existe
        return 0;
    }
    No* ptr = topo; //salvei topo
    topo = topo ->getProximo();//retirar
    Livro* ret = No::desmontaNo(ptr);
    return ret;
}
