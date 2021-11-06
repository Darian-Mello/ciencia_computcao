#ifndef _HPP_LISTA_DINAMICA
#define _HPP_LISTA_DINAMICA

typedef string DadoNoLista;

struct No
{
    DadoNoLista dado;
    struct No *prox;
};


void inicializaL(No **lista)
{
    *lista = nullptr;
}

bool vaziaL(No **lista)
{
    if(!(*lista))
        return true;
    else
        return false;
}

/// excluir todos os elementos da lista
void destroiL(No **lista)
{
    No *n = *lista;
    while (n)
    {
        No *aux  = n;
        n = n->prox;
        delete aux;
    }
    *lista = nullptr;
}

//insere no in�cio da lista
bool insereL(No **lista, DadoNoLista valor)
{

    No *novo = new No(); // aloca mem�ria para o n�
    if (!novo)
        return false;

    novo->dado = valor;
    novo->prox = *lista;
    *lista = novo;

    return true;
}



void mostraL(No **lista)
{
    No *n = *lista;

    cout << "L:{";
    while(n) /// enquanto n n�o for NULL fica no la�o
    {
        cout << n->dado;
        n = n->prox;

        if(n)
            cout << ", ";
    }
    cout << "}\n";
}

///remover um valor espec�fico da lista
bool removeL(No **lista, DadoNoLista valor)
{
    No *anterior = nullptr;
    No *atual = *lista;
    ///fica no la�o enquanto tiver elementos na lista
    /// e n�o encontrar o valor procurado
    while(atual && atual->dado != valor)
    {
        anterior = atual;
        atual = atual->prox;
    }
    /// pode sair do la�o sem encontrar o valor (atual==NULL)
    /// se encontrar >>> atual tem o endere�o do elemento para excluir
    /// NULL == false    >>> !false == true
    if(!atual) /// se atual � NULL >> n�o encontrou
        return false;
    if (!anterior) /// se anterior � igual a NULL
    {
        /// o elemento a ser exclu�do est� no in�cio da lista
        *lista = atual->prox;
    }
    else   /// elemento est� no meio ou no fim
    {
        anterior->prox = atual->prox;
    }
    /// libera a mem�ria do elemento
    delete(atual);
    return true;
}


bool buscaL(No **lista, DadoNoLista valor)
{
    No *n = *lista;
    while (n)
    {
        if (n->dado == valor)
            return true;

        n = n->prox;
    }

    return false;
}



bool inserePosicaoL(No **lista, DadoNoLista valor, int posicao)
{
    No *anterior = NULL;
    No *atual = *lista;
    int p = 0;
    while (atual && p!=posicao)
    {
        anterior = atual;
        atual = atual->prox;
        p++;
    }
    if (p != posicao)
        return false; ///significa q n�o encontrou a posi��o

    No *novo = new No();
    novo->dado = valor;
    if (!anterior) /// primeira posi��o
    {
        novo->prox = *lista;
        *lista = novo;
    }
    else
    {
        novo->prox = anterior->prox;
        anterior->prox = novo;
    }

    return true;
}

bool igual(No **lista1, No **lista2){
    No *n = *lista1;
    No *n2 = *lista2;

    while(n || n2){
        if((n) && !(n2))
            return false;
        else if(!(n) && (n2))
            return false;

        if(n->dado != n2->dado)
            return false;

        n = n->prox;
        n2 = n2->prox;
    }
    return true;
}

int total(No **lista){
    No *n = *lista;
    int cont = 0;

    while(n){
        cont++;
        n = n->prox;
    }

    cout << "\nO total de elementos presentes na lista � igual �: " << cont << ".\n";
}

void insereFinal(No **lista, DadoNoLista valor){
    No *n = *lista;
    int cont = 0;

    while(n){
        cont++;
        n = n->prox;
    }
    inserePosicaoL(lista, valor, cont);
}

bool lePosicao(No **lista, int pos, DadoNoLista *valor){
    No *n = *lista;
    int p = 0;

    while (n){
        if(p==pos){
            *valor = n->dado;
            return true;
        }
        n = n->prox;
        p++;
    }
    return false;
}

bool removePosicao(No **lista, int posicao){
    No *anterior = nullptr;
    No *atual = *lista;
    int p=0;

    while(atual && p!=posicao)
    {
        anterior = atual;
        atual = atual->prox;
        p++;
    }

    if(!atual)
        return false;
    if (!anterior)
    {
        *lista = atual->prox;
    }
    else
    {
        anterior->prox = atual->prox;
    }

    delete(atual);
    return true;
}

void uniao(No **lista1, No **lista2, No **listaSaida){
    No *n = *lista1;
    No *n2 = *lista2;

    while(n){
        insereL(listaSaida, n->dado);
        n = n->prox;
    }
    while(n2){
        insereL(listaSaida, n2->dado);
        n2 = n2->prox;
    }
}

#endif // _HPP_LISTA_DINAMICA
