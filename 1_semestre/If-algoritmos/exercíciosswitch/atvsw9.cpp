//9 - Elabore um algoritmo que leia duas variáveis dadas pelo usuário, em seguida apresente um menu para o usuário perguntando qual operação matemática ele deseja executar.
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
        cout << "\nqual operação você deseja efetuar?(s = subtração, a = adição, d = divisão, m = multiplicação) ";
        cin >> tipo;
        tipo = toupper(tipo);
    }while(tipo != 'S' && tipo != 'A' && tipo != 'D' && tipo != 'M');

    switch(tipo){
    case 'S':
        cout << n1 << " - " << n2 << " = " << n1-n2;
        break;
    case 'M':
        cout << n1 << " x " << n2 << " = " << n1*n2;
        break;
    case 'D':
        cout << n1 << " / " << n2 << " = " << n1/n2;
        break;
    case 'A':
        cout << n1 << " + " << n2 << " = " << n1+n2;
        break;
    }
}
