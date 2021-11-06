/*Crie um algoritmo que entre com o nome da pessoa e a idade, mostrar o nome e o valor que
ela deverá pagar:*/
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float idade;
    string nome;

    cout << "Informe o seu nome: \n";
    cin >> nome;
    cout << "Informe a sua idade: \n";
    cin >> idade;

    if (idade > 0 && idade < 150){
        if (idade <= 10){
            cout << endl << nome << endl;
            cout << "Deverá pagar: R$" << 30;
        }

        else if (idade >= 10 && idade <= 29){
            cout << endl << nome << endl;
            cout << "Deverá pagar: R$" << 60;
        }

        else if (idade >= 29 && idade <= 45){
            cout << endl << nome << endl;
            cout << "Deverá pagar: R$" << 120;
        }

        else if (idade >= 45 && idade <= 59){
            cout << endl << nome << endl;
            cout << "Deverá pagar: R$" << 150;
        }

        else if (idade >= 59 && idade <= 65){
            cout << endl << nome << endl;
            cout << "Deverá pagar: R$" << 250;
        }

        else if (idade > 65){
            cout << endl << nome << endl;
            cout << "Deverá pagar: R$" << 400;
        }
    }
    else {
        cout << "\n você digitou um valor invalido.\n ";
    }
}
