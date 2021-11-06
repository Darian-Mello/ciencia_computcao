//Elabore um algoritmo que obtenha o máximo divisor comum (MDC) entre dois números
//fornecidos
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    int mdc;

    cout << "Informe os dois números para saber O Máximo Divisor comum: ";
    cout << "\nInforme o primeiro número: ";
    cin >> n1;
    cout << "\nInforme o segundo número: ";
    cin>> n2;

    if(n2 < n1)
        mdc = n2;
    else
        mdc = n1;
    for(mdc; n1 % mdc != 0 || n2 % mdc != 0; mdc--){
    }
    cout << "\nO MDC é: " << mdc;
}
