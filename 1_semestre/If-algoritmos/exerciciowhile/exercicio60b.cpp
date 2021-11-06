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
    float carlo, joao, carlon, joaon, pc, pj;
    int mes;
    cout << "Olá Carlos, informe o seu salário!: R$";
    cin >> carlo;

    joao = carlo / 3;
    mes = 0;
    pc = (carlo * 2) / 100;
    pj = (joao * 5) / 100;

    while(joao < carlo){
        carlon = pc + carlo;
        carlo = carlon;
        joaon = pj + joao;
        joao = joaon;
        mes = mes + 1;
    }

    cout << "Se forem aplicados da maneira antes informada, o salário de joão levara \n"
    << mes << " meses para atingir ou ultrapassar o de Carlos.\n";
}
