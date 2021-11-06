#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>

using namespace std;

struct livro{
    string nome;
    string editora;
    string isbn;
    int ano_ed;
    int paginas;
    float preco;
};

void cadastrar(livro cadastros[], int cont);
void mostrar_livros(livro cadastros[], int cont);
void caro(livro cadastros[], int cont);
void barato(livro cadastros[], int cont);
void Consulta_ano(livro cadastros[], int cont);

main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao, cont=0;
    bool leu = false;
    livro cadastros[20];

    do{
        do{
            system("cls");
            cout << "###########################MENU##########################" << endl;
            cout << "# 1 - Cadastrar livro                                   #" << endl;
            cout << "# 2 - Mostrar livros cadastrados                        #" << endl;
            cout << "# 3 - Livro mais caro                                   #" << endl;
            cout << "# 4 - Livro mais barato                                 #" << endl;
            cout << "# 5 - Mostrar os livro publicados em um determinado ano #" << endl;
            cout << "# 6 - Sair                                              #" << endl;
            cout << "#########################################################" << endl;
            cout << "\nSua escolha: ";
            cin >> opcao;
            fflush(stdin);

            if(opcao > 6 || opcao < 1)
                    MessageBox(NULL, "Essa opção não está presente no menu!", "Erro", MB_OK | MB_ICONEXCLAMATION);

        }while(opcao > 6 || opcao < 1);

        system("cls");

        if(opcao == 1){
            if(cont < 20){
                cadastrar(cadastros, cont);
                cont++;
                leu = true;
            }
            else
                MessageBox(NULL, "O número total de cadastros já foi preenchido!", "Erro", MB_OK | MB_ICONEXCLAMATION);
        }

        else if(leu == false && opcao != 6){
            MessageBox(NULL, "Nenhum livro foi cadastrado!", "Erro", MB_OK | MB_ICONEXCLAMATION);
            cadastrar(cadastros, cont);
            leu = true;
            cont++;
        }
        else if(opcao == 2)
            mostrar_livros(cadastros, cont);

        else if(opcao == 3)
            caro(cadastros, cont);

        else if(opcao == 4)
            barato(cadastros, cont);

        else if(opcao == 5)
            Consulta_ano(cadastros, cont);

        else
             cout << "Programa finaizado";


        fflush(stdin);
        getchar();
    }while(opcao != 6);
}

void cadastrar(livro cadastros[], int cont){
    cout << "Cadastro de livros\n";

    cout << "\nInforme o nome do livro: ";
    getline(cin, cadastros[cont].nome);

    cout << "\nInforme a editora: ";
    getline(cin, cadastros[cont].editora);

    cout << "\nInforme o ano da edição: ";
    cin >> cadastros[cont].ano_ed;

    cout << "\nInforme o isbn: ";
    cin >> cadastros[cont].isbn;

    cout << "\nInforme o númerode páginas: ";
    cin >> cadastros[cont].paginas;

    cout << "\nInforme o preco: ";
    cin >> cadastros[cont].preco;

    system("cls");
    cout << "Livro adicionado!";
}

void mostrar_livros(livro cadastros[], int cont){
    for(int i=0; i<cont; i++){
        cout << "\nNome: " << cadastros[i].nome;
        cout << "\nEditora: " << cadastros[i].editora;
        cout << "\nAno da edição: " << cadastros[i].ano_ed;
        cout << "\nISBN: " << cadastros[i].isbn;
        cout << "\nNúmero de páginas : " << cadastros[i].paginas;
        cout << "\nPreço: " << cadastros[i].preco;
        cout << "\n-----------------------------------------------------------------------------------------\n";
    }
}

void caro(livro cadastros[], int cont){
    int maior = cadastros[0].preco, i=0;

    for(int q=1; q<cont; q++){
        if(cadastros[q].preco > maior){
            maior = cadastros[q].preco;
            i = q;
        }
    }
    cout << "Livro mais caro: \n\n";
    cout << "\nNome: " << cadastros[i].nome;
    cout << "\nEditora: " << cadastros[i].editora;
    cout << "\nAno da edição: " << cadastros[i].ano_ed;
    cout << "\nISBN: " << cadastros[i].isbn;
    cout << "\nNúmero de páginas : " << cadastros[i].paginas;
    cout << "\nPreço: " << cadastros[i].preco;
}

void barato(livro cadastros[], int cont){
    int menor = cadastros[0].preco, i=0;

    for(int q=1; q<cont; q++){
        if(cadastros[q].preco < menor){
            menor = cadastros[q].preco;
            i = q;
        }
    }
    cout << "Livro mais barato: \n\n";
    cout << "\nNome: " << cadastros[i].nome;
    cout << "\nEditora: " << cadastros[i].editora;
    cout << "\nAno da edição: " << cadastros[i].ano_ed;
    cout << "\nISBN: " << cadastros[i].isbn;
    cout << "\nNúmero de páginas : " << cadastros[i].paginas;
    cout << "\nPreço: " << cadastros[i].preco;
}

void Consulta_ano(livro cadastros[], int cont){
    int ano, i;
    bool existe = false;

    cout << "Informe o ano de publicação: ";
    cin >> ano;

    for(int q=0; q<cont; q++){
        if(cadastros[q].ano_ed == ano){
            existe = true;
            cout << "\nNome: " << cadastros[i].nome;
            cout << "\nEditora: " << cadastros[i].editora;
            cout << "\nAno da edição: " << cadastros[i].ano_ed;
            cout << "\nISBN: " << cadastros[i].isbn;
            cout << "\nNúmero de páginas : " << cadastros[i].paginas;
            cout << "\nPreço: " << cadastros[i].preco;
            cout << "\n-----------------------------------------------------------------------------------------\n";
        }
    }
    if(existe == false)
        MessageBox(NULL, "Nenhum livro foi publicado nesse ano!", "Erro", MB_OK | MB_ICONEXCLAMATION);

}

