/*Fa�a um algoritmo que leia a velocidade permitida em uma via, a velocidade
praticada por um motorista, e informe se o mesmo receber� multa ou n�o, e o
valor a pagar. Caso tenha excedido a velocidade em at� 20% da permitida, o
motorista receber� uma multa de R$ 102,00. Caso tenha excedido a velocidade
acima de 20% da permitida, o motorista receber� uma multa de R$ 500,00.*/
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float vp, v, valor;

    cout << "informe a velocidade permitida na via:\n";
    cin >> vp;
    cout << "informe a velocidade em que seu ve�culo estava:\n";
    cin >> v;

    valor = (vp * 20) / 100;
    valor = vp + valor;

    if (v > vp){
        if (v > vp && v <= valor){
            cout << "Voce levou uma multa de RS 102.00";
        }
        else if (v > valor){
            cout << "Voce levou uma multa de RS 500.00";
        }
        else
            cout << "Voce digitou um valor inv�lido.";
    }
    else
        cout << "voce n�o levou multa.";


}
