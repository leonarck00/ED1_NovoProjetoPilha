#include "no.h"

No::No()
{

}

No* No::getProximo()const
{
    return Proximo;
}

Livro* No::getDados()const
{
    return Dados;
}

void No::setProximo(No* aux)
{
    Proximo=aux;
}

void No::setDados(Livro* aux)
{
    Dados=aux;
}

No* No::montaNo(Livro* aux)
{
    No* retorno = new No;
    retorno->setProximo(0);
    retorno->setDados(aux);
    return retorno;
}

Livro* No::desmontaNo(No* aux)
{
    if(aux==0)
        return 0;
    else
    {
        Livro* retorno= aux->getDados();
        delete aux;
        return retorno;
    }
}
