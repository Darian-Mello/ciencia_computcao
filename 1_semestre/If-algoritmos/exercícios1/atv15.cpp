#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float salario, qw, valorqw, pagar, porcentagem, novovalor;
    // cada 100 qw  equivalem a R$7.

    cout << "informe o valor do sal�rio m�nimo: \n";
    cin >>  salario;

    cout << " informe a quantidade de qw gasta em sua resed�ncia: \n";
    cin >> qw;

    valorqw = (salario / 7) / 100;
    pagar = valorqw * qw;
    porcentagem = (pagar * 10) / 100;
    novovalor = pagar - porcentagem;

    cout << "O valor de cada qw � R$" << valorqw << endl;
    cout << "O valor a ser pago � R$" << pagar << endl;
    cout << "O volor com um desconto de 10% fica R$" << novovalor <<endl;


}
