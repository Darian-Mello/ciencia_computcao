/*Desenvolva um algoritmo que faça o calculo do salário liquido de um profissional que trabalhe por
hora.
Para fazer este programa, é necessário possuir alguns dados básicos, tais como valor da hora
de trabalho, numero de horas trabalhadas no Mês e o percentual de desconto do INSS.
O programa em questão deve apresentar o valor do salário bruto, o valor descontado e o
valor do salário liquido.
Passos ;
1 – estabelecer a leitura da variável HT (Horas Trabalhadas)
2 – estabelecer a leitura da variável VH ( Valor da Hora Trabalhada)
3 – estabelecer a leitura da variável PD (percentual de desconto)
4 – Calcular o Salário Bruto (SB), sendo este a mult. de HT por VH
5 – Calcular o Total de Descontos TD com base no valor do PD / 100.
6 – Calcular o salário liquido SL, subtraindo o desconto do salário bruto
7 – Apresentar os valores dos salário bruto, liquido : SB, TD e SL*/

#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float ht, vh, pd, sb, td, sl;

    cout << "informe o número de horas trabalhadas: \n";
    cin >> ht;

    cout << "informe o valor da hora trabalhada: \n";
    cin >> vh;

    cout << "informe o percetual de desconto do INSS: \n";
    cin >> pd;

    sb = ht * vh;
    td = pd / 100;
    sl = sb - td;

    cout << "seu salário bruto é: " << sb << endl;
    cout << "o total de descontos é: " << td << endl;
    cout << "seu salário liquido é: " << sl << endl;




}
