#include <cstring>
#include <stdlib.h>
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    string frase, palavra;

    cout << "Informe o seu nome: ";
    getline(cin, palavra);
    frase = "Seu nome é " + palavra;

    cout << "Informe sua idade(anos): ";
    getline(cin, palavra);
    frase += ", você tem " + palavra + " anos";

    cout << "Informe o nome da sua rua: ";
    getline(cin, palavra);
    frase += ", mora na rua " + palavra;

    cout << "Informe o seu telefone: ";
    getline(cin, palavra);
    frase += " e seu telefone é: " + palavra;

    system("cls");
    cout << endl << frase << endl;
}
