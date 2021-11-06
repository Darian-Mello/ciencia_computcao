/*Faça um algoritmo que calcule e imprima o valor da conta de luz, a partir da
leitura do consumo em KwH do mês anterior e do mês atual marcado no relógio.
O cálculo deverá se basear nos dados da tabela abaixo*/
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float contaa, contab, valor;

    cout << "informe o consumo em kwH do mes passado:\n";
    cin >> contaa;
    cout << "informe o consumo em kwH deste mes:\n";
    cin >> contab;

    valor = contaa + contab;

    if (valor > 0 && valor >= 70){
        valor = valor * 0.09;
        cout << "O valor a ser pago é: RS" << valor << endl;
    }
    else if (valor > 70 && valor >= 150){
        valor = valor * 0.20;
        cout << "O valor a ser pago é: RS" << valor << endl;
    }
    else if (valor > 150 && valor >= 200){
        valor = valor * 0.23;
        cout << "O valor a ser pago é: RS" << valor << endl;
    }
    else if (valor > 200){
        valor = valor * 0.26;
        cout << "O valor a ser pago é: RS" << valor << endl;
    }
    else{
        cout << "Voce digitou um valor não existente.\n";
    }
}
