#include <iostream>
#include <stdlib.h>
#include<iomanip>
using namespace std;

void consulta(float saldo);
float saque(float saldo);
float deposito(float saldo);

main(){
    setlocale(LC_ALL,"Portuguese");
    float saldo=0;
    char opcao;

   do{
        do{
        cout << "\n(A)consulta saldo, (B)saque, (C)depósito, (D) sair: ";
        cin >> opcao;
        opcao = toupper(opcao);
        }while(opcao != 'A' && opcao != 'B'&& opcao != 'C' && opcao != 'D');
        system("cls");

        switch(opcao){
            case 'A':
                consulta(saldo);
                break;
            case 'B':
                saldo = saque(saldo);
                break;
            case 'C':
                saldo = deposito(saldo);
                break;
        }
        cout << fixed << setprecision(2);
        cout << "\nSaldo: R$" << saldo;
   }while(opcao != 'D');
}
void consulta(float saldo){
    cout << fixed << setprecision(2);
    cout << "Seu saldo atual é de: R$" << saldo << "\n\n\n";
}
float saque(float saldo){
    float n;
    do{
        cout << fixed << setprecision(2);
        cout << "\nSaldo: R$" << saldo;
        cout << "\nInforme quando deseja sacar: R$";
        cin >> n;
    }while(n<0 || n > saldo);

    saldo -= n;
    system("cls");
    return saldo;
}
float deposito(float saldo){
    float n;
    do{
        cout << fixed << setprecision(2);
        cout << "\nSaldo: R$" << saldo;
        cout << "\nInforme quando deseja depositar: R$";
        cin >> n;
    }while(n<0);

    saldo += n;
    system("cls");
    return saldo;
}
