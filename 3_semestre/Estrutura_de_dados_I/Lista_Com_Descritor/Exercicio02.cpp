#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

#include "listaFuncionarios.hpp"

void InsereFuncionario(Lista *lista);
void InsereFuncionarioFinal(Lista *lista);
void SalarioAbaixoMedia(Lista *lista);
void OrdenaLista(Lista *lista);

main(){
    setlocale(LC_ALL, "Portuguese");
    char menu;
    int aux;
    Lista *lista = new Lista();

    do{
        system("cls");
        cout << "--------------------MENU--------------------";
        cout << "\nA - Inserir um funcionario no inicio da lista;";
        cout << "\nB - Inserir funcionários no final da lista;";
        cout << "\nC - Imprimir os nós da lista;";
        cout << "\nD - Imprimir a média dos salários pagos pela empresa;";
        cout << "\nE - Iimprimir o nome de todos os funcionários que possuem salário menor que a média.;";
        cout << "\nF - Ordenar a lista de funcionários em ordem alfabética.;";
        cout << "\nG - SAIR";
        cout << "\n--------------------------------------------";
        cout << "\nSua escolha: ";
        cin >> menu;
        menu = toupper(menu);
        system("cls");

        if(menu == 'A'){
            InsereFuncionario(lista);
        }
        else if(menu == 'B'){
            InsereFuncionarioFinal(lista);
        }
        else if(menu == 'C'){
            if(vaziaL(lista))
                cout << "A lista está vazia.";
            else
                cout << "Todos os funcionários cadastrados:\n\n" << lista;

            DescreveL(lista);
        }
        else if(menu == 'D'){
            cout << "A media dos salários dos funcionários é igual a: " << (lista->soma) / (lista->tamanho);
        }
        else if(menu == 'E'){
            SalarioAbaixoMedia(lista);
        }
        else if(menu == 'F'){
            OrdenaLista(lista);
        }
        else if(menu == 'G'){
            delete(lista);
            cout << "Programa finalizado.";
        }
        else
            cout << "Essa opção não existe no menu.";

        cout << "\n\n";
        system("pause");
    }while(menu != 'G');
}

void InsereFuncionario(Lista *lista){
        Funcionario fun;
        cout << "Informe o nome do funcionario: ";
        fflush(stdin);
        getline(cin, fun.nome);
        cout << "\nInforme o codigo: ";
        fflush(stdin);
        getline(cin, fun.codigo);
        cout << "\nInforme a idade: ";
        cin >> fun.idade;
        cout << "\nInforme o salario: ";
        cin >> fun.salario;

        if(insereInicioL(lista, fun))
            cout << "\n\nValor inserido com sucesso!\n\n";
        else
            cout << "\n\nNão foi possível inserir o valor. Não há espaço na memória!";
}

void InsereFuncionarioFinal(Lista *lista){
        Funcionario fun;
        cout << "Informe o nome do funcionario: ";
        fflush(stdin);
        getline(cin, fun.nome);
        cout << "\nInforme o codigo: ";
        fflush(stdin);
        getline(cin, fun.codigo);
        cout << "\nInforme a idade: ";
        cin >> fun.idade;
        cout << "\nInforme o salario: ";
        cin >> fun.salario;

        if(insereFinalL(lista, fun))
            cout << "\n\nValor inserido com sucesso!\n\n";
        else
            cout << "\n\nNão foi possível inserir o valor. Não há espaço na memória!";
}

void SalarioAbaixoMedia(Lista *lista){
    double media = (lista->soma) / (lista->tamanho);

    cout << "Funcionarios com salario abaixo da media: \n\n";

    No *n = lista->inicio;
    while(n){
        if(n->dado.salario < media){
            cout << "Nome: " << n->dado.nome
            << "\nCodigo: " << n->dado.codigo
            << "\nIdade: " << n->dado.idade
            << "\nSalario: " << n->dado.salario
            << "\n------------------------------------------------------------\n\n";
        }
        n = n->prox;
    }
}

void OrdenaLista(Lista *lista){
    bool trocou;
    Funcionario aux;
    No *anterior, *atual;

    if( vaziaL(lista) )
        return;


    do{
        trocou = false;
        No *anterior = nullptr;
        No *atual = lista->inicio;
        while(atual)
        {
            // O anterior pode estar nulo!
            if(anterior && strcmpi(anterior->dado.nome.c_str(), atual->dado.nome.c_str()) > 0) //verifica se precisa trocar
            {
                aux = anterior->dado;
                anterior->dado = atual->dado;
                atual->dado = aux;
                trocou = true;
            }

            anterior = atual;
            atual = atual->prox;
        }

    }while(trocou);
    cout << "A lista de funcionários foi ordenada em ordem alfabetica.";
}

