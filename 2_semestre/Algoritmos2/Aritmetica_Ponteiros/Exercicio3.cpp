#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

void gerarv1(int *vetor);
void gerarv2(int *vetor1, int *vetor2);
void mostrarVetores(int *vetor1, int *vetor2);
void calculaV1(int *vetor);


main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao, v1[20], v2[20];
    bool leuv1=false, leuv2=false;

    do{
        do{
            system("cls");
            cout << "##################MENU##################" << endl;
            cout << "# 0 - Sair                             #" << endl;
            cout << "# 1 - Gerar valores para o vetor 1     #" << endl;
            cout << "# 2 - Preencher vetor v2               #" << endl;
            cout << "# 3 - Mostrar os dois vetores na tela  #" << endl;
            cout << "# 4 - Mostrar o maior, o menor e a     #" << endl;
            cout << "# média dos valores dentro do vetor v1 #" << endl;
            cout << "########################################" << endl;
            cout << "\nSua escolha: ";
            cin >> opcao;
            fflush(stdin);

            if(opcao > 4 || opcao < 0)
                    MessageBox(NULL, "Essa opção não está presente no menu!", "Erro", MB_OK | MB_ICONEXCLAMATION);

        }while(opcao > 4 || opcao < 0);

        system("cls");
        if(opcao == 0)
            cout << "Programa finalizado!";
        else if(opcao == 1){
            gerarv1(v1);
            leuv1 = true;
        }

        else if(opcao == 2){
            if(leuv1 == false)
                MessageBox(NULL, "O vetor V1 ainda não foi gerado, por favor adicione valores ao vetor v1!", "Erro", MB_OK | MB_ICONEXCLAMATION);
            else{
                gerarv2(v1, v2);
                leuv2=true;
            }
        }

        else if(opcao == 3){
            if(leuv1 == false){
                MessageBox(NULL, "O vetor V1 ainda não foi gerado, por favor adicione valores ao vetor v1!", "Erro", MB_OK | MB_ICONEXCLAMATION);
                continue;
            }
            if(leuv2 == false){
                MessageBox(NULL, "O vetor V2 ainda não foi gerado, por favor adicione valores ao vetor v2!", "Erro", MB_OK | MB_ICONEXCLAMATION);
                continue;
            }
            mostrarVetores(v1, v2);
        }

        else{
            if(leuv1 == false)
                MessageBox(NULL, "O vetor V1 ainda não foi gerado, por favor adicione valores ao vetor v1!", "Erro", MB_OK | MB_ICONEXCLAMATION);
            else{
                calculaV1(v1);
            }
        }

        fflush(stdin);
        getchar();
    }while(opcao != 0);

}

void gerarv1(int *vetor){
    srand(time(NULL));
    for(int i=0; i<20; i++){
        *(vetor+i) = rand() % 100;
    }
    cout << "Vetor V1 gerado com sucesso!";
}

void gerarv2(int *vetor1, int *vetor2){
    int i=0, j=19;
    for(i; i<20; i++, j--){
        *(vetor2+i) = *(vetor1+j);
    }
    cout << "Vetor V2 gerado com sucesso!";
}

void mostrarVetores(int *vetor1, int *vetor2){
    cout << "Vetor V1: \n";
    for(int i=0; i<20; i++){
        cout << *(vetor1+i) << "\t";
    }
    cout << "\n\nVetor V2: \n";
    for(int i=0; i<20; i++){
        cout << *(vetor2+i) << "\t";
    }
}

void calculaV1(int *vetor){
    int maior=(*vetor), menor=(*vetor);
    float soma=0;

    cout << "Vetor V1: \n";
    for(int i=0; i<20; i++){
        cout << *(vetor+i) << "\t";

        soma += *(vetor+i);

        if(*(vetor+i) > maior)
            maior = *(vetor+i);
        else if(*(vetor+i) < menor)
            menor = *(vetor+i);
    }
    cout << "\n\nMaior elemento do vetor V1: " << maior;
    cout << "\nMenor elemento do vetor V1: " << menor;
    cout << "\nMédia dos valores dentro do vetor v1: " << soma/20;
}
