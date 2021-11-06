#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float salario, vendas, porcentagem, total ;
    cout << "Informe seu salário fixo: \n";
    cin >> salario;

    cout << "Informe o valor das suas vendas: \n";
    cin >> vendas;

    porcentagem = (vendas * 4) / 100; // a comicao por venda é de 4%.
    total = salario + porcentagem;

    cout << " Sua comição será de R$" << porcentagem << endl;
    cout <<  " Seu salário final é de: R$" << total << endl;

}
