#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float salario, reajuste, porcentagem, snovo;

    cout << "informe o valor do salário: \n";
    cin >> salario;

    cout << "informe o percentual do reajuste: \n";
    cin >> reajuste;

    porcentagem = (salario * reajuste) / 100;
    snovo = salario + porcentagem;

    cout << "seu salário com o reajuste passa a ser: R$" << snovo << endl;



}
