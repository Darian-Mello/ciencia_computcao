#ifndef _HPP_FILA_EMPRESAS
#define _HPP_FILA_EMPRESAS

#include "Estruturas.hpp"

struct NoFilaEmpresa
{
    Empresa dado; //informacao do nó
    NoFilaEmpresa *prox; //proximo elemento da fila
};

struct FilaEmpresa{
    NoFilaEmpresa *inicio;
    NoFilaEmpresa *fim;

    FilaEmpresa(){ //Construtor. Usado para inicializar os dados das variáveis da struct
        inicio = nullptr;
        fim = nullptr;
    }
};

///inicialização dos dados da fila
void inicializaEmpresa(FilaEmpresa *f)
{
    //define nulo para o inínio e o fim da fila
    f->inicio = nullptr;
    f->fim = nullptr;
}

bool vaziaEmpresa(FilaEmpresa *f)
{
    if (!f->inicio) //verifica se a fila está vazia, ou seja, (f->inicio == NULL)
        return true;
    else
        return false;
}


//Enqueue
bool enfileiraEmpresa(FilaEmpresa *f, Empresa dado)
{
    NoFilaEmpresa *novo = new NoFilaEmpresa();
    if (!novo) /// não conseguiu alocar memória (novo == NULL)
        return false;

    novo->dado = dado;
    novo->prox = nullptr;
    if (!f->inicio) //verifica se a fila está vazia, ou seja, (f->inicio == NULL)
        f->inicio = novo;
    else
        f->fim->prox = novo;

    f->fim = novo;
    return true;
}

//Dequeue
bool desenfileiraEmpresa(FilaEmpresa *f, Empresa *dado)
{
    // se não estiver vazia, retira valor
    if (f->inicio) //verifica se a fila não está vazia, ou seja, (f->inicio != NULL)
    {
        *dado = f->inicio->dado; //pega o dado armazenado no primeiro nó
        NoFilaEmpresa *apagar = f->inicio; //guarda o primeiro nó em uma variável auxiliar;
        f->inicio = f->inicio->prox; // atualiza o início da fila
        delete apagar;  // libera a memória

        if (!f->inicio) //verifica se a fila está vazia, ou seja, (f->inicio == NULL)
            f->fim = nullptr;

        return true;
    }
    else
        return false;
}

//peek
bool espiaEmpresa(FilaEmpresa* f, Empresa *dado)
{
    if (f->inicio) //verifica se a fila não está vazia, ou seja, (f->inicio != NULL)
    {
        *dado= f->inicio->dado;
        return true;
    }
    else
        return false;
}

//show
void mostraEmpresa(FilaEmpresa *f)
{
    if(f->inicio) //verifica se a fila não está vazia, ou seja, (f->inicio != NULL)
    {
        NoFilaEmpresa *no = f->inicio;

        while (no) //faça enquanto (no != NULL)
        {
            cout << "\nCNPJ: " << no->dado.CNPJ;
            cout << "\nNome: " << no->dado.nome;
            cout << "\nTipo: ";
            if(no->dado.tipo == 'L')
                cout << "Transporta livros";
            else
                cout << "Transporta equipamentos";

            cout << "\n\n------------------------------------------------------------------------\n";
            no = no->prox;
        }
    }
}

void destroiEmpresa(FilaEmpresa *f)
{

    NoFilaEmpresa *no = f->inicio;
    while(no) //faça enquanto (no != NULL)
    {
        NoFilaEmpresa *apagar = no; //guarda o nó em uma variável auxiliar;

        no = no->prox;

        delete apagar;
    }

    f->inicio = nullptr;
    f->fim = nullptr;
}

#endif // _HPP_FILA_DINAMICA







