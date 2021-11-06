#ifndef _HPP_FILA_EMPRESAS
#define _HPP_FILA_EMPRESAS

#include "Estruturas.hpp"

struct NoFilaEmpresa
{
    Empresa dado; //informacao do n�
    NoFilaEmpresa *prox; //proximo elemento da fila
};

struct FilaEmpresa{
    NoFilaEmpresa *inicio;
    NoFilaEmpresa *fim;

    FilaEmpresa(){ //Construtor. Usado para inicializar os dados das vari�veis da struct
        inicio = nullptr;
        fim = nullptr;
    }
};

///inicializa��o dos dados da fila
void inicializaEmpresa(FilaEmpresa *f)
{
    //define nulo para o in�nio e o fim da fila
    f->inicio = nullptr;
    f->fim = nullptr;
}

bool vaziaEmpresa(FilaEmpresa *f)
{
    if (!f->inicio) //verifica se a fila est� vazia, ou seja, (f->inicio == NULL)
        return true;
    else
        return false;
}


//Enqueue
bool enfileiraEmpresa(FilaEmpresa *f, Empresa dado)
{
    NoFilaEmpresa *novo = new NoFilaEmpresa();
    if (!novo) /// n�o conseguiu alocar mem�ria (novo == NULL)
        return false;

    novo->dado = dado;
    novo->prox = nullptr;
    if (!f->inicio) //verifica se a fila est� vazia, ou seja, (f->inicio == NULL)
        f->inicio = novo;
    else
        f->fim->prox = novo;

    f->fim = novo;
    return true;
}

//Dequeue
bool desenfileiraEmpresa(FilaEmpresa *f, Empresa *dado)
{
    // se n�o estiver vazia, retira valor
    if (f->inicio) //verifica se a fila n�o est� vazia, ou seja, (f->inicio != NULL)
    {
        *dado = f->inicio->dado; //pega o dado armazenado no primeiro n�
        NoFilaEmpresa *apagar = f->inicio; //guarda o primeiro n� em uma vari�vel auxiliar;
        f->inicio = f->inicio->prox; // atualiza o in�cio da fila
        delete apagar;  // libera a mem�ria

        if (!f->inicio) //verifica se a fila est� vazia, ou seja, (f->inicio == NULL)
            f->fim = nullptr;

        return true;
    }
    else
        return false;
}

//peek
bool espiaEmpresa(FilaEmpresa* f, Empresa *dado)
{
    if (f->inicio) //verifica se a fila n�o est� vazia, ou seja, (f->inicio != NULL)
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
    if(f->inicio) //verifica se a fila n�o est� vazia, ou seja, (f->inicio != NULL)
    {
        NoFilaEmpresa *no = f->inicio;

        while (no) //fa�a enquanto (no != NULL)
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
    while(no) //fa�a enquanto (no != NULL)
    {
        NoFilaEmpresa *apagar = no; //guarda o n� em uma vari�vel auxiliar;

        no = no->prox;

        delete apagar;
    }

    f->inicio = nullptr;
    f->fim = nullptr;
}

#endif // _HPP_FILA_DINAMICA







