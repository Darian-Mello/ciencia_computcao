#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>
#include <time.h>
#define tam 8

using namespace std;

void gerar_valores(int (*matriz)[tam]);
void escrever_arquivo(int (*matriz)[tam]);
void mostrar_matriz();

main(){
    setlocale(LC_ALL, "Portuguese");
    bool leu = false, leu2=false;
    int matriz[tam][tam], menu;

    do{
        do{
            system("cls");
            cout << "MENU" << endl;
            cout << "0 - Sair" << endl;
            cout << "1 – Gerar valores para a matriz" << endl;
            cout << "2 – Escrever valores no arquivo texto" << endl;
            cout << "3 – Ler valores do arquivo e mostrar na tela no formato da matriz" << endl;
            cout << "\nSua escolha: ";
            cin >> menu;
            fflush(stdin);
        }while(menu < 0 || menu > 3);

        system("cls");

        if(menu == 0)
            cout << "Programa finalizado.";
        else if(menu == 1){
            gerar_valores(matriz);
            leu = true;
        }
        else if(leu == false){
            cout << "A matriz ainda não foi gerada!";
        }
        else if(menu == 2){
            escrever_arquivo(matriz);
            leu2 = true;
        }
        else{
            if(leu2 == false)
                cout << "Os valores da matriz ainda não foram adicionados ao arquivo.";
            else
                mostrar_matriz();
        }

        fflush(stdin);
        getchar();
    }while(menu != 0);
}

void gerar_valores(int matriz[tam][tam]){

    srand(time(NULL));
    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            matriz[l][c] = rand() % 100;
        }
    }
    cout << "Matriz gerada.";
}

void escrever_arquivo(int matriz[tam][tam]){
    ofstream arquivo("matriz.txt", ios::out);

    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            arquivo << matriz[l][c] << ",";
        }
        arquivo << endl;
    }

    cout << "Valores da matriz adicionadas ao arquivo com sucesso!";
    arquivo.close();
}

void mostrar_matriz(){
    ifstream arquivo("matriz.txt");
    char c;
    string valor;
    int vetor[tam * tam], cont=0;

    while(arquivo.get(c)){
        if(c != ','){
            valor += c;
        }
        else{
            vetor[cont] = stoi(valor);
            valor = "";
            cont++;
        }
    }

    cout << "Valores presentes no arquivo: \n";
    for(int i=0; i<(tam*tam); i++){
        if(i % tam == 0 && i != 0){
            cout << endl;
        }
        cout << vetor[i] << "\t";
    }

    arquivo.close();
}
