#ifndef NO_H
#define NO_H
#include <livro.h>

class No
{
private:
    No* Proximo;
    Livro* Dados;
public:
    No* getProximo() const;
    Livro* getDados() const;
    void setProximo(No*);
    void setDados(Livro*);
    static No* montaNo(Livro*);
    static Livro* desmontaNo(No*);
    No();
};

#endif // NO_H
