/*Desenvolva um algoritmo que fa�a o calculo do sal�rio liquido de um profissional que trabalhe por
hora.
Para fazer este programa, � necess�rio possuir alguns dados b�sicos, tais como valor da hora
de trabalho, numero de horas trabalhadas no M�s e o percentual de desconto do INSS.
O programa em quest�o deve apresentar o valor do sal�rio bruto, o valor descontado e o
valor do sal�rio liquido.
Passos ;
1 � estabelecer a leitura da vari�vel HT (Horas Trabalhadas)
2 � estabelecer a leitura da vari�vel VH ( Valor da Hora Trabalhada)
3 � estabelecer a leitura da vari�vel PD (percentual de desconto)
4 � Calcular o Sal�rio Bruto (SB), sendo este a mult. de HT por VH
5 � Calcular o Total de Descontos TD com base no valor do PD / 100.
6 � Calcular o sal�rio liquido SL, subtraindo o desconto do sal�rio bruto
7 � Apresentar os valores dos sal�rio bruto, liquido : SB, TD e SL*/

#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float ht, vh, pd, sb, td, sl;

    cout << "informe o n�mero de horas trabalhadas: \n";
    cin >> ht;

    cout << "informe o valor da hora trabalhada: \n";
    cin >> vh;

    cout << "informe o percetual de desconto do INSS: \n";
    cin >> pd;

    sb = ht * vh;
    td = pd / 100;
    sl = sb - td;

    cout << "seu sal�rio bruto �: " << sb << endl;
    cout << "o total de descontos �: " << td << endl;
    cout << "seu sal�rio liquido �: " << sl << endl;




}
