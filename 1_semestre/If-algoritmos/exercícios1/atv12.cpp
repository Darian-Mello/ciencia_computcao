#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float salario, vendas, porcentagem, total ;
    cout << "Informe seu sal�rio fixo: \n";
    cin >> salario;

    cout << "Informe o valor das suas vendas: \n";
    cin >> vendas;

    porcentagem = (vendas * 4) / 100; // a comicao por venda � de 4%.
    total = salario + porcentagem;

    cout << " Sua comi��o ser� de R$" << porcentagem << endl;
    cout <<  " Seu sal�rio final � de: R$" << total << endl;

}
