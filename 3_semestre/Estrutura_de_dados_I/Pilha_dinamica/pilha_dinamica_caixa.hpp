#ifndef _HPP_PILHA_DINAMICA
#define _HPP_PILHA_DINAMICA

#include <iomanip> //biblioteca usada para formatar a impressão da pilha

struct No
{
    string cod;
    float peso;
    No *ant; //proximo elemento da pilha
};

struct Pilha
{
    No *topo;

    Pilha(){ //Construtor. Usado para inicializar os dados das variáveis da struct
        topo = nullptr;
    }
};


///inicialização dos dados da pilha
void inicializa(Pilha *p)
{
    p->topo = nullptr; //define nulo para o topo da pilha
}

bool vazia(Pilha *p)
{
    if (!p->topo) //(p->topo == NULL)
        return true;
    else
        return false;
}





//push
bool empilhar(Pilha *p, string cod, float peso)
{
    No *novo =  new No(); //cria um novo nó
    if (!novo) /// sistema não conseguiu alocar a memória
        return false;

    novo->cod = cod; //armazena a informação no nó
    novo->peso = peso;
    novo->ant = p->topo; //o próximo elemento do nó criado será o último elemento da pilha
    p->topo = novo; //atualiza o topo da pilha para o nó criado.
    return true;
}

//pop
bool desempilhar(Pilha *p, string *cod, float *peso)
{
    // se não estiver vazia, retira valor
    if (!vazia(p))
    {
        *cod = p->topo->cod; //pega o dado armazenado no nó do topo
        *peso = p->topo->peso;
        No *apagar = p->topo; //guarda o nó do topo em uma variável auxiliar;
        p->topo = p->topo->ant; //atualiza o topo para o próximo elemento;
        delete apagar;  /// libera a memória
        return true;
    }
    else
        return false;
}

//peek
bool espiar(Pilha* p, string *cod, float *peso)
{
    if (p->topo)
    {
        *cod = p->topo->cod;
        *peso = p->topo->peso;
        return true;
    }
    else
        return false;
}


void mostrar(Pilha *p)
{
    cout << "PILHA: " << endl;

    if(!vazia(p))
    {
        cout << "--------------------------------------------" << endl;
        cout << setfill(' ') << std::setw(13) << "Nó" << " | ";
        cout << setfill(' ') << std::setw(13) << "Anterior" << " | ";
        cout << setfill(' ') << std::setw(10) << "Código" << " |";
        cout << setfill(' ') << std::setw(10) << "Peso" << " |" << endl;
        cout << "--------------------------------------------" << endl;
        No *no = p->topo;
        while (no != NULL)
        {
            cout << setfill(' ') << std::setw(13) << no << " | ";
            cout << setfill(' ') << std::setw(13) << no->ant << " | ";
            cout << setfill(' ') << std::setw(10) << no->cod << " |";
            cout << setfill(' ') << std::setw(10) << no->peso << " |" << endl;

            no = no->ant;
        }
        cout << "--------------------------------------------" << endl;
    }
}

/// retorna true se o valor existe na pilha
/// retorna false se o valor não existe na pilha
bool buscar(Pilha *p, string cod)
{

    No *no = p->topo;
    while (no != NULL)
    {
        if(no->cod == cod)
            return true;

        no = no->ant;
    }

    return false;

}

void desalocar(Pilha *p)
{
    string cod;
    float peso;
    while(!vazia(p))
        desempilhar(p, &cod, &peso);
}

#endif // _HPP_PILHA







