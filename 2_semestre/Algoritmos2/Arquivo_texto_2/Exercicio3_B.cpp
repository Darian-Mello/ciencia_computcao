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
void vender_produto();
void finaliza_venda(cad prods[]);
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
        cout << "1 � Incluir um novo produto" << endl;
        cout << "2 � Vender produto" << endl;
        cout << "3 � Listar produtos com estoque zerado" << endl;
        cout << "4 � Consultar produto" << endl;
        cout << "5 - Listar todos os produtos" << endl;
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
            vender_produto();
        }
        else if(menu == 3){
            listar_prod_estoque_zerado();
        }
        else if(menu == 4){
            consultar_produto();
        }
        else if(menu == 5){
            listar_todos();
        }
        else
            cout << "A opcao informada n�o est� dispon�vel no menu.";

        fflush(stdin);
        getchar();

    }while(menu != 0);
}

void incluir(){
    cad produtos;
    ofstream arquivo("produtos.txt", ios::app);

    cout << "Informe o c�digo do produto: ";
    cin >> produtos.codigo;
    cout << "\nInforme o nome do produto: ";
    fflush(stdin);
    getline(cin, produtos.nome);
    cout << "\nInforme o preco: ";
    cin >> produtos.preco;
    cout << "\nInforme a quantidade dispon�vel em estoque: ";
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
            getline(arquivo, aux);
            cadastro.quantidade = stoi(aux);

            (*produtos).push_back(cadastro);
        }
        arquivo.close();
    }
}
void vender_produto(){
    vector <cad> prods;
    ler_arq(&prods);
    string codigo;
    int i;
    bool encontrou = false;

    cout << "Venda\n\n";
    cout << "informe o C�digo do produto: ";
    cin >> codigo;
    for(i=0; i<prods.size()-1; i++){
        if(prods[i].codigo == codigo){
            finaliza_venda(&prods[i]);
            encontrou = true;
            break;
        }
    }
    if(encontrou == false)
        MessageBox(NULL, "Este produto n�o est� cadastrado!", "Erro", MB_OK | MB_ICONEXCLAMATION);
    else{
        ofstream arquivo("produtos.txt", ios::out);
        for(int j=0; j<prods.size(); j++){
            arquivo << prods[j].codigo << "#" << prods[j].nome << "#" << prods[j].preco << "#" << prods[j].quantidade << "#" << endl;
        }
        arquivo.close();
    }
}

void finaliza_venda(cad *prods){
    int quantidade, execute;

    cout << "Informe a quantidate do produto: ";
    cin >> quantidade;

    if(quantidade <= (*prods).quantidade){
        (*prods).quantidade -= quantidade;
        system("cls");
        cout << "Venda Finaliza!";
    }
    else{
        cout << "\nA quntidade presente no estoque � de " << (*prods).quantidade << ", deseja vender mesmo assim(1 - sim, 2 - n�o)? ";
        cin >> execute;

        if(execute == 1){
            system("cls");
            finaliza_venda(prods);
        }
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
            cout << "C�digo do produto: " << produtos[i].codigo << endl;
            cout << "Nome: " << produtos[i].nome<< endl;
            cout << "Pre�o: " << produtos[i].preco << endl;
            cout << "Quantidade dispon�vel em estoque: " << produtos[i].quantidade << endl;
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
            cout << "C�digo do produto: " << produtos[i].codigo << endl;
            cout << "Nome: " << produtos[i].nome<< endl;
            cout << "Pre�o: " << produtos[i].preco << endl;
            cout << "Quantidade dispon�vel em estoque: " << produtos[i].quantidade << endl;
        }
    }

    if(leu == false)
        cout << "produto n�o encontrado.";
}

void listar_todos(){
    vector <cad> produtos;

    ler_arq(&produtos);

    cout << "Produtos cadastrados: \n\n";
    for(int i=0; i<produtos.size(); i++){
        cout << "---------------------------------------------------------------------------------------------\n";
        cout << "Produto " << i << ": \n\n";
        cout << "C�digo do produto: " << produtos[i].codigo << endl;
        cout << "Nome: " << produtos[i].nome<< endl;
        cout << "Pre�o: " << produtos[i].preco << endl;
        cout << "Quantidade dispon�vel em estoque: " << produtos[i].quantidade << endl;
    }
}


