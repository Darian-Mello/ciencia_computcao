/*Faça um programa que recebe o número de horas trabalhadas, o valor do salário mínimo e o
número de horas extras trabalhadas, calcule e mostre o salário a receber , seguindo as seguintes
regras:
a) a hora trabalhada vale 1/8 do salário mínimo;
b) a hora extra vale ¼ do salário mínimo;
c) o salário bruto equivale ao numero de horas trabalhada multiplicada pelo valor da hora
trabalhada;
d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas
multiplicada pelo valor da hora extra.
e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.*/
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"portuguese");
    float valorsalariom, nhtrabalhada, nhextra, salbruto, salextra, valorhextra, valorhbruta, novosalario;

    cout << "informe o valor do salário mínimo: \n";
    cin >> valorsalariom;

    cout << "informe o número de horas trabalhadas: \n";
    cin >> nhtrabalhada;

    cout << "Informe a número de horas extras trabalhadas: \n";
    cin >> nhextra;

    valorhbruta = valorsalariom / 8;
    salbruto = valorhbruta * nhtrabalhada;
    valorhextra = valorsalariom / 4;
    salextra = valorhextra * nhextra;
    novosalario = salextra + salbruto;

    cout << "Seu salario final é de:\n" << novosalario << endl;










}
