#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

void gera_vet(int *vet, int *tam);
void localiza_valor(int *vet, int *tam, int *sobra, int *tam_sobra);
void mostra_vet(int *vet, int *tam);
void mostra_sobra(int *sobra, int *tam_sobra);


main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao, tam, tam_sobra=0;
    bool fez_1 = false, fez_2 = false;

    do{
        system("cls");
        cout << "Olá! Informe o número de posições que o vetor terá (Não é permitido valor maior que 100, nem menor que 2): ";
        cin >> tam;

    }while(tam < 2 || tam > 100);  // Decidi por um limite mínimo também.

    int *vet = new int[tam];
    int *sobra = new int[tam];

    do{
        do{
            system("cls");
            cout << "#################MENU#################" << endl;
            cout << "# 0 - Sair                           #" << endl;
            cout << "# 1 - Gerar valores para o vetor     #" << endl;
            cout << "# 2 - Localizar valor                #" << endl;
            cout << "# 3 - Mostrar vetor vet              #" << endl;
            cout << "# 4 - Mostrar vetor 'Sobra'          #" << endl;
            cout << "######################################" << endl;
            cout << "\nSua escolha: ";
            cin >> opcao;
            fflush(stdin);

            if(opcao > 4 || opcao < 0){
                    MessageBox(NULL, "Essa opção não está presente no menu!", "Erro", MB_OK | MB_ICONEXCLAMATION);
            }

        }while(opcao > 4 || opcao < 0);
        system("cls");

        if(opcao == 0){
            cout << "Programa finalizado!";
        }

        else if(opcao == 1){
            gera_vet(vet, &tam);
            fez_1 = true;
        }

        else if(fez_1 == false){
            MessageBox(NULL, "Nem o vetor Vet, nem o vetor sobra possuem valores armazenados!", "Erro", MB_OK | MB_ICONEXCLAMATION);
        }

        else if(opcao == 2){
            localiza_valor(vet, &tam, sobra, &tam_sobra);
            fez_2 = true;
        }

        else if(opcao == 3){
            mostra_vet(vet, &tam);
        }

        else if(opcao == 4){
            if(fez_2 == false){
                MessageBox(NULL, "A opção 2 ainda não foi acionada, portanto o vetor sobra não possui valores!", "Erro", MB_OK | MB_ICONEXCLAMATION);
            }
            else{
                mostra_sobra(sobra, &tam_sobra);
            }
        }

    fflush(stdin);
    getchar();
    }while(opcao != 0);

    delete []vet;
    delete []sobra;
}

void gera_vet(int *vet, int *tam){
    int numero, existe=0, j, i;

    srand(time(NULL));
    for(i=0; i<(*tam); i++){
        numero = rand() % 100;

        vet -= i;
        for(j=0; j<i; j++){
            if(numero == *vet){
                existe = 1;
            }
            vet++;
        }

        if(existe == 0){
            *vet = numero;
            vet++;
        }
        else{
            i--;
        }

        existe = 0;
    }
    cout << "Vetor Vet gerado com sucesso!";
}

void localiza_valor(int *vet, int *tam, int *sobra, int *tam_sobra){
    int numero;
    bool encontrou=false;

    cout << "Informe o valor que deseja verificar: ";
    cin >> numero;

    for(int i=0; i<(*tam); i++){
        if(numero == *vet){
            encontrou = true;
        }

        vet++;
    }

    if(encontrou == true){
        cout << "Valor " << numero << ", pertence ao vetor.";
    }
    else{
        cout << "Valor " << numero << ", não pertence ao vetor.";

        if((*tam) == (*tam_sobra)){
            delete []sobra;
            *tam_sobra = 0;
        }

        sobra += (*tam_sobra);
        *sobra = numero;
        sobra -= (*tam_sobra);
        (*tam_sobra)++;

        cout << "\n\n";
        mostra_sobra(sobra, tam_sobra);
    }
}

void mostra_vet(int *vet, int *tam){
    cout << "Vetor Vet: \n";
    for(int i=0; i<(*tam); i++){
        cout << *vet << "\t";
        vet++;
    }
}

void mostra_sobra(int *sobra, int *tam_sobra){
    cout << "Vetor Sobra: \n";
    for(int i=0; i<(*tam_sobra); i++){
        cout << *sobra << "\t";
        sobra++;
    }
    if((*tam_sobra) == 0){
        cout << "\nO vetor sobra ainda não possui valores.";
    }
}
