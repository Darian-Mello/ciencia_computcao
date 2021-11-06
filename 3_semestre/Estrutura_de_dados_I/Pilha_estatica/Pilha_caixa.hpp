#ifndef _HPP_PILHA
#define _HPP_PILHA

#include <iomanip> //biblioteca usada para formatar a impressão da pilha

struct caixa{
    string cod;
    float peso;
};
struct Pilha
{
    int tam;
    int base;
    int topo;
    caixa *dados; //Vetor que será alocado para armazenar os elementos da pilha

    Pilha() //Construtor. Usado para inicializar os dados das variáveis da struct
    {
        tam=0;
        base = -1;
        topo = -1;
        dados = NULL;
    }
};

///inicialização dos dados da pilha
void inicializa(Pilha *p, int tam)
{
  p->base = -1; ///  (*p).base = -1;  /// p->base  p.topo
  p->topo = -1;
  p->tam  =  tam;
  p->dados = new caixa[tam];///aloca memória dinamicamente

}

void desalocar(Pilha *p)
{
    p->base = -1;
    p->topo = -1;
    p->tam = 0;

    if(p->dados != NULL)
    {
        delete[] (p->dados);
        p->dados = NULL;
    }
}

bool cheia(Pilha *p)
{
    if (p->topo == p->tam - 1)
        return true;
    else
        return false;
}

bool vazia(Pilha *p)
{
    if (p->topo == p->base)
        return true;
    else
        return false;
}

bool empilhar(Pilha *p, caixa c)
{
    /// retorna false se a pilha não foi inicializada ou se cheia
    if (p->dados == NULL || cheia(p))
        return false;
    else{
        p->topo++;
        p->dados[p->topo] = c;

        return true;
    }
}

bool desempilhar(Pilha *p, caixa *c)
{
    ///se a pilha foi inicializada && se não estiver vazia, retira valor
    if (p->dados != NULL && !vazia(p))
    {
        *c = p->dados[p->topo];
        p->topo--;
        return true;
    }
    else
        return false;
}



void mostrar(Pilha *p)
{

    if (p->dados == NULL || vazia(p)){ /// retorna se a pilha não foi inicializada
        cout << "\nO carregamento não foi iniciado ou esta vazio.\n";
        return;
    }

    cout << "Carregamento:\n " << endl;
    cout << "Capacidade: " << p->tam << endl;
    cout << "\nTamanho da carga atual: " << p->topo+1 << endl;
    if(!vazia(p))
    {
        cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
        for(int i = p->topo; i > p->base; i--){

            cout << i << " |\tCódigo: " << p->dados[i].cod << "|\tPeso: " << p->dados[i].peso << endl;
            cout << "---------------------------------------------------------------------------------------------------------------------" << endl;
        }
    }
}

/// retorna true se o valor existe na pilha
/// retorna false se o valor não existe na pilha
bool buscar(Pilha *p, string cod)
{

   if (p->dados == NULL) /// retorna false se a pilha não foi inicializada
        return false;

   for(int i = p->topo ; i > p->base; i--)
   {
       if (cod == p->dados[i].cod)
          return true;
   }
   return false;

}

#endif // _HPP_PILHA
