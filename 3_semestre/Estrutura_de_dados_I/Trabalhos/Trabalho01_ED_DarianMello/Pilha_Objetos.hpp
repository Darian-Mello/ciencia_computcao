#ifndef _HPP_PILHA_OBJETOS
#define _HPP_PILHA_OBJETOS

#include "Estruturas.hpp"

struct NoObj
{
    Objeto dado; //informacao do nó
    NoObj *prox; //proximo elemento da pilha
};

struct PilhaObj
{
    NoObj *topo;

    PilhaObj(){ //Construtor. Usado para inicializar os dados das variáveis da struct
        topo = nullptr;
    }
};


///inicialização dos dados da pilha
void inicializaObj(PilhaObj *p)
{
    p->topo = nullptr; //define nulo para o topo da pilha
}

bool vaziaObj(PilhaObj *p)
{
    if (!p->topo) //(p->topo == NULL)
        return true;
    else
        return false;
}





//push
bool empilharObj(PilhaObj *p, Objeto dado)
{
    NoObj *novo =  new NoObj(); //cria um novo nó
    if (!novo) /// sistema não conseguiu alocar a memória
        return false;

    novo->dado = dado; //armazena a informação no nó
    novo->prox = p->topo; //o próximo elemento do nó criado será o último elemento da pilha
    p->topo = novo; //atualiza o topo da pilha para o nó criado.
    return true;
}

void mostrarObjeto(PilhaObj *p)
{
    if(!vaziaObj(p))
    {
        NoObj *no = p->topo;
        while (no != NULL)
        {
            cout << "\nTipo do objeto: ";
            if(no->dado.tipo == 'L')
                cout << "Livro";
            else
                cout << "Equipamento";
            cout << "\nDescricao do objeto: " << no->dado.descricao;

            cout << "\n\n------------------------------------------------------------------------\n";

            no = no->prox;
        }
    }
}

//pop
bool desempilharObj(PilhaObj *p, Objeto *dado)
{
    // se não estiver vazia, retira valor
    if (!vaziaObj(p))
    {
        *dado = p->topo->dado; //pega o dado armazenado no nó do topo
        NoObj *apagar = p->topo; //guarda o nó do topo em uma variável auxiliar;
        p->topo = p->topo->prox; //atualiza o topo para o próximo elemento;
        delete apagar;  /// libera a memória
        return true;
    }
    else
        return false;
}

void desalocarObj(PilhaObj *p)
{
    Objeto dado;
    while(!vaziaObj(p))
        desempilharObj(p, &dado);
}

#endif // _HPP_PILHA







