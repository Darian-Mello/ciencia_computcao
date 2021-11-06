#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <ctype.h>
#include <windows.h>
using namespace std;

void incluir();
void mostrar_todos();
void consulta_nome();
void consulta_telefone();
bool verifica_strigs_iguais(string texto1, string texto2);

main(){
 setlocale(LC_ALL, "Portuguese");
    int menu;

    do{
        system("cls");
        cout << "MENU" << endl;
        cout << "0 - Sair" << endl;
        cout << "1 – Incluir" << endl;
        cout << "2 – Mostrar todos" << endl;
        cout << "3 – Consultar pelo nome" << endl;
        cout << "4 – Consultar pelo número" << endl;
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
            mostrar_todos();
        }
        else if(menu == 3){
            consulta_nome();
        }
        else if(menu == 4){
            consulta_telefone();
        }
        else
            MessageBox(NULL, "Esta opção não esta presente no menu.", "Erro", MB_OK | MB_ICONEXCLAMATION);

        fflush(stdin);
        getchar();
    }while(menu != 0);
}

void incluir(){
    string nome, numero;
    ofstream arquivo("agenda.txt", ios::app);

    cout << "Informe o nome: ";
    getline(cin, nome);
    cout << "\nInforme o número de telefone: ";
    cin >> numero;

    arquivo << endl << nome << ";" << numero;
    arquivo.close();

    system("cls");
    cout << "Contato adicionado";
}

void mostrar_todos(){
    ifstream arquivo("agenda.txt");
    string nome, telefone;

    if(!arquivo.is_open()){
        cout << "Erro ao abrir o arquivo.";
    }
    else{
        cout << "Contatos cadastrados: \n\n";
        while(!arquivo.eof()){
            getline(arquivo, nome, ';');
            cout << nome << ": ";
            getline(arquivo, telefone);
            cout << telefone << "\n";
        }
        arquivo.close();
    }
}

bool verifica_strigs_iguais(string texto1, string texto2){
    for(int i=0; i<texto2.size(); i++){
        texto1[i] = toupper(texto1[i]);
        texto2[i] = toupper(texto2[i]);
    }
    if(texto1 == texto2)
        return true;
    else
        return false;
}

void consulta_nome(){
    ifstream arquivo("agenda.txt");
    string nome, nome_arquivo, nome_consulta;
    bool leu=false;
    char c;

    if(!arquivo.is_open()){
        cout << "Erro ao abrir o arquivo";
    }
    else{
        cout << "Informe o nome que deseja consultar: ";
        getline(cin, nome);

        while(getline(arquivo, nome_arquivo)){
            for(int i=0; i<nome_arquivo.size(); i++){
                if(nome_arquivo[i] != ';')
                    nome_consulta += nome_arquivo[i];
                else
                    break;
            }

            if(verifica_strigs_iguais(nome_consulta, nome)){
                cout << "\nO contato informado foi encontrado: \n";
                cout << nome_arquivo;
                leu = true;
            }
            else{
                nome_consulta = "";
            }
        }
        if(leu == false){
            cout << "\nO contato informado não esta cadastrado.";
        }
        arquivo.close();
    }
}

void consulta_telefone(){
    ifstream arquivo("agenda.txt");
    string telefone, telefone_arquivo, telefone_consulta;
    bool leu=false;
    char c;

    if(!arquivo.is_open()){
        cout << "Erro ao abrir o arquivo";
    }
    else{
        cout << "Informe o nome que deseja consultar: ";
        getline(cin, telefone);

        while(getline(arquivo, telefone_arquivo)){
            for(int i=telefone_arquivo.size()-1; i>=0; i--){
                if(telefone_arquivo[i] != ';')
                    telefone_consulta = telefone_arquivo[i] + telefone_consulta;
                else
                    break;
            }

            if(verifica_strigs_iguais(telefone_consulta, telefone)){
                cout << "\nO número informado foi encontrado: \n";
                cout << telefone_arquivo;
                leu = true;
            }
            else{
                telefone_consulta = "";
            }
        }
        if(leu == false){
            cout << "\nO número informado não esta cadastrado.";
        }
        arquivo.close();
    }
}
