/*Tr�s amigos. Carlos, Andre e Felipe, decidiram rachar igualmente a conta de u,m bar.
Fa�a um algoritmo para ler o valor total da conta e mostre quanto cada um deve pagar, mas fa�a
com que Carlos e Andre n�o paguem os centavos.
EX : uma conta de 101,53 resulta em 33,00 para Carlos. 33,00 para Andre e 35,53 para Felipe*/
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float conta, nconta, felipe;
    int andre, carlos;

    cout << "Informe o valor da conta\n";
    cin >> conta;

    nconta = conta / 3;
    andre = nconta;
    carlos = nconta;
    felipe = conta - (andre + carlos);

    cout << "Carlos e Andr� devem pagar, cada um: " << andre << endl;
    cout << "felipe deve pagar:" << felipe;

}
