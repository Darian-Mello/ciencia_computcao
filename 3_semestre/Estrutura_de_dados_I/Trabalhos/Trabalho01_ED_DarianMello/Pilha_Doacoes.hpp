#ifndef _HPP_PILHA_DOACOES
#define _HPP_PILHA_DOACOES

#include <iomanip> //biblioteca usada para formatar a impressão da pilha
#include "Estruturas.hpp"

struct NoDoacoes
{
    Ficha_Doacao dado; //informacao do nó
    NoDoacoes *prox; //proximo elemento da pilha
};

struct PilhaDoacoes
{
    NoDoacoes *topo;

    PilhaDoacoes(){ //Construtor. Usado para inicializar os dados das variáveis da struct
        topo = nullptr;
    }
};


///inicialização dos dados da pilha
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
    NoDoacoes *novo =  new NoDoacoes(); //cria um novo nó
    if (!novo) /// sistema não conseguiu alocar a memória
        return false;

    novo->dado = dado; //armazena a informação no nó
    novo->prox = p->topo; //o próximo elemento do nó criado será o último elemento da pilha
    p->topo = novo; //atualiza o topo da pilha para o nó criado.
    return true;
}

//pop
bool desempilharDoacoes(PilhaDoacoes *p, Ficha_Doacao *dado)
{
    // se não estiver vazia, retira valor
    if (!vaziaDoacoes(p))
    {
        *dado = p->topo->dado; //pega o dado armazenado no nó do topo
        NoDoacoes *apagar = p->topo; //guarda o nó do topo em uma variável auxiliar;
        p->topo = p->topo->prox; //atualiza o topo para o próximo elemento;
        delete apagar;  /// libera a memória
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
            cout << "\nApresenta alguma deficiência: ";
            if(no->dado.dadosP.deficienteFisico)
                cout << "Sim";
            else
                cout << "Não";

            if(no->dado.dadosP.sexo == 'F'){
                cout << "\nSexo: Feminino";
                cout << "\nGestante: ";
                if(no->dado.dadosP.gestante)
                    cout << "Sim";
                else
                    cout << "Não";
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






