#ifndef _HPP_LISTA_DUPLA
#define _HPP_LISTA_DUPLA

struct Animal{
    int codigo;
    int idade;
    double peso;
};

struct No
{
    Animal dado;
    No *prox;
    No *ant;
    No() // construtor
    {
        prox = nullptr;
        ant = nullptr;
    }
};

struct Lista
{
    No *inicio;
    No *fim;
    int tamanho;
    Lista() /// construtor
    {
        //cout << "\n executando o construtor...\n";
        inicio = nullptr;
        fim = nullptr;
        tamanho =0;
    }
    ~Lista() /// desconstrutor /// quando chame delete(ponteiro)
    {
        //cout << "\n executando o desconstrutor....\n";
        No *n = inicio;
        while(n)
        {
            No *aux = n;
            n = n->prox;
            delete aux;
        }
    }
};


/// quando cout receber uma struct No
ostream& operator<<(ostream& os, const No *n)
{
    /// cout << n
    return os << "Codigo: " << n->dado.codigo
        << "\nIdade: " << n->dado.idade
        << "\nPeso: " << n->dado.peso
        << "\n------------------------------------------------------------\n\n";
}

/// quanto cout receber uma struct Lista
ostream& operator << (ostream& os, const Lista *l)
{
    No *n = l->inicio;
    while(n)
    {
        os << n;
        n = n->prox;
    }
    return os;
}


bool vaziaL(Lista *lista)
{
    if(! (lista->inicio) )
        return true;
    else
        return false;
}


void mostrarInversoL(Lista *lista)
{
    No *n = lista->fim;
    cout << "Total de animais: " << lista->tamanho << "\n\n";
    while(n){
        cout << n;
        n = n->ant;
    }
}

void mostrarTresUltimos(Lista *lista)
{
    int cont = 0;
    No *n = lista->fim;
    while(n && cont < 3){
        cout << n;
        n = n->ant;
        cont++;
    }
}

///insere no início da lista
bool insereInicioL(Lista *lista, Animal valor)
{

    No *novo = new No();
    if (!novo)
        return false;

    novo->dado = valor;
    novo->ant = nullptr; //Se o novo nó será adicionado no início da lista, o ponteiro *ant do primeiro nó sempre é nulo
    novo->prox = lista->inicio;

    if (!lista->fim) //lista vazia?
        lista->fim = novo;
    else
        lista->inicio->ant = novo;


    lista->inicio = novo;
    lista->tamanho++;

    return true;
}

No* buscaL(Lista *lista, int valor)
{
    No *n = lista->inicio;
    while (n)
    {
        if (n->dado.codigo == valor)
            return n;

        n = n->prox;
    }

    return nullptr;
}

bool removerNoL(Lista *lista, No *no)
{
    if(!no || !lista || vaziaL(lista))
        return false;

    if (!no->ant) /// se anterior é igual a NULL, o elemento a ser excluído está no início da lista
    {
        lista->inicio = no->prox;
        if (!lista->inicio) ///lista ficou vazia ?
            lista->fim = nullptr;
        else
            lista->inicio->ant = nullptr;

    }else{ /// elemento está no meio ou no fim

        no->ant->prox = no->prox;
        if (!no->prox)/// se for retirado último da lista
            lista->fim = no->ant;
        else
            no->prox->ant = no->ant;

    }

    /// libera a memória do elemento
    lista->tamanho--;
    delete(no);
    return true;
}

bool removeL(Lista *lista, int valor)
{
    No* no = buscaL(lista, valor);

    if(!no)
        return false;

    removerNoL(lista, no);

    return true;
}

void DescreveL(Lista *lista){
    cout << "\n\nSobre a lista de animais:\n";
    cout << "\nTotal: " << lista->tamanho << endl;
    cout << "\nUltimo animal informado: ";
    if(lista->inicio)
        cout << lista->inicio;
    else
        cout << "NULO";
    cout << "\nPrimeiro animal informado: ";
        if(lista->fim)
        cout << lista->fim;
    else
        cout << "NULO";
}

void SeparaLista(Lista *lista){
    Lista *l2 = new Lista();
    Lista *l3 = new Lista;

    No *n = lista->inicio;
    while(n){
        if(n->dado.peso <= 50)
            insereInicioL(l2, n->dado);
        else
            insereInicioL(l3, n->dado);

        n = n->prox;
    }

    cout << "Lista L2(animais com peso menor ou igual a 50):\n\n" << l2;
    cout << "\n\n\nLista L2(animais com peso maior que 50):\n\n" << l3;

    delete l2;
    delete l3;
}

#endif // _HPP_LISTA_DUPLA
