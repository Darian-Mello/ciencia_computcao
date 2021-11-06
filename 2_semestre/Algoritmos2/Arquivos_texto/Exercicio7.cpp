#include <iostream>
#include <cstdlib>
#include <fstream>
#include <time.h>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

void adiciona();
void mostra();
void mostra_soma_arquivo();

main(){
    setlocale(LC_ALL, "Portuguese");
    int menu, tam;
    vector <int> vetor;
    ofstream arquivo("exer_7.txt");

    srand(time(NULL));
    for(int i=0; i<50; i++){
        vetor.push_back(rand() % 200);
    }

    sort(vetor.begin(), vetor.end());

    for(int i=0; i<50; i++){
        arquivo << vetor[i] << endl;
    }
    arquivo.close();

    do{
        do{
            system("cls");
            cout << "MENU" << endl;
            cout << "0 - Sair" << endl;
            cout << "1 – Incluir mais valores no arquivo" << endl;
            cout << "2 – Mostrar valores existentes no arquivo" << endl;
            cout << "3 – Mostrar a quantidade e a soma dos valores do arquivo" << endl;
            cout << "\nSua escolha: ";
            cin >> menu;
            fflush(stdin);
        }while(menu < 0 || menu > 3);

        system("cls");

        if(menu == 0)
            cout << "Programa finalizado.";
        else if(menu == 1){
            adiciona();
        }
        else if(menu == 2){
            mostra();
        }
        else
            mostra_soma_arquivo();

        fflush(stdin);
        getchar();
    }while(menu != 0);
}

void adiciona(){
    fstream arquivo("exer_7.txt", ios::in);
    vector <int> vetor;
    string valor;

    while(getline(arquivo, valor)){
        vetor.push_back(stoi(valor));
    }
    cout << "Inflorme o valor que deseja inserir no arquivo: ";
    cin >> valor;
    vetor.push_back(stoi(valor));

    arquivo.close();
    arquivo.open("exer_7.txt", ios::out);

    sort(vetor.begin(), vetor.end());

    for(int i=0; i<vetor.size(); i++){
        arquivo << vetor[i] << endl;
    }
    arquivo.close();

    system("cls");
    cout << "Valor adicionado.";
}
void mostra(){
    ifstream arquivo("exer_7.txt");
    string valor;

    if(arquivo.is_open()){
        cout << "Valores presentes no arquivo: \n";

        while(getline(arquivo, valor)){
            cout << valor << endl;
        }
        arquivo.close();
    }
    else
        cout << "Erro ao abrir o arquivo.";
}
void mostra_soma_arquivo(){
    ifstream arquivo("exer_7.txt");
    string valor;
    int soma=0, quant=0;

    if(arquivo.is_open()){
        while(getline(arquivo, valor)){
            soma += stoi(valor);
            quant++;
        }

        cout << "Existem " << quant << " números no arquivo;\n";
        cout << "A soma entre todos os números é igual a: " << soma;
        arquivo.close();
    }
    else
        cout << "Erro ao abrir o arquivo.";
}
