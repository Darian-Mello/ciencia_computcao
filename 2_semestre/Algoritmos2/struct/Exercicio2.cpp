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

void cadastrar_produto(produto prods[], int cont);
void listar_produtos(produto prods[], int cont);
void consultar_produto(produto prods[], int cont);
void vender_produto(produto prods[], int cont);
void finaliza_venda(produto prods[], int posicao);

main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao, cont=0;
    bool leu = false;
    produto prods[50];

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
        switch(opcao){
        case 0:
            cout << "Programa finaizado";
            break;

        case 1:
            if(cont < 50){
                cadastrar_produto(prods, cont);
                cont++;
                leu = true;
            }
            else
                MessageBox(NULL, "O número total de cadastros já foi preenchido!", "Erro", MB_OK | MB_ICONEXCLAMATION);
            break;

        case 2:
            if(leu == false){
                 MessageBox(NULL, "Nenhum produto foi cadastrado!", "Erro", MB_OK | MB_ICONEXCLAMATION);
                 cadastrar_produto(prods, cont);
                 leu = true;
                 cont++;
            }
            else
                listar_produtos(prods, cont);
            break;

        case 3:
            if(leu == false){
                 MessageBox(NULL, "Nenhum produto foi cadastrado!", "Erro", MB_OK | MB_ICONEXCLAMATION);
                 cadastrar_produto(prods, cont);
                 leu = true;
                 cont++;
            }
            else
                consultar_produto(prods, cont);
            break;

        case 4:
            if(leu == false){
                 MessageBox(NULL, "Nenhum produto foi cadastrado!", "Erro", MB_OK | MB_ICONEXCLAMATION);
                 cadastrar_produto(prods, cont);
                 leu = true;
                 cont++;
            }
            else
                vender_produto(prods, cont);
            break;
        }

        fflush(stdin);
        getchar();
    }while(opcao != 0);

}

void cadastrar_produto(produto prods[], int cont){
    cout << "Cadastro de produtos\n";

    cout << "\nInforme o nome do produto: ";
    getline(cin, prods[cont].nome);

    cout << "\nInforme o código: ";
    cin >> prods[cont].codigo;

    cout << "\nInforme a unidade: ";
    cin >> prods[cont].unidade;

    cout << "\nInforme a quantidade presente em estoque: ";
    cin >> prods[cont].quantidade;

    cout << "\nInforme o valor: ";
    cin >> prods[cont].valor;

    system("cls");
    cout << "Produto adicionado!";
}

void listar_produtos(produto prods[], int cont){
    for(int i=0; i<cont; i++){
        cout << "\n\nProduto " << i << ":\n";

        cout << "\nCódigo do produto: " << prods[i].codigo;
        cout << "\nNome: " << prods[i].nome;
        cout << "\nUnidade: " << prods[i].unidade;
        cout << "\nQuantidade em estoque: " << prods[i].quantidade;
        cout << "\nvalor : " << prods[i].valor;
    }
}

void consultar_produto(produto prods[], int cont){
    string consulta;
    bool encontrou = false;

    cout << "Consulta de produto pelo código\n\n";
    cout << "Informe o códgo do produto: ";
    cin >> consulta;
    for(int i=0; i<cont; i++){
        if(prods[i].codigo == consulta){
            cout << "\nCódigo do produto: " << prods[i].codigo;
            cout << "\nNome: " << prods[i].nome;
            cout << "\nUnidade: " << prods[i].unidade;
            cout << "\nQuantidade em estoque: " << prods[i].quantidade;
            cout << "\nvalor : " << prods[i].valor;
            encontrou = true;
        }
    }
    if(encontrou == false)
        MessageBox(NULL, "Este produto não está cadastrado!", "Erro", MB_OK | MB_ICONEXCLAMATION);
}

void vender_produto(produto prods[], int cont){
    string codigo;
    int i;
    bool encontrou = false;

    cout << "Venda\n\n";
    cout << "informe o Código do produto: ";
    cin >> codigo;
    for(i=0; i<cont; i++){
        if(prods[i].codigo == codigo){
            finaliza_venda(prods, i);
            encontrou = true;
            break;
        }
    }
    if(encontrou == false)
        MessageBox(NULL, "Este produto não está cadastrado!", "Erro", MB_OK | MB_ICONEXCLAMATION);
}

void finaliza_venda(produto prods[], int posicao) {
    int quantidade, execute;

    cout << "Informe a quantidate do produto: ";
    cin >> quantidade;

    if(quantidade <= prods[posicao].quantidade){
        prods[posicao].quantidade -= quantidade;
        system("cls");
        cout << "Venda Finaliza!";
    }
    else{
        cout << "\nA quntidade presente no estoque é de " << prods[posicao].quantidade << ", deseja vender mesmo assim(1 - sim, 2 - não)? ";
        cin >> execute;

        if(execute == 1){
            system("cls");
            finaliza_venda(prods, posicao);
        }
    }
}



