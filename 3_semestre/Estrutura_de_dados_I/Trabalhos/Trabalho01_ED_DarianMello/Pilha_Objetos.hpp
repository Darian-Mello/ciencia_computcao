#ifndef _HPP_PILHA_OBJETOS
#define _HPP_PILHA_OBJETOS

#include "Estruturas.hpp"

struct NoObj
{
    Objeto dado; //informacao do n�
    NoObj *prox; //proximo elemento da pilha
};

struct PilhaObj
{
    NoObj *topo;

    PilhaObj(){ //Construtor. Usado para inicializar os dados das vari�veis da struct
        topo = nullptr;
    }
};


///inicializa��o dos dados da pilha
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
    NoObj *novo =  new NoObj(); //cria um novo n�
    if (!novo) /// sistema n�o conseguiu alocar a mem�ria
        return false;

    novo->dado = dado; //armazena a informa��o no n�
    novo->prox = p->topo; //o pr�ximo elemento do n� criado ser� o �ltimo elemento da pilha
    p->topo = novo; //atualiza o topo da pilha para o n� criado.
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
    // se n�o estiver vazia, retira valor
    if (!vaziaObj(p))
    {
        *dado = p->topo->dado; //pega o dado armazenado no n� do topo
        NoObj *apagar = p->topo; //guarda o n� do topo em uma vari�vel auxiliar;
        p->topo = p->topo->prox; //atualiza o topo para o pr�ximo elemento;
        delete apagar;  /// libera a mem�ria
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







