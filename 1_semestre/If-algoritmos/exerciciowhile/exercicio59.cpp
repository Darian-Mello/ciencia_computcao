//Jo�o possui R$ 1.800,00. Gostaria de comprar um computador que custa R$ 2.000.
//Ele gosta de aplicar seu dinheiro na caderneta de poupan�a, que paga sempre 1,5% ao
//m�s. Supondo que o pre�o do computador n�o mude, escreva um algoritmo e um
//programa que calcule em quantos meses Jo�o ir� poder comprar o computador,
//mostrando a evolu��o de seu saldo na poupan�a, conforme o modelo abaixo.
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float juro, saldoi, saldof;
    int mes;
    string n;

    saldoi = 1800;
    juro = (saldoi*1.5)/100;
    mes = 1;
    saldof = saldoi + juro;

    cout << "       Saldo anterior" << "         Juro" << "         saldo atual\n";

    while(saldof <= 2000){
        cout.precision(2);
        cout << std::fixed << mes << "� M�s        " << saldoi << "         " << juro << "         " << saldof << endl;;

        mes++;
        saldoi = saldof;
        juro = (saldoi * 1.5) / 100;
        saldof = saldoi + juro;
    }

    cout << "\nJo�o levaria pouco mais que " << mes - 1 << " meses para poder comprar o computador.\n";
}
