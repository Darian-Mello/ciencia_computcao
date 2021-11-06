#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>

using namespace std;

struct produto{
    string codigo;
    string nome;
    string unidade;
    float valor;
    int quantidade;
};

void cadastrar_produto(produto *prods, int *cont);
void listar_produtos(produto *prods, int cont);
void consultar_produto(produto *prods, int cont);
void vender_produto(produto *prods, int cont);
void finaliza_venda(produto **prods);

main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao, cont=0;
    bool leu = false;
    produto *cadastros = new produto[50];

    do{
        do{
            system("cls");
            cout << "#################MENU#################" << endl;
            cout << "# 0 - Sair                           #" << endl;
            cout << "# 1 - Cadastrar produto              #" << endl;
            cout << "# 2 - Listar produtos cadastrados    #" << endl;
            cout << "# 3 - consultar produto pelo código  #" << endl;
            cout << "# 4 - Vender produto                 #" << endl;
            cout << "######################################" << endl;
            cout << "\nSua escolha: ";
            cin >> opcao;
            fflush(stdin);

            if(opcao > 4 || opcao < 0)
                    MessageBox(NULL, "Essa opção não está presente no menu!", "Erro", MB_OK | MB_ICONEXCLAMATION);

        }while(opcao > 4 || opcao < 0);
        system("cls");

        if(opcao == 0)
            cout << "Programa finalizado!";

        else if(opcao == 1){
            if(cont < 50){
                cadastrar_produto(&cadastros[cont], &cont);
                leu = true;
            }
            else
                MessageBox(NULL, "O número total de cadastros já foi preenchido!", "Erro", MB_OK | MB_ICONEXCLAMATION);
        }

        else if(leu == false){
                 MessageBox(NULL, "Nenhum produto foi cadastrado!", "Erro", MB_OK | MB_ICONEXCLAMATION);
                 cadastrar_produto(&cadastros[cont], &cont);
                 leu = true;
        }

        else if(opcao == 2)
            listar_produtos(cadastros, cont);

        else if(opcao == 3)
            consultar_produto(cadastros, cont);

        else
            vender_produto(cadastros, cont);

        fflush(stdin);
        getchar();
    }while(opcao != 0);

    delete []cadastros;
}

void cadastrar_produto(produto *prods, int *cont){
    cout << "Cadastro de produtos\n";

    bool existe = false;
    string cod;

    cout << "\nInforme o código: ";
    cin >> cod;
    prods -= *cont;
    for(int i=0; i<(*cont); i++){
        if(cod == (*prods).codigo)
            existe = true;

        prods++;
    }
    if(existe == true){
        MessageBox(NULL, "Esse produto já está cadastrado!", "Erro", MB_OK | MB_ICONEXCLAMATION);
    }
    else{
        (*prods).codigo = cod;
        (*cont)++;

        do{
            fflush(stdin);
            cout << "\nInforme o nome do produto: ";
            getline(cin, (*prods).nome);
        }while((*prods).nome.empty());

        cout << "\nInforme a unidade: ";
        cin >> (*prods).unidade;

        cout << "\nInforme a quantidade presente em estoque: ";
        cin >> (*prods).quantidade;

        cout << "\nInforme o valor: ";
        cin >> (*prods).valor;

        system("cls");
        cout << "Produto adicionado!";
    }
}

void listar_produtos(produto *prods, int cont){

    for(int i=0; i<cont; i++){
        cout << "\n\nProduto " << i << ":\n";

        cout << "\nCódigo do produto: " << (*prods).codigo;
        cout << "\nNome: " << (*prods).nome;
        cout << "\nUnidade: " << (*prods).unidade;
        cout << "\nQuantidade em estoque: " << (*prods).quantidade;
        cout << "\nvalor : " << (*prods).valor;
        prods++;
    }
}

void consultar_produto(produto *prods, int cont){
    string consulta;
    bool encontrou = false;

    cout << "Consulta de produto pelo código\n\n";
    cout << "Informe o códgo do produto: ";
    cin >> consulta;

    for(int i=0; i<cont; i++){
        if((*prods).codigo == consulta){
            cout << "\nCódigo do produto: " << (*prods).codigo;
            cout << "\nNome: " << (*prods).nome;
            cout << "\nUnidade: " << (*prods).unidade;
            cout << "\nQuantidade em estoque: " << (*prods).quantidade;
            cout << "\nvalor : " << (*prods).valor;
            encontrou = true;
            break;
        }
        prods++;
    }
    if(encontrou == false)
        MessageBox(NULL, "Este produto não está cadastrado!", "Erro", MB_OK | MB_ICONEXCLAMATION);
}

void vender_produto(produto *prods, int cont){
    string codigo;
    int i;
    bool encontrou = false;

    cout << "Venda\n\n";
    cout << "informe o Código do produto: ";
    cin >> codigo;
    for(i=0; i<cont; i++){
        if((*prods).codigo == codigo){
            finaliza_venda(&prods);
            encontrou = true;
            break;
        }
        prods++;
    }
    if(encontrou == false)
        MessageBox(NULL, "Este produto não está cadastrado!", "Erro", MB_OK | MB_ICONEXCLAMATION);
}

void finaliza_venda(produto **prod) {
    int quantidade, execute;

    cout << "\nInforme a quantidade do produto: ";
    cin >> quantidade;

    if(quantidade <= (**prod).quantidade && quantidade >= 0){
        (**prod).quantidade -= quantidade;
        system("cls");
        cout << "Venda Finaliza!";
    }
    else{
        cout << "\nA quantidade presente no estoque é de " << (**prod).quantidade << ", deseja vender uma quantidade de acordo com o estoque(1 - sim, 2 - não)? ";
        cin >> execute;

        if(execute == 1){
            system("cls");
            finaliza_venda(prod);
        }
    }
}

