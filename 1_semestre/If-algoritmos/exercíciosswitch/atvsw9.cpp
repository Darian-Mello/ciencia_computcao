//9 - Elabore um algoritmo que leia duas vari�veis dadas pelo usu�rio, em seguida apresente um menu para o usu�rio perguntando qual opera��o matem�tica ele deseja executar.
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
        cout << "\nqual opera��o voc� deseja efetuar?(s = subtra��o, a = adi��o, d = divis�o, m = multiplica��o) ";
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
