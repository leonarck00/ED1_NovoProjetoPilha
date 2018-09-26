#include "testapilha.h"


testaPilha::testaPilha()
{

}

Livro* testaPilha::criaLivro(){
    Livro* aux = new Livro;
    std::cin.ignore();
    std::cout <<"\nDigite o Titulo do livro : ";
    std::string entrada;
    std::getline(std::cin,entrada);
    aux->setTitulo(entrada);

    std::cout <<"\nDigite o Autor do livro : ";
    std::getline(std::cin,entrada);
    aux->setAutor(entrada);

    std::cout <<"\nISBN : ";
    std::getline(std::cin,entrada);
    aux->setIsbn(entrada);
    return aux;
}

void testaPilha::mostraPilha(){
    pilha aux;
    Livro* mostra;
    while(!obj.vazia()){
        mostra = obj.desempilhar();
        std::cout << mostra->getLivro() << "\n";
        aux.empilhar(mostra);
    }
    while(!aux.vazia()){
        obj.empilhar(aux.desempilhar());
    }
}

void testaPilha::menu(){
    Livro* aux;
    bool ok;
    int op;
    do{
        do{
            std::cout <<"Digite: \n";
            std::cout <<"1 - Empilhar\n";
            std::cout <<"2 - desempilhar\n";
            std::cout <<"3 - Mostrar Pilhar\n";
            std::cout <<"4 - Encerrar\n";
            std::cin >> op;
        }while(op < 1 || op > 4);
        switch(op){
            case 1: // inserir
                aux = criaLivro();
                ok = obj.empilhar(aux);
                if(ok){
                    std::cout <<"Sucesso\n";
                }else{
                    std::cout <<"Erro\n";
                }
                aux = 0;
            break;

            case 2: // retirar
                aux = obj.desempilhar();
                if(aux != 0){
                    std::cout << aux->getLivro();
                }else{
                    std::cout <<"Erro\n";
                }
                aux = 0;
            break;

            case 3: // mostra Pilha
                mostraPilha();
                        break;

            case 4: //Encerrar
                std::cout <<"encerrando\n";
            break;
        }
    }while(op != 4);
}
