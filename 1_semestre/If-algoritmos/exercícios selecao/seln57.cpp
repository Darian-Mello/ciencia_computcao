/*Escrever um algoritmo para uma empresa que decide dar um reajuste a seus 584
funcion�rios de acordo com os seguintes crit�rios:
a) 50% para aqueles que ganham menos do que tr�s sal�rios m�nimos;
b) 20% para aqueles que ganham entre tr�s at� dez sal�rios m�nimos;
c) 15% para aqueles que ganham acima de dez at� vinte sal�rios m�nimos;
d) 10% para os demais funcion�rios.
Leia o nome do funcion�rio, seu sal�rio e o valor do sal�rio m�nimo. Calcule o seu
novo sal�rio reajustado. Escrever o nome do funcion�rio, o reajuste e seu novo
sal�rio.*/
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float salario, minimo, sn;
    string nome;

    cout << "informe seu nome\n";
    cin >> nome;
    cout << "informe o valor do salario minimo\n";
    cin >> minimo;
    cout << "informe o valor do seu salario\n";
    cin >> salario;

    if((salario*3) < minimo){
        sn = (salario * 50)/100;
        sn = salario + sn;
        cout << "seu salario com o reajuste � de R$" << sn;
    }
    else if((salario*3)<salario && salario < (salario*10)){
        sn = (salario * 20)/100;
        sn = salario + sn;
        cout << "seu salario com o reajuste � de R$" << sn;
    }
    else if((salario*10)<salario && salario < (salario*20)){
        sn = (salario * 15)/100;
        sn = salario + sn;
        cout << "seu salario com o reajuste � de R$" << sn;
    }
    else if(salario > (salario*20)){
        sn = (salario * 10)/100;
        sn = salario + sn;
        cout << "seu salario com o reajuste � de R$" << sn;
    }
    else
        cout << "voce digitou um valor errado.";
}
