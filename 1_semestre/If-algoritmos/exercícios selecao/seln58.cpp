/*Fa�a um algoritmo que calcule o valor da conta de luz de uma pessoa.
Sabe -se que o c�lculo da conta de luz segue a tabela abaixo:
Tipo de Cliente Valor do KW/h
1 (Resid�ncia) 0,60
2 (Com�rcio) 0,48
3 (Ind�stria) 1,29*/
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float tipo, valor, n;

    cout << "informe o tipo de cliente que �s: 1 (Resid�ncia), 2 (Com�rcio), 3(Ind�stria)\n";
    cin >>tipo;
    cout << "informe o numero de kw gastos\n";
    cin>> n;

    if (tipo == 1){
        valor = n * 0.60;
        cout << "o valor da sua conta �:\n" << valor;
    }
    else if (tipo == 2){
        valor = n * 0.48;
        cout << "o valor da sua conta �:\n" << valor;
    }
    else if (tipo == 3){
        valor = n * 1.29;
        cout << "o valor da sua conta �:\n" << valor;
    }
    else
        cout << "voce digitou um valor errado.\n";
}
