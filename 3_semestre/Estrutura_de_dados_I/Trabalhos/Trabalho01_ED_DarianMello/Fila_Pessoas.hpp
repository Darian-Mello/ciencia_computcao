#ifndef _HPP_FILA_PESSOAS
#define _HPP_FILA_PESSOAS

#include "Estruturas.hpp"

struct NoFilaPessoa
{
    Pessoa dado; //informacao do n�
    NoFilaPessoa *prox; //proximo elemento da fila
};

struct FilaPessoa
{
    NoFilaPessoa *inicio;
    NoFilaPessoa *fim;

    FilaPessoa(){ //Construtor. Usado para inicializar os dados das vari�veis da struct
        inicio = nullptr;
        fim = nullptr;
    }
};

///inicializa��o dos dados da fila
void inicializaPessoa(FilaPessoa *f)
{
    //define nulo para o in�nio e o fim da fila
    f->inicio = nullptr;
    f->fim = nullptr;
}

bool vaziaPessoa(FilaPessoa *f)
{
    if (!f->inicio) //verifica se a fila est� vazia, ou seja, (f->inicio == NULL)
        return true;
    else
        return false;
}


//Enqueue
bool enfileiraPessoa(FilaPessoa *f, Pessoa dado)
{
    NoFilaPessoa *novo = new NoFilaPessoa();
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
bool desenfileiraPessoa(FilaPessoa *f, Pessoa *dado)
{
    // se n�o estiver vazia, retira valor
    if (f->inicio) //verifica se a fila n�o est� vazia, ou seja, (f->inicio != NULL)
    {
        *dado = f->inicio->dado; //pega o dado armazenado no primeiro n�
        NoFilaPessoa *apagar = f->inicio; //guarda o primeiro n� em uma vari�vel auxiliar;
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
bool espiaPessoa(FilaPessoa* f, Pessoa *dado)
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
void mostraPessoa(FilaPessoa *f)
{
    if(f->inicio) //verifica se a fila n�o est� vazia, ou seja, (f->inicio != NULL)
    {
        NoFilaPessoa *no = f->inicio;

        while (no) //fa�a enquanto (no != NULL)
        {
            cout << "\nCPF: " << no->dado.CPF;
            cout << "\nNome: " << no->dado.nomeCompleto;
            cout << "\nIdade: " << no->dado.idade;
            cout << "\nApresenta alguma defici�ncia: ";
            if(no->dado.deficienteFisico)
                cout << "Sim";
            else
                cout << "N�o";

            if(no->dado.sexo == 'F'){
                cout << "\nSexo: Feminino";
                cout << "\nGestante: ";
                if(no->dado.gestante)
                    cout << "Sim";
                else
                    cout << "N�o";
            }
            else
                cout << "\nSexo: Masculino";

            cout << "\n\n------------------------------------------------------------------------\n";
            no = no->prox;
        }
    }
}

void destroiPessoa(FilaPessoa *f)
{

    NoFilaPessoa *no = f->inicio;
    while(no) //fa�a enquanto (no != NULL)
    {
        NoFilaPessoa *apagar = no; //guarda o n� em uma vari�vel auxiliar;

        no = no->prox;

        delete apagar;
    }

    f->inicio = nullptr;
    f->fim = nullptr;
}

#endif // _HPP_FILA_DINAMICA






