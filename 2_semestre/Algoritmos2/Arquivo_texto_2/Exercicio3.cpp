#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
#include<ctime>
#include <vector>
#include <windows.h>

using namespace std;

struct cad{
    string codigo;
    string nome;
    float preco;
    int quantidade;
};

void ler_arq(cad *produtos);
void incluir();
void listar_prod_estoque_zerado();
void consultar_produto();
void listar_todos();

main(){
    setlocale(LC_ALL, "Portuguese");
    int menu;

    do{
        system("cls");
        cout << "MENU" << endl;
        cout << "0 - Sair" << endl;
        cout << "1 – Incluir um novo produto" << endl;
        cout << "2 – Listar produtos com estoque zerado" << endl;
        cout << "3 – Consultar produto" << endl;
        cout << "4 - Listar todos os produtos" << endl;
        cout << "\nSua escolha: ";
        cin >> menu;
        fflush(stdin);
        system("cls");

        if(menu == 0)
            cout << "Programa finalizado!";
        else if(menu == 1){
            incluir();
        }
        else if(menu == 2){
            listar_prod_estoque_zerado();
        }
        else if(menu == 3){
            consultar_produto();
        }
        else if(menu == 4){
            listar_todos();
        }
        else
            cout << "A opcao informada não está disponível no menu.";

        fflush(stdin);
        getchar();

    }while(menu != 0);
}

void incluir(){
    cad produtos;
    ofstream arquivo("produtos.txt", ios::app);

    cout << "Informe o código do produto: ";
    cin >> produtos.codigo;
    cout << "\nInforme o nome do produto: ";
    fflush(stdin);
    getline(cin, produtos.nome);
    cout << "\nInforme o preco: ";
    cin >> produtos.preco;
    cout << "\nInforme a quantidade disponível em estoque: ";
    cin >> produtos.quantidade;

    arquivo << endl << produtos.codigo << "#" << produtos.nome << "#" << produtos.preco << "#" << produtos.quantidade << "#" << endl;
    arquivo.close();
    system("cls");
    cout << "Produto adicionado!";
}

void ler_arq(vector <cad> *produtos){
    ifstream arquivo("produtos.txt");
    cad cadastro;
    string aux;

    if(!arquivo.is_open()){
        cout << "Erro ao abrir o arquivo.";
        main();
    }
    else{
        while(!arquivo.eof()){
            getline(arquivo, cadastro.codigo, '#');
            getline(arquivo, cadastro.nome, '#');
            getline(arquivo, aux, '#');
            cadastro.preco = stof(aux);
            getline(arquivo, aux, '#');
            cadastro.quantidade = stoi(aux);

            (*produtos).push_back(cadastro);
        }
        arquivo.close();
    }
}

void listar_prod_estoque_zerado(){
    bool leu = false;
    vector <cad> produtos;
    ler_arq(&produtos);

    for(int i=0; i<produtos.size()-1; i++){
        if(produtos[i].quantidade == 0){
            leu = true;
            cout << "Produto " << i << ": \n\n";
            cout << "Código do produto: " << produtos[i].codigo << endl;
            cout << "Nome: " << produtos[i].nome<< endl;
            cout << "Preço: " << produtos[i].preco << endl;
            cout << "Quantidade disponível em estoque: " << produtos[i].quantidade << endl;
        }
    }

    if(leu == false)
        cout << "Nenhum produto com o estoque zerado.";
}

void consultar_produto(){
    string nome;
    bool leu = false;
    vector <cad> produtos;
    ler_arq(&produtos);


    cout << "Informe o nome do produto: ";
    getline(cin, nome);
    for(int i=0; i<produtos.size()-1; i++){
        if(produtos[i].nome == nome){
            leu = true;
            cout << "Produto " << i << ": \n\n";
            cout << "Código do produto: " << produtos[i].codigo << endl;
            cout << "Nome: " << produtos[i].nome<< endl;
            cout << "Preço: " << produtos[i].preco << endl;
            cout << "Quantidade disponível em estoque: " << produtos[i].quantidade << endl;
        }
    }

    if(leu == false)
        cout << "produto não encontrado.";
}

void listar_todos(){
    vector <cad> produtos;

    ler_arq(&produtos);

    cout << "Produtos cadastrados: \n\n";
    for(int i=0; i<produtos.size()-1; i++){
        cout << "---------------------------------------------------------------------------------------------\n";
        cout << "Produto " << i << ": \n\n";
        cout << "Código do produto: " << produtos[i].codigo << endl;
        cout << "Nome: " << produtos[i].nome<< endl;
        cout << "Preço: " << produtos[i].preco << endl;
        cout << "Quantidade disponível em estoque: " << produtos[i].quantidade << endl;
    }
}

