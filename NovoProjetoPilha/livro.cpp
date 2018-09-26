#include "livro.h"




std::string Livro::getTitulo()
{
    return Titulo;
}

std::string Livro::getAutor()
{
    return Autor;
}

std::string Livro::getIsbn()
{
    return Isbn;
}

std::string Livro::getLivro()
{
    std::string aux = "\ntitulo: "+Titulo+"\nAutor: "+ Autor + "Isbn: "+ Isbn;
    return aux;
}

void Livro::setTitulo(std::string aux)
{
    Titulo = aux;
}

void Livro::setAutor(std::string aux)
{
    Autor = aux;
}

void Livro::setIsbn(std::string aux)
{
    Isbn = aux;
}
