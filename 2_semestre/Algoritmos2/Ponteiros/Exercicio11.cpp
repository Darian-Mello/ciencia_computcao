#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <windows.h>

using namespace std;

void gerar(int *vet);
void soma(int *vet);
void maiormenor(int *vet);
void leitura(int *vet);

main(){
    setlocale(LC_ALL, "Portuguese");
    int vetor[10], opcao;
    bool gerou=false;


    do{
        do{
            system("cls");
            cout << "##################MENU#################" << endl;
            cout << "# 0 - Sair                            #" << endl;
            cout << "# 1 - Gerar valores                   #" << endl;
            cout << "# 2 - Mostrar soma dos valores        #" << endl;
            cout << "# 3 - Mostrar maior e menor valor     #" << endl;
            cout << "# 4 - Slocitar a leitura de um valor  #" << endl;
            cout << "#######################################" << endl;
            cout << "\nSua escolha: ";
            cin >> opcao;
            fflush(stdin);

            if(opcao > 4 || opcao < 0)
                    MessageBox(NULL, "Essa opção não está presente no menu!", "Erro", MB_OK | MB_ICONEXCLAMATION);

        }while(opcao > 4 || opcao < 0);
        system("cls");

        if(opcao == 0)
            cout << "Programa finalizado!\n";
        else if(opcao == 1){
            gerar(&vetor[0]);
            gerou = true;
        }
        else if(opcao != 0 && gerou == false){
            MessageBox(NULL, "É preciso gerar os valores!", "Erro", MB_OK | MB_ICONEXCLAMATION);
            gerar(&vetor[0]);
            gerou = true;
        }
        else if(opcao == 2)
            soma(&vetor[0]);
        else if(opcao == 3)
            maiormenor(&vetor[0]);
        else
            leitura(&vetor[0]);

        fflush(stdin);
        getchar();
    }while(opcao != 0);
}

void gerar(int *vet){
    int valor, verifica = 0;


    cout << "Vetor gerado: \n";
    srand(time(NULL));
    for(int i=0; i<10; i++){
        valor = rand() % 50;
        for(int k=0; k<i; k++){
            if(valor == vet[k])
                verifica = 1;
        }

        if(verifica == 0){
            vet[i] = valor;
            cout << vet[i] << "\t";
        }
        else
            i--;

        verifica = 0;
    }
}

void soma(int *vet){
    int soma=0;

    for(int i=0; i<10; i++){
        soma += vet[i];
    }

    cout << "A soma dos valores presentes no vetor é igual a: " << soma;
}

void maiormenor(int *vet){
    int imaior, imenor, maior = vet[0], menor = vet[0], i;

    for(i=1; i<10; i++){
        if(vet[i] < menor){
            menor = vet[i];
            imenor = i;
        }
        else if(vet[i] > maior){
            maior = vet[i];
            imaior = i;
        }
    }

    cout << "O maior valor é o " << maior << ", encontrado na posição " << imaior << " do vetor.\n\n";
    cout << "O menor valor é o " << menor << ", encontrado na posição " << imenor << " do vetor.";
}

void leitura(int *vet){
    int valor, existe = 0, i, posicao;

    cout << "Informe um valor para saber se está presente no vetor: ";
    cin >> valor;

    for(i=0; i<10; i++){
        if(valor == vet[i]){
            existe = 1;
            posicao = i;
        }
    }

    if(existe == 1)
        cout << "\nO valor esta presente no vetor, e se encontra na " << posicao << "ª posição.";
    else
        cout << "\nEste valor não esta presente no vetor.";
}

