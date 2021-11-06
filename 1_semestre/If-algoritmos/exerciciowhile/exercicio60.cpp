//Fa�a um programa que receba o sal�rio de um funcion�rio chamado Carlos. Sabe-se
//que outro funcion�rio chamado Jo�o, tem sal�rio equivalente a um ter�o do sal�rio de
//Carlos. Carlos aplicar� seu sal�rio integralmente na caderneta de poupan�a, que est�
//rendendo 2 % ao m�s, e Jo�o aplicar� seu sal�rio integralmente no fundo de renda
//fixa, que est� rendendo 5% ao m�s. O programa dever� calcular e mostrar a
//quantidade de meses necess�rios para que o valor pertencente a Jo�o iguale ou
//ultrapasse o valor pertencente a Carlos.
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float carlo, joao, p;
    int mes;
    cout << "Ol� Carlos, informe o seu sal�rio!: R$";
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

    cout << "Se forem aplicados da maneira antes informada, o sal�rio de jo�o levara \n"
    << mes << " meses para atingir ou ultrapassar o de Carlos.\n";
}
