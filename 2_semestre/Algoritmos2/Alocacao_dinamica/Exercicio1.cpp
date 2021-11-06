#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

void gera_valores(int *vet);
void mostra_vetor(int *vet);
void mostra_par(int *vet);
void mostra_impar(int *vet);

main(){
    setlocale(LC_ALL, "Portuguese");
    int *opcao = new int;
    int *vetor = new int[10];
    bool *leu = new bool(false);

    do{
        do{
            system("cls");
            cout << "####################MENU###################" << endl;
            cout << "# 0 - Sair                                #" << endl;
            cout << "# 1 - Gerar valores para o vetor          #" << endl;
            cout << "# 2 - Mostrar os valores do vetor         #" << endl;
            cout << "# 3 - Mostrar os números pares no vetor   #" << endl;
            cout << "# 4 - Mostrar os números ímpares no vetor #" << endl;
            cout << "###########################################" << endl;
            cout << "\nSua escolha: ";
            cin >> *opcao;
            system("cls");

            if(*opcao > 4 || *opcao < 0)
                    MessageBox(NULL, "Essa opção não está presente no menu!", "Erro", MB_OK | MB_ICONEXCLAMATION);
        }while(*opcao > 4 || *opcao < 0);

        if(*opcao == 0)
            cout << "Programa finalizado!";

        else if(*opcao == 1){
            gera_valores(vetor);
            *leu = true;
            cout << "Vetor gerado com sucesso!";
        }

        else if(*leu == false)
            MessageBox(NULL, "O vetor ainda não foi gerado!", "Erro", MB_OK | MB_ICONEXCLAMATION);

        else if(*opcao == 2)
            mostra_vetor(vetor);

        else if(*opcao == 3){
            mostra_vetor(vetor);
            mostra_par(vetor);
        }

        else{
            mostra_vetor(vetor);
            mostra_impar(vetor);
        }

        fflush(stdin);
        getchar();
        system("cls");
    }while(*opcao != 0);

    delete opcao;
    delete []vetor;
    delete leu;
}

void gera_valores(int *vet){

    srand(time(NULL));
    for(int i=0; i<10; i++){
        *vet = rand() % 100;
        vet++;
    }
}
void mostra_vetor(int *vet){

    cout << "Todos os valores do vetor: \n";
    for(int i=0; i<10; i++){
        cout << *vet << "\t";
        vet++;
    }
}
void mostra_par(int *vet){

    cout << "\n\nTodos os valores pares do vetor: \n";
    for(int i=0; i<10; i++){
        if(*vet % 2 == 0)
            cout << *vet << "\t";
        vet++;
    }
}
void mostra_impar(int *vet){
    cout << "\n\nTodos os valores ímpares do vetor: \n";
    for(int i=0; i<10; i++){
        if(*vet % 2 != 0)
            cout << *vet << "\t";
        vet++;
    }
}
