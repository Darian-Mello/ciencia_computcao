#ifndef _HPP_FILA_PESSOAS
#define _HPP_FILA_PESSOAS

#include "Estruturas.hpp"

struct NoFilaPessoa
{
    Pessoa dado; //informacao do nó
    NoFilaPessoa *prox; //proximo elemento da fila
};

struct FilaPessoa
{
    NoFilaPessoa *inicio;
    NoFilaPessoa *fim;

    FilaPessoa(){ //Construtor. Usado para inicializar os dados das variáveis da struct
        inicio = nullptr;
        fim = nullptr;
    }
};

///inicialização dos dados da fila
void inicializaPessoa(FilaPessoa *f)
{
    //define nulo para o inínio e o fim da fila
    f->inicio = nullptr;
    f->fim = nullptr;
}

bool vaziaPessoa(FilaPessoa *f)
{
    if (!f->inicio) //verifica se a fila está vazia, ou seja, (f->inicio == NULL)
        return true;
    else
        return false;
}


//Enqueue
bool enfileiraPessoa(FilaPessoa *f, Pessoa dado)
{
    NoFilaPessoa *novo = new NoFilaPessoa();
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
bool desenfileiraPessoa(FilaPessoa *f, Pessoa *dado)
{
    // se não estiver vazia, retira valor
    if (f->inicio) //verifica se a fila não está vazia, ou seja, (f->inicio != NULL)
    {
        *dado = f->inicio->dado; //pega o dado armazenado no primeiro nó
        NoFilaPessoa *apagar = f->inicio; //guarda o primeiro nó em uma variável auxiliar;
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
bool espiaPessoa(FilaPessoa* f, Pessoa *dado)
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
void mostraPessoa(FilaPessoa *f)
{
    if(f->inicio) //verifica se a fila não está vazia, ou seja, (f->inicio != NULL)
    {
        NoFilaPessoa *no = f->inicio;

        while (no) //faça enquanto (no != NULL)
        {
            cout << "\nCPF: " << no->dado.CPF;
            cout << "\nNome: " << no->dado.nomeCompleto;
            cout << "\nIdade: " << no->dado.idade;
            cout << "\nApresenta alguma deficiência: ";
            if(no->dado.deficienteFisico)
                cout << "Sim";
            else
                cout << "Não";

            if(no->dado.sexo == 'F'){
                cout << "\nSexo: Feminino";
                cout << "\nGestante: ";
                if(no->dado.gestante)
                    cout << "Sim";
                else
                    cout << "Não";
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
    while(no) //faça enquanto (no != NULL)
    {
        NoFilaPessoa *apagar = no; //guarda o nó em uma variável auxiliar;

        no = no->prox;

        delete apagar;
    }

    f->inicio = nullptr;
    f->fim = nullptr;
}

#endif // _HPP_FILA_DINAMICA






