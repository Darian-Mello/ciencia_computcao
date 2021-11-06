#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
#include<cmath>
#include <windows.h>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int linha, coluna, posicoes_zeradas, linha_zerada, coluna_zerada;
    string leitura;

    do{
        cout << "Informe a quantidade de linhas e colunas que a matriz ter�!!\n(ao informar os valores, utilize um espa�o para os separar): ";
        cin >> linha >> coluna;
        linha = fabs(linha);
        coluna = fabs(coluna);

        if(linha <= 0 || coluna <= 0){
            MessageBox(NULL, "A matriz deve ser composta por n�meros positivos de linhas e colunas", "erro", MB_OK | MB_ICONERROR);
            system("cls");
        }
    }while (linha <= 0 || coluna <= 0);

    int matriz[linha][coluna];
    for(int l=0; l<linha; l++){
        for(int c=0; c<coluna; c++){
            matriz[l][c] = 1;
        }
    }

    cout << "\n\nInforme a quantidade de posi��es zeradas que a matriz ter�: ";
    cin >> posicoes_zeradas;

    for(int i=0; i<posicoes_zeradas; i++){
        system("cls");
        if(i == 0)
            cout << "(ao informar os valores da linha e coluna, utilize um espa�o para os separar)";

        do{
            cout << "\nInforme a " << i+1 << "� posi��o zerada: ";
            cin >> linha_zerada >> coluna_zerada;

            if(linha_zerada <= 0 || coluna_zerada <= 0 || linha_zerada >= linha || coluna_zerada >= coluna){
                MessageBox(NULL, "A posi��o informada n�o existe", "erro", MB_OK | MB_ICONERROR);
                system("cls");
            }
        }while (linha_zerada <= 0 || coluna_zerada <= 0 || linha_zerada >= linha || coluna_zerada >= coluna);

        matriz[linha_zerada][coluna_zerada] = 0;
    }

    fstream arquivo("matriz.txt", ios::out);

    for(int l = 0; l<linha; l++){
        for(int c = 0; c < coluna; c++){
            arquivo << matriz[l][c] << "\t";
        }
        arquivo << endl;
    }

    arquivo.close();
    arquivo.open("matriz.txt", ios::in);

    system("cls");
    cout << "Matriz gerada: \n";
    while(getline(arquivo, leitura)){
        cout << leitura << endl;
    }
    arquivo.close();
}


