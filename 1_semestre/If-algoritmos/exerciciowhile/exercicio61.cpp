//Supondo que a população de uma cidade “A” seja de 90.000, com taxa de
//crescimento de 3,1% ao mês, e que a população de uma cidade “B” seja de 200.000,
//com taxa de crescimento de 1,5% aos mês. Escrever um algoritmo e um programa
//que calcule e escreva com quantos meses a cidade “A” ultrapassaria em população da
//cidade “B”, mantendo as taxas atuais de crescimento. Mostrar as populações das
//cidades.
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float a = 90000, b = 200000, an, bn, pa, pb;
    int mes = 0;

    while(a < b){
        pa = (3.1 * a) / 100;
        pb = (1.5 * b) / 100;

        an = a + pa;
        a = an;
        bn = b + pb;
        b = bn;
        mes = mes + 1;
      }
    cout << "Levariam " << mes <<" meses para a cidade A ultrapassar a cidade B\n";
    cout << "sendo que a cidade A teria "<< a <<" habitantes "<< "\nE a cidade B " << b <<" habitantes.";
}

