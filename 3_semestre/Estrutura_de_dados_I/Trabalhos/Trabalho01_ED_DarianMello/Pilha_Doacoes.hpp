#ifndef _HPP_PILHA_DOACOES
#define _HPP_PILHA_DOACOES

#include <iomanip> //biblioteca usada para formatar a impress�o da pilha
#include "Estruturas.hpp"

struct NoDoacoes
{
    Ficha_Doacao dado; //informacao do n�
    NoDoacoes *prox; //proximo elemento da pilha
};

struct PilhaDoacoes
{
    NoDoacoes *topo;

    PilhaDoacoes(){ //Construtor. Usado para inicializar os dados das vari�veis da struct
        topo = nullptr;
    }
};


///inicializa��o dos dados da pilha
void inicializaDoacoes(PilhaDoacoes *p)
{
    p->topo = nullptr; //define nulo para o topo da pilha
}

bool vaziaDoacoes(PilhaDoacoes *p)
{
    if (!p->topo) //(p->topo == NULL)
        return true;
    else
        return false;
}





//push
bool empilharDoacoes(PilhaDoacoes *p, Ficha_Doacao dado)
{
    NoDoacoes *novo =  new NoDoacoes(); //cria um novo n�
    if (!novo) /// sistema n�o conseguiu alocar a mem�ria
        return false;

    novo->dado = dado; //armazena a informa��o no n�
    novo->prox = p->topo; //o pr�ximo elemento do n� criado ser� o �ltimo elemento da pilha
    p->topo = novo; //atualiza o topo da pilha para o n� criado.
    return true;
}

//pop
bool desempilharDoacoes(PilhaDoacoes *p, Ficha_Doacao *dado)
{
    // se n�o estiver vazia, retira valor
    if (!vaziaDoacoes(p))
    {
        *dado = p->topo->dado; //pega o dado armazenado no n� do topo
        NoDoacoes *apagar = p->topo; //guarda o n� do topo em uma vari�vel auxiliar;
        p->topo = p->topo->prox; //atualiza o topo para o pr�ximo elemento;
        delete apagar;  /// libera a mem�ria
        return true;
    }
    else
        return false;
}

//peek
bool espiar(PilhaDoacoes* p, Ficha_Doacao *dado)
{
    if (p->topo)
    {
        *dado= p->topo->dado;
        return true;
    }
    else
        return false;
}

void mostrarDoacao(PilhaDoacoes *p)
{
    if(!vaziaDoacoes(p))
    {
        NoDoacoes *no = p->topo;
        while (no != NULL)
        {
            cout << "\nCPF: " << no->dado.dadosP.CPF;
            cout << "\nNome: " << no->dado.dadosP.nomeCompleto;
            cout << "\nIdade: " << no->dado.dadosP.idade;
            cout << "\nApresenta alguma defici�ncia: ";
            if(no->dado.dadosP.deficienteFisico)
                cout << "Sim";
            else
                cout << "N�o";

            if(no->dado.dadosP.sexo == 'F'){
                cout << "\nSexo: Feminino";
                cout << "\nGestante: ";
                if(no->dado.dadosP.gestante)
                    cout << "Sim";
                else
                    cout << "N�o";
            }
            else
                cout << "\nSexo: Masculino";

            cout << "\nTipo do objeto doado: ";
            if(no->dado.dadosOBJ.tipo == 'L')
                cout << "Livro";
            else
                cout << "Equipamento";
            cout << "\nDescricao do objeto doado: " << no->dado.dadosOBJ.descricao;

            cout << "\n\n------------------------------------------------------------------------\n";

            no = no->prox;
        }
    }
}

void desalocarDoacoes(PilhaDoacoes *p)
{
    Ficha_Doacao dado;
    while(!vaziaDoacoes(p))
        desempilharDoacoes(p, &dado);
}

#endif // _HPP_PILHA






