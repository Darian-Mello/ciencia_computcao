//Faça um programa que receba o salário de um funcionário chamado Carlos. Sabe-se
//que outro funcionário chamado João, tem salário equivalente a um terço do salário de
//Carlos. Carlos aplicará seu salário integralmente na caderneta de poupança, que está
//rendendo 2 % ao mês, e João aplicará seu salário integralmente no fundo de renda
//fixa, que está rendendo 5% ao mês. O programa deverá calcular e mostrar a
//quantidade de meses necessários para que o valor pertencente a João iguale ou
//ultrapasse o valor pertencente a Carlos.
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float carlo, joao, p;
    int mes;
    cout << "Olá Carlos, informe o seu salário!: R$";
    cin >> carlo;

    joao = carlo / 3;
    mes = 0;

    while(joao <= carlo){
        p = (carlo * 2) / 100;
        carlo = p + carlo;
        p = (joao * 5) / 100;
        joao = p + joao;
        mes ++;
    }

    cout << "Se forem aplicados da maneira antes informada, o salário de joão levara \n"
    << mes << " meses para atingir ou ultrapassar o de Carlos.\n";
}
