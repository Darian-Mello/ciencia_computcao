#include <iostream>
#include <stdlib.h>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float h, patual, pideal;
    char sexo;

    cout << "Vamos calcular o seu peso ideal!";
    cout << "\n\nInforme a sua altura: ";
    cin >> h;
    cout << "\nInforme o seu peso atual: ";
    cin >> patual;
    do{
        cout << "\nInforme o seu sexo(M – Masculino, F – Feminino): ";
        cin >> sexo;
        sexo = toupper(sexo);
    }while(sexo != 'M' && sexo != 'F');

    system("cls");
    if(sexo == 'M')
        pideal = (72.7 * h) - 58;
    else
        pideal = (62.1 * h) - 44.7;

    cout << fixed;
    cout.precision(2);
    if(patual < (pideal - 3)){
        cout << "Você esta abaixo do seu peso ideal!";
        cout << "\nSua faixa de peso recomendada está entre " << pideal - 3 << "Kg e " << pideal + 3 << "Kg.\n";
    }
    else if(patual > (pideal + 3)){
        cout << "Você esta acima do seu peso ideal!";
        cout << "\nSua faixa de peso recomendada está entre " << pideal - 3 << "Kg e " << pideal + 3 << "Kg.\n";
    }
    else{
        cout << "Parabéns, seu peso é o ideal!!!";
        cout << "\nSua faixa de peso recomendada está entre " << pideal - 3 << "Kg e " << pideal + 3 << "Kg.\n";
    }
}
