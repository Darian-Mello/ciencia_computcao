#include <iostream>
#include <ctype.h>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float peso, h, tipo;
    cout << "Informe o seu peso(em kg): ";
    cin >> peso;
    cout << "\nInforme a sua altura:(em m) ";
    cin >> h;

    tipo = peso / (h * h);

    if(tipo < 18.5){
        cout << "\nVoce esta abaixo do peso!\n";
    }
    else if(tipo >= 18.5 && tipo <= 25){
        cout << "\nVoce esta com o peso normal!\n";
    }
    else if(tipo > 25 && tipo <= 30){
        cout << "\nVoce esta acima do peso!\n";
    }
    else if(tipo > 30){
        cout << "\nVoce esta obeso!\n";
    }
    else
        cout << "\nVoce digitou um valor invalido, Reinicie o programa.";
}
