#include <iostream>

using namespace std;

float pesoideal(float alt, char sexo);
main(){
    setlocale(LC_ALL,"Portuguese");
    float alt, peso;
    char sexo;


    cout << "Vamos calcular seu peso ideal!\n";
    do{
        cout << "\nInforme seu sexo(M ou F): ";
        cin >> sexo;
        sexo = toupper(sexo);
    }while(sexo != 'F' && sexo != 'M');

    do{
        cout << "\nInforme sua altura em m: ";
        cin >> alt;
    }while(alt <= 0);

    peso = pesoideal(alt, sexo);

    cout << "\nSeu pesso ideal é: " << peso << "Kg.\n";
}

float pesoideal(float alt, char sexo){
    float peso;

    if(sexo == 'M')
        peso = 72.7 * alt - 58;
    else
        peso = 62.1 * alt - 44.7;

    return peso;
}

