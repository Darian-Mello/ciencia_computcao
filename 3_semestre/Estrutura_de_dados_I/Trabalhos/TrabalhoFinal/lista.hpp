#ifndef _HPP_LISTA
#define _HPP_LISTA


#include <string>
#include <iostream>


//pré-declaração da struct Usuario
struct Usuario;

struct No
{
    Usuario *dado; //referencia do usuário, evita duplicar dados entre as lista de amigos e a lista de usuários da rede
    No *prox;

    No()
    {
        dado = nullptr;
        prox = nullptr;
    }
};

struct Lista
{
    No* inicio;
    No* fim;
    int tamanho;
    Lista() //inicializa a lista!
    {
        inicio = nullptr;
        fim = nullptr;
        tamanho = 0;
    }
    ~Lista() //destroi a lista!
    {

        No *n = inicio;
        while(n)
        {
            No *aux = n;
            n = n->prox;

            delete aux; //apaga apenas o nó, "Usuario *dado" ainda permanece alocado
        }
        inicio = nullptr;
        fim = nullptr;
        tamanho = 0;
    }
};

//alocar memória para criar um usuário: Usuario* usr = new  Usuario(1, 20, 0, "Joao");"
struct Usuario
{
    int ID;
    int idade;
    int sexo;
    std::string nome;
    Lista *amigos; //lista de amigos


    Usuario(int id, int ida, int sx, string nm)
    {
        ID = id;
        idade = ida;
        sexo = sx;
        nome =  nm;
        amigos = new Lista();
    }

    Usuario()
    {
        ID = 0;
        idade = 0;
        sexo = 0;
        nome =  "";
        amigos = nullptr;
    }

    ~Usuario()
    {

        if(amigos)
            delete amigos;
        amigos = nullptr;

        ID = 0;
        idade = 0;
        sexo = 0;
        nome =  "";
        amigos = nullptr;
    }
};

void insereOrdenadoL(No **lista, Usuario *valor){

    No *anterior = NULL;
    No *atual = *lista;
    while(atual && atual->dado->ID < valor->ID){
        anterior = atual;
        atual = atual->prox;
    }

    No *novo = new No();
    novo->dado = valor;
    if(!anterior){
        novo->prox = *lista;
        *lista = novo;
    }
    else{
        novo->prox = anterior->prox;
        anterior->prox = novo;
    }

}

No *buscaL(Lista *lista, int valor)
{
    No *n = lista->inicio;
    while (n)
    {
        if (n->dado->ID == valor)
            return n;

        n = n->prox;
    }

    return nullptr;
}

ostream& operator<<(ostream& os, const No *n)
{
    /// cout << n
    return os << n->dado->nome << " (" << n->dado->ID << ")";
}

/// quanto cout receber uma struct Lista
ostream& operator << (ostream& os, const Lista *l)
{
    No *n = l->inicio;
    while(n)
    {
        os << n;
        n = n->prox;
        if(n)
            os << ", ";
    }
    return os;
}

bool removeL(No **lista, int valor){
    No *anterior = nullptr;
    No *atual = *lista;

    while(atual && atual->dado->ID != valor){
        anterior = atual;
        atual = atual->prox;
    }
    if(!atual)
        return false;
    if (!anterior) {
        *lista = atual->prox;
    }
    else {
        anterior->prox = atual->prox;
    }

    delete(atual);
    return true;
}
#endif // _HPP_LISTA



