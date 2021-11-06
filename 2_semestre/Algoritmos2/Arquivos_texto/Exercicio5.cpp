#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;

void cadastrar();
void acha_maior();

main(){
    setlocale(LC_ALL, "Portuguese");
    int menu;

    cout << fixed;
    cout.precision(2);

    do{
        do{
            system("cls");
            cout << "MENU" << endl;
            cout << "0 - Sair" << endl;
            cout << "1 � Cadastrar" << endl;
            cout << "2 � Verificar maior n�mero presente no arquivo" << endl;
            cout << "\nSua escolha: ";
            cin >> menu;
            fflush(stdin);
        }while(menu < 0 || menu > 3);

        system("cls");

        if(menu == 0)
            cout << "Programa finalizado.";
        else if(menu == 1)
            cadastrar();
        else
            acha_maior();

        fflush(stdin);
        getchar();
    }while(menu != 0);
}

void cadastrar(){
    ofstream arquivo("ex05.txt", ios::app);
    string valor;

    cout << "Informe um valor float ";
    cin >> valor;

    arquivo << valor << endl;

    arquivo.close();
}

void acha_maior(){
    ifstream arquivo("ex05.txt");
    float maior;
    string valor;
    int cont=1, posicao;

    if(!arquivo.is_open()){
        cout << "Erro ao abrir o arquivo!";
    }
    else{
        while(getline(arquivo, valor)){
            if(cont == 1){
                maior = stof(valor);
                posicao = cont;
            }
            else if((stof(valor)) > maior){
                maior = stof(valor);
                posicao = cont;
            }
            cont++;
        }

        cout << "O maior valor presente no arquivo � o n�mero: " << maior << "\nEst� presente na " << posicao << "� linha do arquivo.";

        arquivo.close();
    }
}



