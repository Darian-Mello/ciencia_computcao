#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <string>
#include <time.h>
#define tam 5

using namespace std;

void preenche_arquivo();
void ler_arquivo(int *vetor);
void mostra_principal(int *principal);
void mostra_secundaria(int *secundaria);
void calcula_somas(int matriz[tam][tam]);

main(){
    setlocale(LC_ALL, "Portuguese");
    int menu, numeros[tam][tam], vetor[tam*tam], i=0;
    int diaprincipal[tam], diasecundaria[tam];

    //A funçao abaixo podera ser chamada para criar o arquivo numeros.txt, ou para que seu conteudo seja modificado
    //preenche_arquivo();

    ler_arquivo(vetor);

    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            numeros[l][c] = vetor[i];
            if(l == c){
                diaprincipal[l] = numeros[l][c];
            }
            if((l+c) == (tam-1)){
                diasecundaria[l] = numeros[l][c];
            }
            i++;
        }
    }

    do{
        do{
            system("cls");
            cout << "MENU" << endl;
            cout << "0 - Sair" << endl;
            cout << "1 – Mostrar elementos da diagonal principal" << endl;
            cout << "2 – Mostrar os elementos da diagonal secundária" << endl;
            cout << "3 – Mostrar a matriz e a soma dos elementos acima e abaixo da diagonal principal." << endl;
            cout << "\nSua escolha: ";
            cin >> menu;
            fflush(stdin);
        }while(menu < 0 || menu > 3);

        system("cls");

        if(menu == 0)
            cout << "Programa finalizado.";
        else if(menu == 1){
            mostra_principal(diaprincipal);
        }
        else if(menu == 2){
            mostra_secundaria(diasecundaria);
        }
        else{
            calcula_somas(numeros);
        }

        fflush(stdin);
        getchar();
    }while(menu != 0);
}

void preenche_arquivo(){
    ofstream arquivo("numeros.txt");

    srand(time(NULL));
    for(int i=0; i<(tam * tam); i++){
        arquivo << rand() % 100 << ';';
    }

    arquivo.close();
}

void ler_arquivo(int *vetor){
    ifstream arquivo("numeros.txt");
    string valor;
    char c;
    int i=0;

    if(!arquivo.is_open()){
        cout << "\nErro ao abrir o arquivo.";
    }

    else{
        while(arquivo.get(c)){
            if(c == ';'){
                vetor[i] = stof(valor);
                valor = "";
                i++;
            }
            else
                valor += c;
        }
        arquivo.close();
    }
}

void mostra_principal(int *principal){
    cout << "Diagonal principal: \n";
    for(int i=0; i<tam; i++){
        cout << principal[i] << "\t";
    }
}

void mostra_secundaria(int *secundaria){
    cout << "Diagonal secundária: \n";
    for(int i=0; i<tam; i++){
        cout << secundaria[i] << "\t";
    }
}

void calcula_somas(int matriz[tam][tam]){
    int soma_diagonalPrincipal = 0;
    int soma_acima_diagonal = 0;
    int soma_abaixo_diagonal = 0;

    cout << "Matriz cintendo os números do arquivo: \n";
    for(int l=0; l<tam; l++){
        for(int c=0; c<tam; c++){
            if(l == c){
                soma_diagonalPrincipal += matriz[l][c];
            }
            else if(c > l){
                soma_acima_diagonal += matriz[l][c];
            }
            else if(c < l){
                soma_abaixo_diagonal += matriz[l][c];
            }
            cout << matriz[l][c] << "\t";
        }
        cout << endl;
    }

    cout << "\nSoma dos valores na diagonal principal: " << soma_diagonalPrincipal;
    cout << "\nSoma dos valores acima da diagonal principal: " << soma_acima_diagonal;
    cout << "\nSoma dos valores abaixo da diagonal principal: " << soma_abaixo_diagonal;
}

