#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;

void adiciona();
void calculos();
int quantidade();

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
            cout << "1 - Adicionar número float ao arquivo" << endl;
            cout << "2 - mostrar todos os valores, a soma, média, maior e menor valor existente no arquivo." << endl;
            cout << "\nSua escolha: ";
            cin >> menu;
            fflush(stdin);
        }while(menu < 0 || menu > 2);

        system("cls");

        if(menu == 0)
            cout << "Programa finalizado.";
        else if(menu == 1){
            adiciona();
        }
        else{
            calculos();
        }

        fflush(stdin);
        getchar();
    }while(menu != 0);

}

void adiciona(){
    ofstream arquivo;
    string valor;

    cout << "Informe o número que deseja inserir: ";
    cin >> valor;

    arquivo.open("ex02.txt", ios::app);
    arquivo << valor << ';';
    arquivo.close();
}

void calculos(){
    ifstream arquivo;
    int quant, i=0;
    string valor;
    char c;
    float maior, menor, soma=0, media;

    arquivo.open("ex02.txt");
    if(arquivo.is_open()){

        quant = quantidade();
        float numeros[quant];

        while(arquivo.get(c)){
            if(c == ';'){
                numeros[i] = stof(valor);
                valor = "";
                i++;
            }
            else
                valor += c;
        }

        maior = numeros[0];
        menor = maior;

        system("cls");
        cout << "Valores presentes no arquivo: \n";
        for(int i=0; i<quant; i++){
            if(numeros[i] < menor)
                menor = numeros[i];
            else if(maior < numeros[i])
                maior = numeros[i];

            soma += numeros[i];
            cout << numeros[i] << "\t";
        }

        cout << "\n\nSoma dos valores: " << soma;
        cout << "\nMaior valor: " << maior;
        cout << "\nMenor valor: " << menor;
        cout << "\nMédia dos valores: " << soma / quant;

        arquivo.close();
    }

    else
        cout << "Não foi possível abrir o arquivo.";

}

int quantidade(){
    ifstream arquivo("ex02.txt");
    int cont = 0;
    char c;

    while(arquivo.get(c)){
        if(c == ';')
            cont++;
    }
    arquivo.close();

    return cont;
}

