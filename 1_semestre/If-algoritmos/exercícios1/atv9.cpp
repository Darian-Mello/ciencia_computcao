#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float total, pagas, valor, divida, quitadas;

    cout << "Informe o n�mero total de presta��es: \n";
    cin >> total;

    cout << "informe a quantidade de presta��es pagas: \n";
    cin >> pagas;

    cout << "informe o valor da atual presta��o; \n";
    cin >> valor;

    quitadas = pagas * valor;
    divida = (total - pagas) * valor;

    cout << "O valor total que foi pago foi de: R$" << quitadas << endl;
    cout << "O valor total que deve ser pago �: R$" << divida << endl;




}
