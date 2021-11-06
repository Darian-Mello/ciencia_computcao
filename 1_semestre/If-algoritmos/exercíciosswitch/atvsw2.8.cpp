#include <iostream>
#include <ctype.h>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float preco, npreco;
    int opc;

    cout << "Informe o preço do produto:  R$";
    cin >> preco;
    cout << "\nInforme a opção de pagamento(1 = A vista no cheque, 2 = a vista no credito, 3 = duas vezes sem juros, 4 =3 veses): ";
    cin >> opc;

    switch(opc){
    case 1:
        npreco = (preco * 10) / 100;
        preco = preco - npreco;
        cout << "\nO preço a ser pago é: R$" << preco;
        break;
    case 2:
        npreco = (preco * 5) / 100;
        preco = preco - npreco;
        cout << "\nO preço a ser pago é: R$" << preco;
        break;
    case 3:
        cout << "\nO preço a ser pago é: R$" << preco;
        break;
    case 4:
        npreco = (preco * 10) / 100;
        preco = preco + npreco;
        cout << "\nO preço a ser pago é: R$" << preco;
        break;
    default:
        cout << "\nvocê digitou um valor inválido! reinicie o programa.";
        break;
    }
}
