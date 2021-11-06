#ifndef _HPP_LISTA_DINAMICA
#define _HPP_LISTA_DINAMICA

typedef int DadoNoLista;

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

//insere no início da lista
bool insereL(No **lista, DadoNoLista valor)
{

    No *novo = new No(); // aloca memória para o nó
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
    while(n) /// enquanto n não for NULL fica no laço
    {
        cout << n->dado;
        n = n->prox;

        if(n)
            cout << ", ";
    }
    cout << "}\n";
}

///remover um valor específico da lista
bool removeL(No **lista, DadoNoLista valor)
{
    No *anterior = nullptr;
    No *atual = *lista;
    ///fica no laço enquanto tiver elementos na lista
    /// e não encontrar o valor procurado
    while(atual && atual->dado != valor)
    {
        anterior = atual;
        atual = atual->prox;
    }
    /// pode sair do laço sem encontrar o valor (atual==NULL)
    /// se encontrar >>> atual tem o endereço do elemento para excluir
    /// NULL == false    >>> !false == true
    if(!atual) /// se atual é NULL >> não encontrou
        return false;
    if (!anterior) /// se anterior é igual a NULL
    {
        /// o elemento a ser excluído está no início da lista
        *lista = atual->prox;
    }
    else   /// elemento está no meio ou no fim
    {
        anterior->prox = atual->prox;
    }
    /// libera a memória do elemento
    delete(atual);
    return true;
}


No* buscaL(No **lista, DadoNoLista valor)
{
    No *n = *lista;
    while (n)
    {
        if (n->dado == valor)
            return n;

        n = n->prox;
    }

    return nullptr;
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
        return false; ///significa q não encontrou a posição

    No *novo = new No();
    novo->dado = valor;
    if (!anterior) /// primeira posição
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

    cout << "\nO total de elementos presentes na lista é igual à: " << cont << ".\n";
}

void insereFinal(No **lista, int valor){
    No *n = *lista;
    int cont = 0;

    while(n){
        cont++;
        n = n->prox;
    }
    inserePosicaoL(lista, valor, cont);
}

bool lePosicao(No **lista, int pos, int *valor){
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

void ordenaLista(No **lista){
    No *n = *lista;
    int aux, cont;
    while(n){
        cont++;
        n = n->prox;
    }

    int vetor[cont];
    cont = 0;
    while(*lista){
        aux = (*lista)->dado;
        removeL(lista, aux);
        vetor[cont] = aux;
        cont++;
    }

     for(int i = 0; i < cont; i++){
        for (int j = 0; j < cont; j++){
            if (vetor[i] < vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    for(int i = 0; i < cont; i++){
        insereL(lista, vetor[i]);
    }

}

void insereOrdenado(No **lista, int valor){
    No *n = *lista;
    int aux, cont=0;
    bool inseriu = false;

    while(n){
        cont++;
        n = n->prox;
    }

    int vetor[cont];
    cont = 0;

    while(*lista){
        aux = (*lista)->dado;
        removeL(lista, aux);
        vetor[cont] = aux;
        cont++;
    }
    for(int i = 0; i < cont; i++){
        cout << vetor[i] <<endl;
    }
    for(int i = cont-1; i >= 0; i--){
        if(valor <= vetor[i] && !inseriu){
            insereL(lista, valor);
            inseriu = true;
            i++;
        }
        else{
            insereL(lista, vetor[i]);
        }
    }

    if(!inseriu){
         insereL(lista, valor);
    }
}

bool VerificaListaOrdenada(No **lista){
    No *n = *lista;

    if(vaziaL(&n))
        return true;

     while(n->prox){
        if (n->dado < n->prox->dado)
            return false;

        n = n->prox;
     }
     return true;
}
#endif // _HPP_LISTA_DINAMICA









