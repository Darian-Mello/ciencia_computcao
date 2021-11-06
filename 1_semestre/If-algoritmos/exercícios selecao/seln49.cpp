/*Uma empresa irá dar um aumento de salário aos seus funcionários de acordo com a
categoria de cada empregado. O aumento seguirá a seguinte regra:
 A, C, F, e H ganharão 10 % de aumento sobre o salário
 B, D , E , I , J e T ganharão 15 % de aumento sobre o salário
 K e R ganharão 25 % de aumento sobre o salário
 L, M , N , O P e S ganharão 35 % de aumento sobre o salário
 U, V , X , Z e W ganharão 50 % de aumento sobre o salário
Faça o algoritmo que leia o nome, categoria e salário do empregado, e mostre o salário
reajustado*/
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float salario, novo;
    string nome;
    char cat;

    cout << "informe o seu nome\n";
    cin >> nome;

    cout << "informe sua categoria\n";
    cin >> cat;

    cout << "informe o seu salario\n";
    cin >> salario;

    if (cat == 'a' || cat == 'c' || cat == 'f' || cat == 'h'){
        novo = (salario * 10) / 100;
        novo = salario + novo;
        cout << nome << endl << "seu novo salário é: RS" << novo;
    }
    else if (cat == 'b' || cat == 'd' || cat == 'e' || cat == 'i' || cat == 'j' || cat =='t'){
        novo = (salario * 15) / 100;
        novo = salario + novo;
        cout << nome << endl << "seu novo salario: RS" << novo;
    }
    else if (cat == 'k' || cat == 'r'){
        novo = (salario * 25) / 100;
        novo = salario + novo;
        cout << nome << endl << "seu novo salario: RS" << novo;
    }
    else if (cat == 'l' || cat == 'm' || cat == 'n' || cat == 'o' || cat == 'p' || cat =='s'){
        novo = (salario * 35) / 100;
        novo = salario + novo;
        cout << nome << endl << "seu novo salario: RS" << novo;
    }
    else if (cat == 'u' || cat == 'v' || cat == 'x' || cat == 'z' || cat == 'w'){
        novo = (salario * 50) / 100;
        novo = salario + novo;
        cout << nome << endl << "seu novo salario: RS" << novo;
    }
    else
        cout << "Voce digitou um valor invalido\n";

}
