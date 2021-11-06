#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <windows.h>
#include <cstring>
using namespace std;

int leitura();
void primo(int n);
void somaalgarismo(string valor);
void soma2(int n);

main(){
    setlocale(LC_ALL,"Portuguese");
    int opcao, valor, confirma;
    bool leu = false;

    do{
        system("cls");
        cout << "############################\n";
        cout << "# 0 – Sair                 #\n";
        cout << "# 1 – Ler um valor         #\n";
        cout << "# 2 – Verificar se é primo #\n";
        cout << "# 3 – Somar algarismos     #\n";
        cout << "############################\n";
        do{
            cout << "\nOpção desejada: ";
            cin >> opcao;

            if(opcao < 0 || opcao > 3)
                MessageBox(NULL, "Escolha uma opção presente no menu!", "Erro", MB_OK | MB_ICONERROR);
                // MessageBox exibe um alerta na tela, optei por isso ao invéz de usar cout.

        }while(opcao < 0 || opcao > 3);

        system("cls");

        switch(opcao){
        case 0:
            cout << "Programa finalizado!!";
            break;

        case 1:
            valor = leitura();
            leu = true;
            break;

        case 2:
            if(leu != true){
                MessageBox(NULL, "Nenhum valor foi informado!", "Erro", MB_OK | MB_ICONINFORMATION);
                valor = leitura();
                leu = true;
            }
            primo(valor);
            break;

        case 3:
            if(leu != true){
                MessageBox(NULL, "Nenhum valor foi informado!", "Erro", MB_OK | MB_ICONINFORMATION);
                valor = leitura();
                leu = true;
            }

            if(valor < 0 || valor > 999){
                do{
                    confirma = MessageBox(NULL, "A opção 3 só pode ser acionada se o número for maior que zero e menor ou igual a 999. Informe um número compatível: ",
                    "Erro", 1 | MB_ICONEXCLAMATION);
                    // caso o usuario clik em cancelar, retornara ao menu.
                    if(confirma == IDOK)
                            valor = leitura();
                    else
                        break;
                        // O break fara vai cancelar o loop e voltar ao menu.
                }while(valor < 0 || valor > 999);
            }

            if(valor > 0 && valor < 999){
                //somaalgarismo(to_string(valor));
                soma2(valor);
            }

            break;
        }

        fflush(stdin);
        getchar();
    }while(opcao != 0);
}

int leitura(){
    int valor;
    cout << "\nInforme o número: ";
    cin >> valor;
    cout << "\nValor " << valor << " adicionado!";
    return valor;
}

void primo(int n){
    bool naoprimo = false;

    for(int i=2; i<=n; i++){
        if((n % i) == 0 && i != n){
            naoprimo = true;
        }
    }
    if(naoprimo == true || n<2)
        cout << "\nO número " << n << " não é primo!!!";
    else
        cout << "\nO número " << n << " é primo!!!";
}

void somaalgarismo(string valor){
    int  soma=0, aux;
    char x[1];

    for(int i=0; i<valor.size(); i++){
        x[0] = valor[i];
        soma += atoi(x);
    }

    cout << "\nA soma entre os algarismos do número " << valor << " é igual à: " << soma;

        // -48 para diminuir a tabela ascII do teclado
        // soma += valor[i] - 48;
}

void soma2(int n){
    int rest, soma=0;

    do{
        rest = n % 10;
        soma += rest;
        n = n / 10;
    }while(n > 9);

    soma += n;

    cout << "\nA soma entre os algarismos é "<< soma << endl;
}



