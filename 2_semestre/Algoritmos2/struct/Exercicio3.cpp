#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>
#include <cmath>

using namespace std;

struct cadastros{
    string numero;
    string nome;
    float saldo;
};

int cadastrar_contas(cadastros contas[], int cont);
void verifica_se_conta_existe(cadastros contas[], int cont, int opcao);
void ver_conta(cadastros &contas);
void depositar(cadastros &contas);
void sacar(cadastros &contas);

main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao, cont=0;
    bool leu = false, adicionar = false;
    string numero;
    cadastros contas[10];

    do{
        do{
            system("cls");
            cout << "###############MENU###############" << endl;
            cout << "# 1 - Cadastrar contas           #" << endl;
            cout << "# 2 - Visualizar dados na conta  #" << endl;
            cout << "# 3 - Depositar                  #" << endl;
            cout << "# 4 - Sacar                      #" << endl;
            cout << "# 5 - Sair                       #" << endl;
            cout << "##################################" << endl;
            cout << "\nSua escolha: ";
            cin >> opcao;
            fflush(stdin);

            if(opcao > 5 || opcao < 1)
                    MessageBox(NULL, "Essa opção não está presente no menu!", "Erro", MB_OK | MB_ICONEXCLAMATION);

        }while(opcao > 5 || opcao < 1);

          system("cls");

        if(opcao == 1){
            if(cont < 10){
                adicionar = cadastrar_contas(contas, cont);
                if(adicionar = true){
                    cont++;
                    leu = true;
                }
            }
            else
                MessageBox(NULL, "O número total de cadastros já foi preenchido!", "Erro", MB_OK | MB_ICONEXCLAMATION);
        }

        else if(leu == false && opcao != 5){
            MessageBox(NULL, "Nenhuma conta foi cadastrada!", "Erro", MB_OK | MB_ICONEXCLAMATION);
            adicionar = cadastrar_contas(contas, cont);
            if(adicionar = true){
                cont++;
                leu = true;
            }
        }

        else if (opcao != 5)
            verifica_se_conta_existe(contas, cont, opcao);

        else
             cout << "Programa finaizado";

        fflush(stdin);
        getchar();
    }while(opcao != 5);
}

int cadastrar_contas(cadastros contas[], int cont){
    bool ler = true;
    string numero;

    cout << "Cadastro de contas\n";

    cout << "\nInforme o número da conta: ";
    cin >> numero;

    for(int i=0; i<cont; i++){
        if(contas[i].numero == numero)
            ler = false;
    }

    if(ler == false){
        MessageBox(NULL, "Essa conta já foi cadastrada!", "Erro", MB_OK | MB_ICONEXCLAMATION);
    }

    else{
        contas[cont].numero = numero;

        fflush(stdin);
        cout << "\nInforme o nome do cliente: ";
        getline(cin, contas[cont].nome);

        cout << "\nInforme o saldo inicial: ";
        cin >> contas[cont].saldo;

        system("cls");
        cout << "Conta adicionada!";
    }
    return ler;
}

void verifica_se_conta_existe(cadastros contas[], int cont, int opcao){
    string numero;
    bool leu = false;
    int i;

    cout << "Informe o número da conta: ";
    cin >> numero;

    for(i=0; i<cont; i++){
        if(numero == contas[i].numero){
            leu = true;
            break;
        }
    }
    if(opcao == 2 && leu == true)
        ver_conta(contas[i]);

    else if(opcao == 3 && leu == true)
        depositar(contas[i]);

    else if(opcao == 4 && leu == true)
        sacar(contas[i]);

    else {
        MessageBox(NULL, "Essa conta não foi cadastrada!", "Erro", MB_OK | MB_ICONEXCLAMATION);
    }
}

void ver_conta(cadastros &contas){
    cout << "\nNúmero da conta: " << contas.numero;
    cout << "\nNome do cliente: " << contas.nome;
    cout << "\nSaldo do cliente: " << contas.saldo;
}


void depositar(cadastros &contas){
    float valor;

    cout << "Informe a quantia que deseja depositar: R$";
    cin >> valor;
    valor = fabs(valor);

    contas.saldo += valor;

    system("cls");
    cout << "Valor adicionado!";
}

void sacar(cadastros &contas){
    float valor;

    cout << "Informe a quantia que deseja sacar: R$";
    cin >> valor;
    valor = fabs(valor);

    if(valor > contas.saldo)
        cout << "\n Não é possível efetuar o saque, o valor total de saldo é de: R$" << contas.saldo;
    else{
        contas.saldo -= valor;
        system("cls");
        cout << "Saldo atualizado!";
    }


}




