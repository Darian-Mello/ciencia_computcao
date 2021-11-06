/*Escrever um algoritmo para uma empresa que decide dar um reajuste a seus 584
funcionários de acordo com os seguintes critérios:
a) 50% para aqueles que ganham menos do que três salários mínimos;
b) 20% para aqueles que ganham entre três até dez salários mínimos;
c) 15% para aqueles que ganham acima de dez até vinte salários mínimos;
d) 10% para os demais funcionários.
Leia o nome do funcionário, seu salário e o valor do salário mínimo. Calcule o seu
novo salário reajustado. Escrever o nome do funcionário, o reajuste e seu novo
salário.*/
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
        cout << "seu salario com o reajuste é de R$" << sn;
    }
    else if((salario*3)<salario && salario < (salario*10)){
        sn = (salario * 20)/100;
        sn = salario + sn;
        cout << "seu salario com o reajuste é de R$" << sn;
    }
    else if((salario*10)<salario && salario < (salario*20)){
        sn = (salario * 15)/100;
        sn = salario + sn;
        cout << "seu salario com o reajuste é de R$" << sn;
    }
    else if(salario > (salario*20)){
        sn = (salario * 10)/100;
        sn = salario + sn;
        cout << "seu salario com o reajuste é de R$" << sn;
    }
    else
        cout << "voce digitou um valor errado.";
}
