/*Fa�a um programa que recebe o n�mero de horas trabalhadas, o valor do sal�rio m�nimo e o
n�mero de horas extras trabalhadas, calcule e mostre o sal�rio a receber , seguindo as seguintes
regras:
a) a hora trabalhada vale 1/8 do sal�rio m�nimo;
b) a hora extra vale � do sal�rio m�nimo;
c) o sal�rio bruto equivale ao numero de horas trabalhada multiplicada pelo valor da hora
trabalhada;
d) a quantia a receber pelas horas extras equivale ao n�mero de horas extras trabalhadas
multiplicada pelo valor da hora extra.
e) o sal�rio a receber equivale ao sal�rio bruto mais a quantia a receber pelas horas extras.*/
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float valorsalariom, nhtrabalhada, nhextra, salbruto, salextra, valorhextra, valorhbruta, novosalario;

    cout << "informe o valor do sal�rio m�nimo: \n";
    cin >> valorsalariom;

    cout << "informe o n�mero de horas trabalhadas: \n";
    cin >> nhtrabalhada;

    cout << "Informe a n�mero de horas extras trabalhadas: \n";
    cin >> nhextra;

    valorhbruta = valorsalariom / 8;
    salbruto = valorhbruta * nhtrabalhada;
    valorhextra = valorsalariom / 4;
    salextra = valorhextra * nhextra;
    novosalario = salextra + salbruto;

    cout << "Seu salario final � de:\n" << novosalario << endl;










}
