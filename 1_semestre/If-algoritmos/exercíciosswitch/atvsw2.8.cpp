#include <iostream>
#include <ctype.h>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float preco, npreco;
    int opc;

    cout << "Informe o pre�o do produto:  R$";
    cin >> preco;
    cout << "\nInforme a op��o de pagamento(1 = A vista no cheque, 2 = a vista no credito, 3 = duas vezes sem juros, 4 =3 veses): ";
    cin >> opc;

    switch(opc){
    case 1:
        npreco = (preco * 10) / 100;
        preco = preco - npreco;
        cout << "\nO pre�o a ser pago �: R$" << preco;
        break;
    case 2:
        npreco = (preco * 5) / 100;
        preco = preco - npreco;
        cout << "\nO pre�o a ser pago �: R$" << preco;
        break;
    case 3:
        cout << "\nO pre�o a ser pago �: R$" << preco;
        break;
    case 4:
        npreco = (preco * 10) / 100;
        preco = preco + npreco;
        cout << "\nO pre�o a ser pago �: R$" << preco;
        break;
    default:
        cout << "\nvoc� digitou um valor inv�lido! reinicie o programa.";
        break;
    }
}
