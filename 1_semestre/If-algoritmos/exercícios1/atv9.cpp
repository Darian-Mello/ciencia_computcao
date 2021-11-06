#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float total, pagas, valor, divida, quitadas;

    cout << "Informe o número total de prestações: \n";
    cin >> total;

    cout << "informe a quantidade de prestações pagas: \n";
    cin >> pagas;

    cout << "informe o valor da atual prestação; \n";
    cin >> valor;

    quitadas = pagas * valor;
    divida = (total - pagas) * valor;

    cout << "O valor total que foi pago foi de: R$" << quitadas << endl;
    cout << "O valor total que deve ser pago é: R$" << divida << endl;




}
