#include <iostream>
#include <ctype.h>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float n1, n2;
    char tipo;

    cout << "Informe um número: ";
    cin >> n1;
    cout << "\nInforme outro número: ";
    cin >> n2;

    do{
        cout << "\nqual operação você deseja efetuar?(- = subtração, + = adição, / = divisão, * = multiplicação) ";
        cin >> tipo;
        tipo = toupper(tipo);
    }while(tipo != '/' && tipo != '*' && tipo != '-' && tipo != '+');

    switch(tipo){
    case '-':
        cout << n1 << " - " << n2 << " = " << n1-n2;
        break;
    case '*':
        cout << n1 << " x " << n2 << " = " << n1*n2;
        break;
    case '/':
        cout << n1 << " / " << n2 << " = " << n1/n2;
        break;
    case '+':
        cout << n1 << " + " << n2 << " = " << n1+n2;
        break;
    }
}
