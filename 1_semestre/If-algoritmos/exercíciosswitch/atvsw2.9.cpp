#include <iostream>
#include <ctype.h>
using namespace std;

main(){
    setlocale(LC_ALL,"Portuguese");
    float n1, n2;
    char tipo;

    cout << "Informe um n�mero: ";
    cin >> n1;
    cout << "\nInforme outro n�mero: ";
    cin >> n2;

    do{
        cout << "\nqual opera��o voc� deseja efetuar?(- = subtra��o, + = adi��o, / = divis�o, * = multiplica��o) ";
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
