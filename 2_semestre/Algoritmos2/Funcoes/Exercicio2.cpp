#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

float calcula(float salfixo, float vendas, float comicao, float descontos);
void representa(float salario);

main(){
    setlocale(LC_ALL,"Portuguese");
    float salfixo, vendas, comicao, descontos, salfinal;
    cout << "Vamos calcular o sal�rio final!!\n\n";
    cout << "Informe o sal�rio fixo(R$): ";
    cin >> salfixo;
    cout << "\nInforme o valor das vendas(R$): ";
    cin >> vendas;

    comicao = (vendas*5) / 100;
    descontos = ((salfixo+comicao)*11) / 100;
    salfinal = calcula(salfixo, vendas, comicao, descontos);

    system("cls");
    cout << fixed;
    cout.precision(2);
    cout << "\nConsiderando a comi��o de 5% em vendas e os 11% de descontos do INSS, o sal�rio final ficou em: ";
    cout << "\nR$" << salfinal << ";";
    cout << "\n\nEquivalente a " << salfinal / 1100 << " sal�rio(s) m�nimos(s);\n";
}
float calcula(float salfixo, float vendas, float comicao, float descontos){
    float salfinal;

    salfinal = salfixo + comicao;
    salfinal -= descontos;
    return salfinal;
}

