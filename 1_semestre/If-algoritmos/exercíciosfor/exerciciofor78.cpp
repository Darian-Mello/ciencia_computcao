//Elabore um algoritmo que obtenha o m�ximo divisor comum (MDC) entre dois n�meros
//fornecidos
#include <iostream>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    int mdc;

    cout << "Informe os dois n�meros para saber O M�ximo Divisor comum: ";
    cout << "\nInforme o primeiro n�mero: ";
    cin >> n1;
    cout << "\nInforme o segundo n�mero: ";
    cin>> n2;

    if(n2 < n1)
        mdc = n2;
    else
        mdc = n1;
    for(mdc; n1 % mdc != 0 || n2 % mdc != 0; mdc--){
    }
    cout << "\nO MDC �: " << mdc;
}
