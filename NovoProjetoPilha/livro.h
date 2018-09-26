#ifndef LIVRO_H
#define LIVRO_H
#include <iostream>
class Livro
{
private:
    std::string Titulo, Autor, Isbn;
public:
    std::string getTitulo();
    std::string getAutor();
    std::string getIsbn();
    std::string getLivro();
    void setTitulo(std::string aux);
    void setAutor(std::string aux);
    void setIsbn(std::string aux);


};

#endif // LIVRO_H
