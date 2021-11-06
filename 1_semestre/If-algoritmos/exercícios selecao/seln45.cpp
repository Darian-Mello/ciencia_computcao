/* Um posto está vendendo combustíveis com a seguinte tabela de descontos:Álcool:Até 20 litros, desconto de 3 % Acima
de 20 litros, desconto de 5 %Gasolina:té 15 litros, desconto de 3,5 % Acimade 15 litros, desconto de 6 %
Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível
(codificado da seguinte forma: A-álcool G-Gasolina), calcule e imprima o valor a ser pago
pelo cliente, sabendo-se que o preço da gasolina é de R$ 2.590 o litro e o álcool R$ 1.650.*/
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float l, v, n;
    char q;
    cout << "qualtos litros abasteceu:\n";
    cin >> l;
    cout << "informe com A para alcool e g para gasulina:\n";
    cin >> q;
    if (q == 'A' || q == 'a'){
        if (l <= 20){
            l = 1.650 * l;
            v = (l * 3) / 100;
            n = l - v;
            cout << "com o desconto, o valor a pagar é: " << n;
        }
        else if (l > 20){
            l = 1.650 * l;
            v = (l * 5) / 100;
            n = l - v;
            cout << "com o desconto, o valor a pagar é: " << n;
        }
        else
            cout<< " voce digitou um valor invalido. ";
    }
    else if (q == 'G' || q == 'g'){
        if (l <= 15){
            l = 2.590 * l;
            v = (l * 3.5) / 100;
            n = l - v;
            cout << " com o desconto, o valor a pagar é: " << n;
        }
        else if (l > 15){
            l = 2.590 * l;
            v = (l * 6) / 100;
            n = l - v;
            cout << "com o desconto, o valor a pagar é: " << n;
        }
        else
            cout << " voce digitou um valor invalido. ";
    }
    else
        cout << " vove digitou um valor invalido. ";
}
