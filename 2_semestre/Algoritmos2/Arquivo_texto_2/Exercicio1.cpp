#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <ctype.h>
#include <windows.h>
using namespace std;

void cadastrar_cidade();
void listar_cidades();
bool verifica(string nova_cidade, string cidade);

main(){
    setlocale(LC_ALL, "Portuguese");
    int menu;

    do{
        system("cls");
        cout << "MENU" << endl;
        cout << "0 - Sair" << endl;
        cout << "1 – Incluir mais uma cidade no arquivo" << endl;
        cout << "2 – Listar cidades no arquivo arquivo" << endl;
        cout << "\nSua escolha: ";
        cin >> menu;
        fflush(stdin);
        system("cls");

        if(menu == 0)
            cout << "Programa finalizado!";
        else if(menu == 1)
            cadastrar_cidade();
        else if(menu == 2)
            listar_cidades();
        else
            MessageBox(NULL, "Esta opção não esta presente no menu.", "Erro", MB_OK | MB_ICONEXCLAMATION);

        fflush(stdin);
        getchar();
    }while(menu != 0);
}

void cadastrar_cidade(){
    string cidade, nova_cidade;
    fstream arquivo;
    int posicao = 0;
    bool ja_existe =false;

    arquivo.open("cidades.txt");

    if(!arquivo.is_open()){
        cout << "Erro ao abrir o arquivo.";
    }
    else{
        cout << "Informe o nome da cidade que deseja inserir: ";
        fflush(stdin);
        getline(cin, nova_cidade);


        while(getline(arquivo, cidade) && ja_existe == false){
                ja_existe = verifica(nova_cidade, cidade);
                posicao++;
            }
        }
        if(ja_existe == true){
            cout << "\nEsta cidade já está presente no arquivo.";
            cout << "\nSe encontra na " << posicao << "ª posição.";
        }
        else{
            arquivo.close();
            arquivo.open("cidades.txt", ios::app);
            arquivo << nova_cidade << "\n";
            cout << "\n\nCidade adicionada.";
        }
        arquivo.close();
    }

bool verifica(string nova_cidade, string cidade){
    for(int i=0; i<cidade.size(); i++){
        nova_cidade[i] = toupper(nova_cidade[i]);
        cidade[i] = toupper(cidade[i]);
    }
    if(cidade == nova_cidade)
        return true;
    else
        return false;
}

void listar_cidades(){
    ifstream arquivo("cidades.txt");
    string cidade;

    if(arquivo.is_open()){
        cout << "Cidades cadastradas:\n";
        while(getline(arquivo, cidade)){
            cout << cidade << "\n";
        }
        arquivo.close();
    }
    else
        cout << "Erro ao abrir o arquivo.";
}
